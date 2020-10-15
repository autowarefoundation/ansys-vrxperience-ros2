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

#include "vrxperience_bridge/sim_data_receiver.hpp"
#include "vrxperience_msgs/msg/gps.hpp"
#include "IndyDS_GPS.h"

namespace vrxperience_bridge
{

class GpsReceiver
  : public SimDataReceiver<IndyDS_GPS, vrxperience_msgs::msg::GPS>
{
public:
  explicit GpsReceiver(const rclcpp::NodeOptions & options)
  : SimDataReceiver(
      "recv_gps",
      options,
      IndyDS_GPS_desc,
      std::bind(&GpsReceiver::convert, this, _1, _2)
  )
  {
  }

  void convert(IndyDS_GPS IN simMsg, vrxperience_msgs::msg::GPS OUT rosMsg)
  {
    rosMsg.header.stamp.sec = static_cast<int>(simMsg.lastUpdate);
    rosMsg.header.stamp.nanosec =
      (static_cast<int>(simMsg.lastUpdate * 1e9)) % static_cast<int>(1e9);

    rosMsg.global_id = simMsg.globalId;
    rosMsg.ego_vehicle_id = simMsg.vhlId;
    rosMsg.sensor_id = simMsg.sensorId;
    rosMsg.latitude = simMsg.latitude;
    rosMsg.longitude = simMsg.longitude;
    rosMsg.satellites = simMsg.satellites;
    rosMsg.hdop = simMsg.hdop;
  }
};  // class GpsReceiver

}  // namespace vrxperience_bridge

#include <rclcpp_components/register_node_macro.hpp>  // NOLINT
RCLCPP_COMPONENTS_REGISTER_NODE(vrxperience_bridge::GpsReceiver)
