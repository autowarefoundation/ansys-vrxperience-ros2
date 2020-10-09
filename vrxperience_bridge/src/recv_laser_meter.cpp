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
#include "vrxperience_msgs/msg/laser_meter.hpp"
#include "RtiSCADE_DS_Controller.hpp"

using vrxperience_bridge::SimDataReceiver;

std::string sensor_frame;

void convert(IndyDS::LaserMeter IN simMsg, vrxperience_msgs::msg::LaserMeter OUT rosMsg)
{
  rosMsg.header.stamp.sec = (int) simMsg.lastUpdate();
  rosMsg.header.stamp.nanosec = ((int) (simMsg.lastUpdate() * 1e9)) % ((int) 1e9);
  rosMsg.header.frame_id = sensor_frame;

  rosMsg.global_id = simMsg.globalId();
  rosMsg.ego_vehicle_id = simMsg.vhlId();
  rosMsg.sensor_id = simMsg.sensorId();
  rosMsg.nearest_point = simMsg.nearestPoint();

  for (auto simLaserMeterPointMsg : simMsg.resultArray())
  {
    vrxperience_msgs::msg::LaserMeterPoint rosLaserMeterPointMsg;

    rosLaserMeterPointMsg.hit = simLaserMeterPointMsg.hit();
    rosLaserMeterPointMsg.h_angle = simLaserMeterPointMsg.Hangle();
    rosLaserMeterPointMsg.v_angle = simLaserMeterPointMsg.Vangle();
    rosLaserMeterPointMsg.intersection_point.x = simLaserMeterPointMsg.relposx();
    rosLaserMeterPointMsg.intersection_point.y = simLaserMeterPointMsg.relposy();
    rosLaserMeterPointMsg.intersection_point.z = simLaserMeterPointMsg.relposz();
    rosLaserMeterPointMsg.distance = simLaserMeterPointMsg.distance();

    rosMsg.results.push_back(rosLaserMeterPointMsg);
  }
}

int main(int argc, char *argv[])
{
  rclcpp::init(argc, argv);
  SimDataReceiver<IndyDS::LaserMeter, vrxperience_msgs::msg::LaserMeter> receiver("recv_movable_targets", &convert);
  sensor_frame  = receiver.declare_parameter("sensor_frame", "");
  receiver.run();
}
