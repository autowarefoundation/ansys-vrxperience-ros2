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

# Unique identifier of the sensor
int32 global_id

# The index of the vehicle
int16 ego_vehicle_id

# The GPS index
int16 sensor_id

# Latitude of the vehicle's sensor position [deg]
float64 latitude

# Longitude of the vehicle's sensor position [deg]
float64 longitude

# Altitude of the vehicle's sensor position [deg]
float64 altitude

# Number of satellites used
int16 satellites

# GPS sensor horizontal precision
float32 hdop
