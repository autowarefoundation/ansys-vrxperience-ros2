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

namespace vrxperience_bridge
{

class RoadLinesPolynomsReceiver
  : public SimDataReceiver<IndyDS_RoadLinesPolynoms,
    vrxperience_msgs::msg::RoadLinesPolynoms>
{
public:
  explicit RoadLinesPolynomsReceiver(const rclcpp::NodeOptions & options)
  : SimDataReceiver(
      "recv_road_lines_polynoms",
      options,
      IndyDS_RoadLinesPolynoms_desc,
      std::bind(&RoadLinesPolynomsReceiver::convert, this, _1, _2)
  )
  {
    world_frame_ = declare_parameter("world_frame", "world");
    vehicle_frame_ = declare_parameter("vehicle_frame", "base_link");
    sensor_frame_ = declare_parameter("sensor_frame", "");
  }

  void convert(
    const IndyDS_RoadLinesPolynoms & simMsg,
    vrxperience_msgs::msg::RoadLinesPolynoms & rosMsg)
  {
    rosMsg.header.stamp.sec = static_cast<int>(simMsg.timeOfUpdate);
    rosMsg.header.stamp.nanosec =
      (static_cast<int>(simMsg.timeOfUpdate * 1e9)) % (static_cast<int>(1e9));

    switch (simMsg.referenceFrame) {
      case WORLD_FRAME:
        rosMsg.header.frame_id = world_frame_;
        break;
      case VEHICLE_FRAME:
        rosMsg.header.frame_id = vehicle_frame_;
        break;
      case SENSOR_FRAME:
        rosMsg.header.frame_id = sensor_frame_;
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

private:
  std::string world_frame_;
  std::string vehicle_frame_;
  std::string sensor_frame_;
};  // class RoadLinesPolynomsReceiver

}  // namespace vrxperience_bridge

#include <rclcpp_components/register_node_macro.hpp>  // NOLINT
RCLCPP_COMPONENTS_REGISTER_NODE(vrxperience_bridge::RoadLinesPolynomsReceiver)
