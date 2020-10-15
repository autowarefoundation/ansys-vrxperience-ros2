// Copyright 2020 Adam Gotlib (WUT Driverless)
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef VRXPERIENCE_BRIDGE__SIM_DATA_RECEIVER_HPP_
#define VRXPERIENCE_BRIDGE__SIM_DATA_RECEIVER_HPP_

#include <rclcpp/rclcpp.hpp>
#include <dds/dds.h>

#include <string>

#define IN
#define OUT &

// An array of one message (aka sample in DDS terms) will be used
#define MAX_SAMPLES 1

namespace vrxperience_bridge
{

template<class SimMsg, class RosMsg>
class SimDataReceiver : public rclcpp::Node
{
public:
  typedef void (* sim2ros)(SimMsg IN, RosMsg OUT);

  SimDataReceiver(std::string ros_node_name, dds_topic_descriptor_t dds_topic_desc, sim2ros convert)
  : Node(ros_node_name), dds_topic_desc_(dds_topic_desc), convert_(convert)
  {
    // Declare and read ROS parameters
    ros_topic_ = declare_parameter("ros_topic", "");
    dds_topic_ = declare_parameter("dds_topic", "");
    dds_domain_ = declare_parameter("dds_domain", 0);
  }

  void run()
  {
    // Create DDS Domain Participant with appropriate Topic and Data Reader
    auto participant = dds_create_participant(dds_domain_, nullptr, nullptr);
    auto topic = dds_create_topic(
      participant, &dds_topic_desc_,
      dds_topic_.c_str(), nullptr, nullptr);
    auto reader = dds_create_reader(participant, topic, nullptr, nullptr);

    // Create ROS Publisher
    ros_publisher_ = create_publisher<RosMsg>(ros_topic_, 1);

    void * samples[MAX_SAMPLES];
    dds_sample_info_t infos[MAX_SAMPLES];

    // Allocate memory to hold samples
    for (int i = 0; i < MAX_SAMPLES; i++) {
      samples[i] = dds_alloc(sizeof(SimMsg));
    }

    while (rclcpp::ok()) {
      auto ret = dds_read(reader, samples, infos, MAX_SAMPLES, MAX_SAMPLES);

      // Iterate through the samples and publish to ROS 2 if there are any new
      for (int i = 0; i < ret; i++) {
        if (infos[i].sample_state == DDS_SST_NOT_READ && infos[i].valid_data) {
          RosMsg rosMsg;
          (*convert_)(*(reinterpret_cast<SimMsg *>(samples[i])), rosMsg);
          ros_publisher_->publish(rosMsg);
        }
      }
    }
  }

private:
  dds_topic_descriptor_t dds_topic_desc_;
  sim2ros convert_;

  std::string ros_topic_;
  std::string dds_topic_;
  int dds_domain_;

  typename rclcpp::Publisher<RosMsg>::SharedPtr ros_publisher_;
};  // class SimDataReceiver

}  // namespace vrxperience_bridge

#endif  // VRXPERIENCE_BRIDGE__SIM_DATA_RECEIVER_HPP_
