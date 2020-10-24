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
#include "vrxperience_msgs/msg/movable_targets_bounding_boxes.hpp"
#include "IndyDS_SensorMovableTargetsBoundingBoxes.h"

namespace vrxperience_bridge
{

class MovableTargetsBoundingBoxesReceiver
  : public SimDataReceiver<IndyDS_SensorMovableTargetsBoundingBoxes,
    vrxperience_msgs::msg::MovableTargetsBoundingBoxes>
{
public:
  explicit MovableTargetsBoundingBoxesReceiver(const rclcpp::NodeOptions & options)
  : SimDataReceiver(
      "recv_movable_targets_bounding_boxes",
      options,
      IndyDS_SensorMovableTargetsBoundingBoxes_desc,
      std::bind(&MovableTargetsBoundingBoxesReceiver::convert, this, _1, _2)
  )
  {
    world_frame_ = declare_parameter("world_frame", "world");
    vehicle_frame_ = declare_parameter("vehicle_frame", "base_link");
    sensor_frame_ = declare_parameter("sensor_frame", "");
  }

  void convert(
    const IndyDS_SensorMovableTargetsBoundingBoxes & simMsg,
    vrxperience_msgs::msg::MovableTargetsBoundingBoxes & rosMsg)
  {
    rosMsg.header.stamp.sec = static_cast<int>(simMsg.timeOfUpdate);
    rosMsg.header.stamp.nanosec =
      (static_cast<int>(simMsg.timeOfUpdate * 1e9)) % (static_cast<int>(1e9));
    rosMsg.header.frame_id = sensor_frame_;

    rosMsg.global_id = simMsg.globalId;
    rosMsg.ego_vehicle_id = simMsg.vhlId;

    for (uint32_t i = 0; i < simMsg.boundingBoxesArray._length; i++) {
      auto simBoundingBoxMsg = simMsg.boundingBoxesArray._buffer[i];
      vrxperience_msgs::msg::MovableTargetBoundingBox rosBoundingBoxMsg;

      rosBoundingBoxMsg.header.stamp.sec = static_cast<int>(simMsg.timeOfUpdate);
      rosBoundingBoxMsg.header.stamp.nanosec =
        (static_cast<int>(simMsg.timeOfUpdate * 1e9)) % (static_cast<int>(1e9));

      switch (simBoundingBoxMsg.referenceFrame) {
        case WORLD_FRAME:
          rosBoundingBoxMsg.header.frame_id = world_frame_;
          break;
        case VEHICLE_FRAME:
          rosBoundingBoxMsg.header.frame_id = vehicle_frame_;
          break;
        case SENSOR_FRAME:
          rosBoundingBoxMsg.header.frame_id = sensor_frame_;
          break;
      }

      rosBoundingBoxMsg.id = simBoundingBoxMsg.id;

      rosBoundingBoxMsg.rear_bottom_right.x = simBoundingBoxMsg.rearBottomRightX;
      rosBoundingBoxMsg.rear_bottom_right.y = simBoundingBoxMsg.rearBottomRightY;
      rosBoundingBoxMsg.rear_bottom_right.z = simBoundingBoxMsg.rearBottomRightZ;

      rosBoundingBoxMsg.rear_top_right.x = simBoundingBoxMsg.rearTopRightX;
      rosBoundingBoxMsg.rear_top_right.y = simBoundingBoxMsg.rearTopRightY;
      rosBoundingBoxMsg.rear_top_right.z = simBoundingBoxMsg.rearTopRightZ;

      rosBoundingBoxMsg.rear_bottom_left.x = simBoundingBoxMsg.rearbottomLeftX;
      rosBoundingBoxMsg.rear_bottom_left.y = simBoundingBoxMsg.rearbottomLeftY;
      rosBoundingBoxMsg.rear_bottom_left.z = simBoundingBoxMsg.rearbottomLeftZ;

      rosBoundingBoxMsg.rear_top_left.x = simBoundingBoxMsg.rearTopLeftX;
      rosBoundingBoxMsg.rear_top_left.y = simBoundingBoxMsg.rearTopLeftY;
      rosBoundingBoxMsg.rear_top_left.z = simBoundingBoxMsg.rearTopLeftZ;

      rosBoundingBoxMsg.front_bottom_right.x = simBoundingBoxMsg.frontBottomRightX;
      rosBoundingBoxMsg.front_bottom_right.y = simBoundingBoxMsg.frontBottomRightY;
      rosBoundingBoxMsg.front_bottom_right.z = simBoundingBoxMsg.frontBottomRightZ;

      rosBoundingBoxMsg.front_top_right.x = simBoundingBoxMsg.frontTopRightX;
      rosBoundingBoxMsg.front_top_right.y = simBoundingBoxMsg.frontTopRightY;
      rosBoundingBoxMsg.front_top_right.z = simBoundingBoxMsg.frontTopRightZ;

      rosBoundingBoxMsg.front_bottom_left.x = simBoundingBoxMsg.frontbottomLeftX;
      rosBoundingBoxMsg.front_bottom_left.y = simBoundingBoxMsg.frontbottomLeftY;
      rosBoundingBoxMsg.front_bottom_left.z = simBoundingBoxMsg.frontbottomLeftZ;

      rosBoundingBoxMsg.front_top_left.x = simBoundingBoxMsg.frontTopLeftX;
      rosBoundingBoxMsg.front_top_left.y = simBoundingBoxMsg.frontTopLeftY;
      rosBoundingBoxMsg.front_top_left.z = simBoundingBoxMsg.frontTopLeftZ;

      rosMsg.bounding_boxes.push_back(rosBoundingBoxMsg);
    }
  }

private:
  std::string world_frame_;
  std::string vehicle_frame_;
  std::string sensor_frame_;
};  // class MovableTargetsBoundingBoxesReceiver

}  // namespace vrxperience_bridge

#include <rclcpp_components/register_node_macro.hpp>  // NOLINT
RCLCPP_COMPONENTS_REGISTER_NODE(vrxperience_bridge::MovableTargetsBoundingBoxesReceiver)
