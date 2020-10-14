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
#include "vrxperience_msgs/msg/road_lines_polynoms.hpp"
#include "IndyDS_RoadLinesPolynoms.h"

using vrxperience_bridge::SimDataReceiver;
typedef SimDataReceiver<IndyDS_RoadLinesPolynoms,
    vrxperience_msgs::msg::RoadLinesPolynoms> RoadLinesPolynomsReceiver;

const int WORLD_FRAME = 0;
const int VEHICLE_FRAME = 1;
const int SENSOR_FRAME = 2;

std::string world_frame;  // NOLINT
std::string vehicle_frame;  // NOLINT
std::string sensor_frame;  // NOLINT

void convert(
  IndyDS_RoadLinesPolynoms IN simMsg,
  vrxperience_msgs::msg::RoadLinesPolynoms OUT rosMsg)
{
  rosMsg.header.stamp.sec = static_cast<int>(simMsg.timeOfUpdate);
  rosMsg.header.stamp.nanosec =
    (static_cast<int>(simMsg.timeOfUpdate * 1e9)) % (static_cast<int>(1e9));

  switch (simMsg.referenceFrame) {
    case WORLD_FRAME:
      rosMsg.header.frame_id = world_frame;
      break;
    case VEHICLE_FRAME:
      rosMsg.header.frame_id = vehicle_frame;
      break;
    case SENSOR_FRAME:
      rosMsg.header.frame_id = sensor_frame;
      break;
  }

  rosMsg.global_id = simMsg.globalId;
  rosMsg.ego_vehicle_id = simMsg.egoVhlId;
  rosMsg.is_noisy = simMsg.isNoisy;

  for (uint32_t i = 0; i < simMsg.roadLinesPolynomsArray._length; i++) {
    auto simPolynomMsg = simMsg.roadLinesPolynomsArray._buffer[i];
    vrxperience_msgs::msg::RoadLinePolynom rosPolynomMsg;

    rosPolynomMsg.line_id = simPolynomMsg.lineId;

    rosPolynomMsg.c0 = simPolynomMsg.c0;
    rosPolynomMsg.c1 = simPolynomMsg.c1;
    rosPolynomMsg.c2 = simPolynomMsg.c2;
    rosPolynomMsg.c3 = simPolynomMsg.c3;

    rosPolynomMsg.curvature_radius = simPolynomMsg.curvatureRadius;
    rosPolynomMsg.estimated_curvature_radius = simPolynomMsg.estimatedCurvatureRadius;

    rosMsg.polynoms.push_back(rosPolynomMsg);
  }
}

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  RoadLinesPolynomsReceiver receiver("recv_road_lines_polynoms", IndyDS_RoadLinesPolynoms_desc,
    &convert);
  world_frame = receiver.declare_parameter("world_frame", "world");
  vehicle_frame = receiver.declare_parameter("vehicle_frame", "base_link");
  sensor_frame = receiver.declare_parameter("sensor_frame", "");
  receiver.run();
}
