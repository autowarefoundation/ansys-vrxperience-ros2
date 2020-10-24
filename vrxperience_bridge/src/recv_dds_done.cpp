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
#include "std_msgs/msg/byte_multi_array.hpp"
#include "DDS_Octets.h"

namespace vrxperience_bridge
{

class DdsDoneReceiver
  : public SimDataReceiver<DDS_Octets, std_msgs::msg::ByteMultiArray>
{
public:
  explicit DdsDoneReceiver(const rclcpp::NodeOptions & options)
  : SimDataReceiver(
      "recv_dds_done",
      options,
      DDS_Octets_desc,
      std::bind(&DdsDoneReceiver::convert, this, _1, _2))
  {
  }

  void convert(const DDS_Octets & simMsg, std_msgs::msg::ByteMultiArray & rosMsg)
  {
    for (uint32_t i = 0; i < simMsg.value._length; i++) {
      rosMsg.data.push_back(simMsg.value._buffer[i]);
    }
  }
};  // class DdsDoneReceiver

}  // namespace vrxperience_bridge

#include <rclcpp_components/register_node_macro.hpp>  // NOLINT
RCLCPP_COMPONENTS_REGISTER_NODE(vrxperience_bridge::DdsDoneReceiver)
