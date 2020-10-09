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

#ifndef SIM_DATA_SENDER_HPP
#define SIM_DATA_SENDER_HPP

#include <rclcpp/rclcpp.hpp>

#include <dds/pub/ddspub.hpp>
#include <dds/core/ddscore.hpp>

#define IN
#define OUT &

namespace vrxperience_bridge
{

template <class RosMsg, class SimMsg>
class SimDataSender : public rclcpp::Node
{
public:
  typedef void (*ros2sim)(RosMsg IN, SimMsg OUT);

  SimDataSender(std::string ros_node_name, ros2sim convert)
    : Node(ros_node_name), convert_(convert)
  {
    // Declare  and read ROS parameters
    ros_topic_  = declare_parameter("ros_topic", "");
    dds_topic_  = declare_parameter("dds_topic", "");
    dds_domain_ = declare_parameter("dds_domain", 0);

    // Create DDS Domain Participant with appropriate Topic and Data Writer
    dds::domain::DomainParticipant participant(dds_domain_);
    dds::topic::Topic<SimMsg> topic(participant, dds_topic_);
    sim_writer_ = std::make_shared<dds::pub::DataWriter<SimMsg>>(
      rti::pub::implicit_publisher(participant), topic);

    // Create ROS Subscription
    std::function<void(const typename RosMsg::SharedPtr rosMsg)> callback = std::bind(&SimDataSender<RosMsg, SimMsg>::topicCallback, this, std::placeholders::_1);
    ros_subscription_ = create_subscription<RosMsg>(ros_topic_, 1, callback);
  }

private:
  void topicCallback(const typename RosMsg::SharedPtr rosMsg)
  {
    SimMsg simMsg;
    (*convert_)(*rosMsg, simMsg);
    sim_writer_->write(simMsg);
  }

  typename rclcpp::Subscription<RosMsg>::SharedPtr ros_subscription_;
  std::shared_ptr<dds::pub::DataWriter<SimMsg>> sim_writer_;
  ros2sim convert_;

  std::string ros_topic_;
  std::string dds_topic_;
  int dds_domain_;
}; // class SimDataSender

} // namespace vrxperience_bridge

#endif // SIM_DATA_SENDER_HPP
