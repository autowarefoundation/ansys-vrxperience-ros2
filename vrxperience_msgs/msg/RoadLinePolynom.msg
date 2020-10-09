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

# The ID of the line
int16 line_id

# The polynomial coefficients
float64 c0
float64 c1
float64 c2
float64 c3

# The line curvature radius, got from the RND data. If the line is straight,
# then this field is set to 99000.0 (infinite curve radius)
float64 curvature_radius

# 1/2c2, or 99000.0 (infinite curve radius) if c2=0.
float64 estimated_curvature_radius
