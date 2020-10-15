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

#include <chrono>
#include <string>

#define IN
#define OUT &

// An array of one message (aka sample in DDS terms) will be used
#define MAX_SAMPLES 1

namespace vrxperience_bridge
{

static constexpr int WORLD_FRAME = 0;
static constexpr int VEHICLE_FRAME = 1;
static constexpr int SENSOR_FRAME = 2;

using std::placeholders::_1;
using std::placeholders::_2;

template<class SimMsg, class RosMsg>
class SimDataReceiver : public rclcpp::Node
{
public:
  using ConvertFunc = std::function<void (SimMsg IN, RosMsg OUT)>;

  SimDataReceiver(
    const std::string & ros_node_name,
    const rclcpp::NodeOptions & options,
    dds_topic_descriptor_t dds_topic_desc,
    ConvertFunc convert
  )
  : Node(ros_node_name, options),
    dds_topic_desc_(dds_topic_desc),
    convert_(convert)
  {
    // Declare and read ROS parameters
    ros_topic_ = declare_parameter("ros_topic", "");
    dds_topic_ = declare_parameter("dds_topic", "");
    dds_domain_ = declare_parameter("dds_domain", 0);

    // Create DDS Domain Participant with appropriate Topic and Data Reader
    participant_ = dds_create_participant(dds_domain_, nullptr, nullptr);

    if (participant_ < 0) {
      throw std::runtime_error{"Failed to create DDS participant."};
    }

    topic_ = dds_create_topic(
      participant_, &dds_topic_desc_,
      dds_topic_.c_str(), nullptr, nullptr);

    if (topic_ < 0) {
      throw std::runtime_error{"Failed to create DDS topic."};
    }

    reader_ = dds_create_reader(participant_, topic_, nullptr, nullptr);

    if (reader_ < 0) {
      throw std::runtime_error{"Failed to create DDS reader."};
    }

    // Create ROS Publisher
    ros_publisher_ = create_publisher<RosMsg>(ros_topic_, 1);

    // Allocate memory to hold samples
    for (int i = 0; i < MAX_SAMPLES; i++) {
      samples[i] = dds_alloc(sizeof(SimMsg));
    }

    timer_ = create_wall_timer(
      std::chrono::milliseconds(10),
      std::bind(&SimDataReceiver::read, this)
    );
  }

  ~SimDataReceiver()
  {
    // Free allocated memory
    for (int i = 0; i < MAX_SAMPLES; i++) {
      dds_free(samples[i]);
    }
  }

  void read()
  {
    auto ret = dds_read(reader_, samples, infos, MAX_SAMPLES, MAX_SAMPLES);

    if (ret < 0) {
      RCLCPP_ERROR(get_logger(), "Failed to read from DDS layer.");
      return;
    }

    // Iterate through the samples and publish to ROS 2 if there are any new
    for (int i = 0; i < ret; i++) {
      if (infos[i].sample_state == DDS_SST_NOT_READ && infos[i].valid_data) {
        RosMsg rosMsg;
        convert_(*(reinterpret_cast<SimMsg *>(samples[i])), rosMsg);
        ros_publisher_->publish(rosMsg);
      }
    }
  }

private:
  dds_entity_t participant_;
  dds_entity_t topic_;
  dds_entity_t reader_;
  void * samples[MAX_SAMPLES];
  dds_sample_info_t infos[MAX_SAMPLES];
  dds_topic_descriptor_t dds_topic_desc_;
  ConvertFunc convert_;
  rclcpp::TimerBase::SharedPtr timer_;

  std::string ros_topic_;
  std::string dds_topic_;
  int dds_domain_;

  typename rclcpp::Publisher<RosMsg>::SharedPtr ros_publisher_;
};  // class SimDataReceiver

}  // namespace vrxperience_bridge

#endif  // VRXPERIENCE_BRIDGE__SIM_DATA_RECEIVER_HPP_
