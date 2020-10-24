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

#include <string>

#include "vrxperience_bridge/sim_data_receiver.hpp"
#include "vrxperience_msgs/msg/laser_meter.hpp"
#include "IndyDS_LaserMeter.h"

namespace vrxperience_bridge
{

class LaserMeterReceiver
  : public SimDataReceiver<IndyDS_LaserMeter, vrxperience_msgs::msg::LaserMeter>
{
public:
  explicit LaserMeterReceiver(const rclcpp::NodeOptions & options)
  : SimDataReceiver(
      "recv_movable_targets",
      options,
      IndyDS_LaserMeter_desc,
      std::bind(&LaserMeterReceiver::convert, this, _1, _2)
  )
  {
    sensor_frame_ = declare_parameter("sensor_frame", "");
  }

  void convert(const IndyDS_LaserMeter & simMsg, vrxperience_msgs::msg::LaserMeter & rosMsg)
  {
    rosMsg.header.stamp.sec = static_cast<int>(simMsg.lastUpdate);
    rosMsg.header.stamp.nanosec =
      (static_cast<int>(simMsg.lastUpdate * 1e9)) % (static_cast<int>(1e9));
    rosMsg.header.frame_id = sensor_frame_;

    rosMsg.global_id = simMsg.globalId;
    rosMsg.ego_vehicle_id = simMsg.vhlId;
    rosMsg.sensor_id = simMsg.sensorId;
    rosMsg.nearest_point = simMsg.nearestPoint;

    for (uint32_t i = 0; i < simMsg.resultArray._length; i++) {
      auto simLaserMeterPointMsg = simMsg.resultArray._buffer[i];
      vrxperience_msgs::msg::LaserMeterPoint rosLaserMeterPointMsg;

      rosLaserMeterPointMsg.hit = simLaserMeterPointMsg.hit;
      rosLaserMeterPointMsg.h_angle = simLaserMeterPointMsg.Hangle;
      rosLaserMeterPointMsg.v_angle = simLaserMeterPointMsg.Vangle;
      rosLaserMeterPointMsg.intersection_point.x = simLaserMeterPointMsg.relposx;
      rosLaserMeterPointMsg.intersection_point.y = simLaserMeterPointMsg.relposy;
      rosLaserMeterPointMsg.intersection_point.z = simLaserMeterPointMsg.relposz;
      rosLaserMeterPointMsg.distance = simLaserMeterPointMsg.distance;

      rosMsg.results.push_back(rosLaserMeterPointMsg);
    }
  }

private:
  std::string sensor_frame_;
};  // class LaserMeterReceiver

}  // namespace vrxperience_bridge

#include <rclcpp_components/register_node_macro.hpp>  // NOLINT
RCLCPP_COMPONENTS_REGISTER_NODE(vrxperience_bridge::LaserMeterReceiver)
