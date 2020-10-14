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

#ifndef VRXPERIENCE_BRIDGE__SIM_DATA_SENDER_HPP_
#define VRXPERIENCE_BRIDGE__SIM_DATA_SENDER_HPP_

#include <rclcpp/rclcpp.hpp>
#include <dds/dds.h>

#include <string>

#define IN
#define OUT &

namespace vrxperience_bridge
{

template<class RosMsg, class SimMsg>
class SimDataSender : public rclcpp::Node
{
public:
  typedef void (* ros2sim)(RosMsg IN, SimMsg OUT);

  SimDataSender(std::string ros_node_name, dds_topic_descriptor_t dds_topic_desc, ros2sim convert)
  : Node(ros_node_name), dds_topic_desc_(dds_topic_desc), convert_(convert)
  {
    // Declare  and read ROS parameters
    ros_topic_ = declare_parameter("ros_topic", "");
    dds_topic_ = declare_parameter("dds_topic", "");
    dds_domain_ = declare_parameter("dds_domain", 0);

    // Create DDS Domain Participant with appropriate Topic and Data Writer
    auto participant = dds_create_participant(dds_domain_, nullptr, nullptr);
    auto topic = dds_create_topic(
      participant, &dds_topic_desc_,
      dds_topic_.c_str(), nullptr, nullptr);
    sim_writer_ = dds_create_writer(participant, topic, nullptr, nullptr);

    // Create ROS Subscription
    std::function<void(const typename RosMsg::SharedPtr rosMsg)> callback = std::bind(
      &SimDataSender<RosMsg, SimMsg>::topicCallback, this, std::placeholders::_1);
    ros_subscription_ = create_subscription<RosMsg>(ros_topic_, 1, callback);
  }

private:
  void topicCallback(const typename RosMsg::SharedPtr rosMsg)
  {
    SimMsg simMsg;
    (*convert_)(*rosMsg, simMsg);
    dds_write(sim_writer_, &simMsg);
  }

  dds_topic_descriptor_t dds_topic_desc_;
  ros2sim convert_;

  std::string ros_topic_;
  std::string dds_topic_;
  int dds_domain_;

  typename rclcpp::Subscription<RosMsg>::SharedPtr ros_subscription_;
  dds_entity_t sim_writer_;
};  // class SimDataSender

}  // namespace vrxperience_bridge

#endif  // VRXPERIENCE_BRIDGE__SIM_DATA_SENDER_HPP_
