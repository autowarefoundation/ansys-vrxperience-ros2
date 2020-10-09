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
#include "vrxperience_bridge/sim_data_sender.hpp"
#include "std_msgs/msg/byte_multi_array.hpp"

using vrxperience_bridge::SimDataSender;
typedef SimDataSender<std_msgs::msg::ByteMultiArray, dds::core::BytesTopicType> DDSDoneReplySender;

void convert(std_msgs::msg::ByteMultiArray IN rosMsg, dds::core::BytesTopicType OUT simMsg)
{
  simMsg.data(rosMsg.data);
}

int main(int argc, char *argv[])
{
  rclcpp::init(argc, argv);
  auto sender = std::make_shared<DDSDoneReplySender>("send_dds_done_reply", &convert);
  rclcpp::spin(sender);
}
