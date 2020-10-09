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

#ifndef SIM_DATA_RECEIVER_HPP
#define SIM_DATA_RECEIVER_HPP

#include <rclcpp/rclcpp.hpp>

#include <dds/sub/ddssub.hpp>
#include <dds/core/ddscore.hpp>

#define IN
#define OUT &

namespace vrxperience_bridge
{

template <class SimMsg, class RosMsg>
class SimDataReceiver : public rclcpp::Node
{
public:
  typedef void (*sim2ros)(SimMsg IN, RosMsg OUT);

  SimDataReceiver(std::string ros_node_name, sim2ros convert)
    : Node(ros_node_name), convert_(convert)
  {
    // Declare and read ROS parameters
    ros_topic_  = declare_parameter("ros_topic", "");
    dds_topic_  = declare_parameter("dds_topic", "");
    dds_domain_ = declare_parameter("dds_domain", 0);
  }

  void run()
  {
    // Create DDS Domain Participant with appropriate Topic and Data Reader
    dds::domain::DomainParticipant participant(dds_domain_);
    dds::topic::Topic<SimMsg> topic(participant, dds_topic_);
    dds::sub::DataReader<SimMsg> reader(dds::sub::Subscriber(participant), topic);

    // Create ROS Publisher
    ros_publisher_ = create_publisher<RosMsg>(ros_topic_, 1);

    // Define a Read Condition and callback for received samples
    dds::sub::cond::ReadCondition read_condition(
        reader,
        dds::sub::status::DataState::any(),
        [&reader, this]()
    {
        dds::sub::LoanedSamples<SimMsg> samples = reader.take();
        for (auto sample : samples) {
            if (sample.info().valid()) {
                RosMsg rosMsg;
                (*convert_)(sample, rosMsg);
                ros_publisher_->publish(rosMsg);
            }
        }
    });

    // Create a WaitSet and attach the ReadCondition
    dds::core::cond::WaitSet waitset;
    waitset += read_condition;

    while (rclcpp::ok()) waitset.dispatch(dds::core::Duration(1));
  }

private:
  typename rclcpp::Publisher<RosMsg>::SharedPtr ros_publisher_;
  sim2ros convert_;

  std::string ros_topic_;
  std::string dds_topic_;
  int dds_domain_;
}; // class SimDataReceiver

} // namespace vrxperience_bridge

#endif // SIM_DATA_RECEIVER_HPP
