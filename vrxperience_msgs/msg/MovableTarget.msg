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

# The ID set be the sensor for the detected target
int16 id

# The SCANeR ID of the detected target
int16 scaner_id

int16 DETECTION_STATUS_UNDEFINED = 0
int16 DETECTION_STATUS_NEW_TARGET = 1
int16 DETECTION_STATUS_EXISTING_TARGET = 2

# Stat detection of the target
int16 detection_status

# Type of the detected target (undocumented)
int16 type

# The index of the beam that detected the target
int16 beam_index

# Time past between the appearance of the target into the sensor detection area and the current time
float64 existence_time

# Localization of the detected point (undocumented)
int16 anchor_point

# The detected point position and orientation
geometry_msgs/Pose pose

# The distance from the sensor origin to the detected point
float32 distance_to_collision

# The detected point azimuth angle in sensor reference frame
float32 azimuth_in_sensor

# The detected point elevation angle in sensor reference frame
float32 elevation_in_sensor

# The detected point azimuth angle in vehicle reference frame
float32 azimuth_in_vehicle

# The detected point elevation angle in vehicle reference frame
float32 elevation_in_vehicle

# The detected point absolute speed vector
geometry_msgs/Vector3 absolute_speed

# The detected point absolute angular speed vector (RPY)
geometry_msgs/Vector3 absolute_angular_speed

# The detected point relative speed vector
geometry_msgs/Vector3 relative_speed

# The detected point relative angular speed vector (RPY)
geometry_msgs/Vector3 relative_angular_speed

# The detected point absolute acceleration
geometry_msgs/Vector3 absolute_accel

# The detected point relative acceleration
geometry_msgs/Vector3 relative_accel

# Target length
float32 length

# Target width
float32 width

# Target height
float32 height

float32 HIDDEN = 0
float32 VISIBLE = 1

# 0 if the target shouldn't be detected by the sensor because
# it is hidden by an object (vehicle, terrain), 1 otherwise
float32 visibility
