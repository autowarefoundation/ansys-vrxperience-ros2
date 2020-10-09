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

# Additional angle value to apply on input of dynamics model [rad]
float64 additive_steering_wheel_angle

# Multiplicative coefficient to apply on input of dynamics model
float64 multiplicative_steering_wheel_angle

# Additional speed value to apply on input of dynamics model [rad/s]
float64 additive_steering_wheel_speed

# Multiplicative coefficient to apply on input of dynamics model
float64 multiplicative_steering_wheel_speed

# Additional angular acceleration to apply on input of dynamics model
float64 additive_steering_wheel_accel

# Multiplicative coefficient to apply on input of dynamics model
float64 multiplicative_steering_wheel_accel

# Additional torque value to apply on input of dynamics model
float64 additive_steering_wheel_torque

# Multiplicative coefficient to apply on input of dynamics model
float64 multiplicative_steering_wheel_torque
