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
#include "vrxperience_msgs/msg/cab_to_model_corrective.hpp"
#include "IndyDS_CabToModelCorrective.h"

namespace vrxperience_bridge
{

class CabToModelCorrectiveSender
  : public SimDataSender<vrxperience_msgs::msg::CabToModelCorrective,
    IndyDS_CabToModelCorrective>
{
public:
  explicit CabToModelCorrectiveSender(const rclcpp::NodeOptions & options)
  : SimDataSender(
      "send_cab_to_model_corrective",
      options,
      IndyDS_CabToModelCorrective_desc,
      std::bind(&CabToModelCorrectiveSender::convert, this, _1, _2)
  )
  {
  }

  void convert(
    const vrxperience_msgs::msg::CabToModelCorrective & rosMsg,
    IndyDS_CabToModelCorrective & simMsg)
  {
    simMsg.TimeOfUpdate = rosMsg.header.stamp.sec + rosMsg.header.stamp.nanosec * 1e-9;
    simMsg.AcceleratorAdditive = rosMsg.accelerator_additive;
    simMsg.AcceleratorMultiplicative = rosMsg.accelerator_multiplicative;
    simMsg.BrakeAdditive = rosMsg.brake_additive;
    simMsg.BrakeMultiplicative = rosMsg.brake_multiplicative;
    simMsg.ClutchAdditive = rosMsg.clutch_additive;
    simMsg.ClutchMultiplicative = rosMsg.clutch_multiplicative;
    simMsg.ParkingBrakeAdditive = rosMsg.parking_brake_additive;
    simMsg.ParkingBrakeMultiplicative = rosMsg.parking_brake_multiplicative;
    simMsg.GearboxTakeOver = rosMsg.gear_box_take_over;
    simMsg.GearboxAutoMode = rosMsg.gear_box_auto_mode;
    simMsg.WantedGear = rosMsg.wanted_gear;
    simMsg.ShiftUp = rosMsg.shift_up;
    simMsg.ShiftDown = rosMsg.shift_down;
    simMsg.IsRatioLimit = rosMsg.is_ratio_limit;
    simMsg.MinRatio = rosMsg.min_ratio;
    simMsg.MaxRatio = rosMsg.max_ratio;
  }
};  // class CabToModelCorrectiveSender

}  // namespace vrxperience_bridge

#include <rclcpp_components/register_node_macro.hpp>  // NOLINT
RCLCPP_COMPONENTS_REGISTER_NODE(vrxperience_bridge::CabToModelCorrectiveSender)
