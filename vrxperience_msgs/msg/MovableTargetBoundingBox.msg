# Copyright 2020 Adam Gotlib (WUT Driverless)
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

std_msgs/Header header

# The ID of the associated sensor target
int16 id

# Corner coordinates of the bounding box
geometry_msgs/Point rear_bottom_right
geometry_msgs/Point rear_top_right
geometry_msgs/Point rear_bottom_left
geometry_msgs/Point rear_top_left
geometry_msgs/Point front_bottom_right
geometry_msgs/Point front_top_right
geometry_msgs/Point front_bottom_left
geometry_msgs/Point front_top_left
