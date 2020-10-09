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

# Unique identifier of the line road markings sensor
int32 global_id

# The ID of the equipped vehicle
int16 ego_vehicle_id

# Index in targets of the nearest target detected.
# If no target detected, the value is -1
int16 nearest_target

# Array of targets detected by the sensor
vrxperience_msgs/MovableTarget[<=30] targets
