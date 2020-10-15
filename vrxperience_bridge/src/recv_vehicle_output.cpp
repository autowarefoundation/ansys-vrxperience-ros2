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

#include "vrxperience_bridge/sim_data_receiver.hpp"
#include "vrxperience_msgs/msg/vehicle_output.hpp"
#include "IndyDS_VehicleOutput.h"

namespace vrxperience_bridge
{

class VehicleOutputReceiver
  : public SimDataReceiver<IndyDS_VehicleOutput,
    vrxperience_msgs::msg::VehicleOutput>
{
public:
  explicit VehicleOutputReceiver(const rclcpp::NodeOptions & options)
  : SimDataReceiver(
      "recv_vehicle_output",
      options,
      IndyDS_VehicleOutput_desc,
      std::bind(&VehicleOutputReceiver::convert, this, _1, _2)
  )
  {
  }

  void convert(const IndyDS_VehicleOutput & simMsg, vrxperience_msgs::msg::VehicleOutput & rosMsg)
  {
    rosMsg.header.stamp.sec = static_cast<int>(simMsg.TimeOfUpdate);
    rosMsg.header.stamp.nanosec =
      (static_cast<int>(simMsg.TimeOfUpdate * 1e9)) % (static_cast<int>(1e9));

    rosMsg.cdg_speed.x = simMsg.cdgSpeed_x;
    rosMsg.cdg_speed.y = simMsg.cdgSpeed_y;
    rosMsg.cdg_speed.z = simMsg.cdgSpeed_z;

    rosMsg.cdg_angular_speed.x = simMsg.cdgSpeed_roll;
    rosMsg.cdg_angular_speed.y = simMsg.cdgSpeed_pitch;
    rosMsg.cdg_angular_speed.z = simMsg.cdgSpeed_heading;

    rosMsg.cdg_accel.x = simMsg.cdgAccel_x;
    rosMsg.cdg_accel.y = simMsg.cdgAccel_y;
    rosMsg.cdg_accel.z = simMsg.cdgAccel_z;

    rosMsg.cdg_angular_accel.x = simMsg.cdgAccel_roll;
    rosMsg.cdg_angular_accel.y = simMsg.cdgAccel_pitch;
    rosMsg.cdg_angular_accel.z = simMsg.cdgAccel_heading;

    rosMsg.cdg_position.x = simMsg.cdgPos_x;
    rosMsg.cdg_position.y = simMsg.cdgPos_y;
    rosMsg.cdg_position.z = simMsg.cdgPos_z;

    rosMsg.cdg_orientation.x = simMsg.cdgPos_roll;
    rosMsg.cdg_orientation.y = simMsg.cdgPos_pitch;
    rosMsg.cdg_orientation.z = simMsg.cdgPos_heading;

    rosMsg.lights = simMsg.lights;
    rosMsg.sirens = simMsg.sirens;
    rosMsg.auxilary_lights = simMsg.auxiliaryLights;
    rosMsg.engine_state = simMsg.EngineState;
    rosMsg.consumption = simMsg.consumption;
    rosMsg.pollution = simMsg.pollution;
    rosMsg.engine_speed = simMsg.EngineSpeed;
    rosMsg.gear_engaged = simMsg.GearEngaged;
    rosMsg.gas_pedal = simMsg.gasPedal;
    rosMsg.brake_pedal = simMsg.brakePedal;
    rosMsg.hand_brake = simMsg.handBrake;
    rosMsg.clutch_pedal = simMsg.clutchPedal;
    rosMsg.gear_box_mode = simMsg.GearBoxMode;
    rosMsg.effective_ignition_key_position = simMsg.effectiveIgnitionKeyPosition;
    rosMsg.is_engine_retarder = simMsg.isEngineRetarder;
    rosMsg.brake_retarder_notch = simMsg.brakeRetarderNotch;
    rosMsg.transfer_choice = simMsg.transferChoice;
    rosMsg.lock_diff_mode = simMsg.lockDiffMode;
    rosMsg.force_lockup = simMsg.forceLockup;
    rosMsg.steering_wheel_angle = simMsg.SteeringWheelAngle;
    rosMsg.steering_wheel_speed = simMsg.SteeringWheelSpeed;
    rosMsg.steering_wheel_accel = simMsg.SteeringWheelAccel;
    rosMsg.steering_wheel_torque = simMsg.SteeringWheelTorque;

    for (int i = 0; i < 4; i++) {
      rosMsg.hub_position[i].x = simMsg.hubPosition_x[i];
      rosMsg.hub_position[i].y = simMsg.hubPosition_y[i];
      rosMsg.hub_position[i].z = simMsg.hubPosition_z[i];

      rosMsg.hub_orientation[i].x = simMsg.hubPosition_roll[i];
      rosMsg.hub_orientation[i].y = simMsg.hubPosition_pitch[i];
      rosMsg.hub_orientation[i].z = simMsg.hubPosition_heading[i];

      rosMsg.wheel_rotation[i] = simMsg.wheelRotation[i];
      rosMsg.wheel_rotation_speed[i] = simMsg.wheelRotationSpeed[i];
      rosMsg.brake_temperature[i] = simMsg.brakeTemperature[i];
      rosMsg.abs_is_active[i] = simMsg.absIsActive[i];
      rosMsg.is_in_contact[i] = simMsg.isInContact[i];

      rosMsg.contact_points[i].x = simMsg.contactPoint_x[i];
      rosMsg.contact_points[i].y = simMsg.contactPoint_y[i];
      rosMsg.contact_points[i].z = simMsg.contactPoint_z[i];

      rosMsg.ground_normals[i].x = simMsg.groundNormal_x[i];
      rosMsg.ground_normals[i].y = simMsg.groundNormal_y[i];
      rosMsg.ground_normals[i].z = simMsg.groundNormal_z[i];

      rosMsg.grip[i] = simMsg.grip[i];
      rosMsg.ground_index[i] = simMsg.GroundIndex[i];
      rosMsg.lsr[i] = simMsg.LSR[i];
      rosMsg.slip_angle[i] = simMsg.slipAngle[i];

      rosMsg.tire_force[i].x = simMsg.tireForce_x[i];
      rosMsg.tire_force[i].y = simMsg.tireForce_y[i];
      rosMsg.tire_force[i].z = simMsg.tireForce_z[i];

      rosMsg.lane_type[i] = simMsg.laneType[i];
      rosMsg.roughness_height[i] = simMsg.roughnessHeight[i];
      rosMsg.roughness_length[i] = simMsg.roughnessLength[i];
      rosMsg.roughness_height_stddev[i] = simMsg.roughnessHeightStdDeviation[i];
      rosMsg.roughness_length_stddev[i] = simMsg.roughnessLengthStdDeviation[i];
      rosMsg.ground_type[i] = simMsg.groundType[i];
      rosMsg.water_height[i] = simMsg.waterHeight[i];
    }

    for (int i = 0; i < 512; i++) {
      rosMsg.custom_output[i] = simMsg.CustomOutput[i];
    }
  }
};  // class VehicleOutputReceiver

}  // namespace vrxperience_bridge

#include <rclcpp_components/register_node_macro.hpp>  // NOLINT
RCLCPP_COMPONENTS_REGISTER_NODE(vrxperience_bridge::VehicleOutputReceiver)
