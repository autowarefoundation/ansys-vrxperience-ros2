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

#include "vrxperience_bridge/sim_data_sender.hpp"
#include "vrxperience_msgs/msg/cab_to_steering_corrective.hpp"
#include "IndyDS_CabToSteeringCorrective.h"

namespace vrxperience_bridge
{

class CabToSteeringCorrectiveSender
  : public SimDataSender<vrxperience_msgs::msg::CabToSteeringCorrective,
    IndyDS_CabToSteeringCorrective>
{
public:
  explicit CabToSteeringCorrectiveSender(const rclcpp::NodeOptions & options)
  : SimDataSender(
      "send_cab_to_steering_corrective",
      options,
      IndyDS_CabToSteeringCorrective_desc,
      std::bind(&CabToSteeringCorrectiveSender::convert, this, _1, _2)
  )
  {
  }

  void convert(
    const vrxperience_msgs::msg::CabToSteeringCorrective & rosMsg,
    IndyDS_CabToSteeringCorrective & simMsg)
  {
    simMsg.TimeOfUpdate = rosMsg.header.stamp.sec + rosMsg.header.stamp.nanosec * 1e-9;
    simMsg.AdditiveSteeringWheelAngle = rosMsg.additive_steering_wheel_angle;
    simMsg.MultiplicativeSteeringWheelAngle = rosMsg.multiplicative_steering_wheel_angle;
    simMsg.AdditiveSteeringWheelSpeed = rosMsg.additive_steering_wheel_speed;
    simMsg.MultiplicativeSteeringWheelSpeed = rosMsg.additive_steering_wheel_speed;
    simMsg.AdditiveSteeringWheelAccel = rosMsg.additive_steering_wheel_accel;
    simMsg.MultiplicativeSteeringWheelAccel = rosMsg.multiplicative_steering_wheel_accel;
    simMsg.AdditiveSteeringWheelTorque = rosMsg.additive_steering_wheel_torque;
    simMsg.MultiplicativeSteeringWheelTorque = rosMsg.multiplicative_steering_wheel_torque;
  }
};  // class CabToSteeringCorrectiveSender

}  // namespace vrxperience_bridge

#include <rclcpp_components/register_node_macro.hpp>  // NOLINT
RCLCPP_COMPONENTS_REGISTER_NODE(vrxperience_bridge::CabToSteeringCorrectiveSender)
