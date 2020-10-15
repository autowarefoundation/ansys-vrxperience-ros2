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

#include <tf2/LinearMath/Quaternion.h>

#include <string>

#include "vrxperience_bridge/sim_data_receiver.hpp"
#include "vrxperience_msgs/msg/movable_targets.hpp"
#include "IndyDS_SensorMovableTargets.h"

namespace vrxperience_bridge
{

class MovableTargetsReceiver
  : public SimDataReceiver<IndyDS_SensorMovableTargets,
    vrxperience_msgs::msg::MovableTargets>
{
public:
  explicit MovableTargetsReceiver(const rclcpp::NodeOptions & options)
  : SimDataReceiver(
      "recv_movable_targets",
      options,
      IndyDS_SensorMovableTargets_desc,
      std::bind(&MovableTargetsReceiver::convert, this, _1, _2)
  )
  {
    world_frame_ = declare_parameter("world_frame", "world");
    vehicle_frame_ = declare_parameter("vehicle_frame", "base_link");
    sensor_frame_ = declare_parameter("sensor_frame", "");
  }

  void convert(
    const IndyDS_SensorMovableTargets & simMsg,
    vrxperience_msgs::msg::MovableTargets & rosMsg)
  {
    rosMsg.header.stamp.sec = static_cast<int>(simMsg.timeOfUpdate);
    rosMsg.header.stamp.nanosec =
      (static_cast<int>(simMsg.timeOfUpdate * 1e9)) % (static_cast<int>(1e9));

    rosMsg.global_id = simMsg.globalId;
    rosMsg.ego_vehicle_id = simMsg.egoVhlId;
    rosMsg.nearest_target = simMsg.nearestTarget;

    for (uint32_t i = 0; i < simMsg.targetsArray._length; i++) {
      auto simMovableTargetMsg = simMsg.targetsArray._buffer[i];
      vrxperience_msgs::msg::MovableTarget rosMovableTargetMsg;

      rosMovableTargetMsg.header.stamp.sec = static_cast<int>(simMsg.timeOfUpdate);
      rosMovableTargetMsg.header.stamp.nanosec =
        (static_cast<int>(simMsg.timeOfUpdate * 1e9)) % (static_cast<int>(1e9));

      switch (simMovableTargetMsg.referenceFrame) {
        case WORLD_FRAME:
          rosMovableTargetMsg.header.frame_id = world_frame_;
          break;
        case VEHICLE_FRAME:
          rosMovableTargetMsg.header.frame_id = vehicle_frame_;
          break;
        case SENSOR_FRAME:
          rosMovableTargetMsg.header.frame_id = sensor_frame_;
          break;
      }

      rosMovableTargetMsg.id = simMovableTargetMsg.id;
      rosMovableTargetMsg.scaner_id = simMovableTargetMsg.scanerId;
      rosMovableTargetMsg.detection_status = simMovableTargetMsg.detectionStatus;
      rosMovableTargetMsg.type = simMovableTargetMsg.type_;
      rosMovableTargetMsg.beam_index = simMovableTargetMsg.beamIndex;
      rosMovableTargetMsg.existence_time = simMovableTargetMsg.existenceTime;
      rosMovableTargetMsg.anchor_point = simMovableTargetMsg.anchorPoint;
      rosMovableTargetMsg.pose.position.x = simMovableTargetMsg.posXInChosenRef;
      rosMovableTargetMsg.pose.position.y = simMovableTargetMsg.posYInChosenRef;
      rosMovableTargetMsg.pose.position.z = simMovableTargetMsg.posZInChosenRef;

      // Convert Euler angles to quaternion
      tf2::Quaternion q;
      q.setRPY(
        simMovableTargetMsg.posRollInChosenRef,
        simMovableTargetMsg.posPitchInChosenRef,
        simMovableTargetMsg.posHeadingInChosenRef);
      rosMovableTargetMsg.pose.orientation.x = q.getX();
      rosMovableTargetMsg.pose.orientation.y = q.getY();
      rosMovableTargetMsg.pose.orientation.z = q.getZ();
      rosMovableTargetMsg.pose.orientation.w = q.getW();

      rosMovableTargetMsg.distance_to_collision = simMovableTargetMsg.distanceToCollision;
      rosMovableTargetMsg.azimuth_in_sensor = simMovableTargetMsg.azimuthInSensor;
      rosMovableTargetMsg.elevation_in_sensor = simMovableTargetMsg.elevationInSensor;
      rosMovableTargetMsg.azimuth_in_vehicle = simMovableTargetMsg.azimuthInVehicle;
      rosMovableTargetMsg.elevation_in_vehicle = simMovableTargetMsg.elevationInVehicle;
      rosMovableTargetMsg.absolute_speed.x = simMovableTargetMsg.absoluteSpeedX;
      rosMovableTargetMsg.absolute_speed.y = simMovableTargetMsg.absoluteSpeedY;
      rosMovableTargetMsg.absolute_speed.z = simMovableTargetMsg.absoluteSpeedZ;
      rosMovableTargetMsg.absolute_angular_speed.x = simMovableTargetMsg.absoluteAngularSpeedR;
      rosMovableTargetMsg.absolute_angular_speed.y = simMovableTargetMsg.absoluteAngularSpeedP;
      rosMovableTargetMsg.absolute_angular_speed.z = simMovableTargetMsg.absoluteAngularSpeedH;
      rosMovableTargetMsg.relative_speed.x = simMovableTargetMsg.relativeSpeedX;
      rosMovableTargetMsg.relative_speed.y = simMovableTargetMsg.relativeSpeedY;
      rosMovableTargetMsg.relative_speed.z = simMovableTargetMsg.relativeSpeedZ;
      rosMovableTargetMsg.relative_angular_speed.x = simMovableTargetMsg.relativeAngularSpeedR;
      rosMovableTargetMsg.relative_angular_speed.y = simMovableTargetMsg.relativeAngularSpeedP;
      rosMovableTargetMsg.relative_angular_speed.z = simMovableTargetMsg.relativeAngularSpeedH;
      rosMovableTargetMsg.absolute_accel.x = simMovableTargetMsg.absoluteAccelX;
      rosMovableTargetMsg.absolute_accel.y = simMovableTargetMsg.absoluteAccelY;
      rosMovableTargetMsg.absolute_accel.z = simMovableTargetMsg.absoluteAccelZ;
      rosMovableTargetMsg.relative_accel.x = simMovableTargetMsg.relativeAccelX;
      rosMovableTargetMsg.relative_accel.y = simMovableTargetMsg.relativeAccelY;
      rosMovableTargetMsg.relative_accel.z = simMovableTargetMsg.relativeAccelZ;
      rosMovableTargetMsg.length = simMovableTargetMsg.length;
      rosMovableTargetMsg.width = simMovableTargetMsg.width;
      rosMovableTargetMsg.height = simMovableTargetMsg.height;
      rosMovableTargetMsg.visibility = simMovableTargetMsg.visibility;

      rosMsg.targets.push_back(rosMovableTargetMsg);
    }
  }

private:
  std::string world_frame_;
  std::string vehicle_frame_;
  std::string sensor_frame_;
};  // class MovableTargetsReceiver

}  // namespace vrxperience_bridge

#include <rclcpp_components/register_node_macro.hpp>  // NOLINT
RCLCPP_COMPONENTS_REGISTER_NODE(vrxperience_bridge::MovableTargetsReceiver)
