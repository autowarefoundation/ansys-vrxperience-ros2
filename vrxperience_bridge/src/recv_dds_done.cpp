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

#include <dds/core/BuiltinTopicTypes.hpp>
#include "std_msgs/msg/byte_multi_array.hpp"
#include "vrxperience_bridge/sim_data_receiver.hpp"

using vrxperience_bridge::SimDataReceiver;

void convert(dds::core::BytesTopicType IN simMsg, std_msgs::msg::ByteMultiArray OUT rosMsg)
{
  rosMsg.data = std_msgs::msg::ByteMultiArray::_data_type(simMsg.data());
}
int main(int argc, char *argv[])
{
  rclcpp::init(argc, argv);
  SimDataReceiver<dds::core::BytesTopicType, std_msgs::msg::ByteMultiArray> receiver("recv_dds_done", &convert);
  receiver.run();
}
