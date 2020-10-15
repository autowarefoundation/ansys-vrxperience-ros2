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

cmake_minimum_required(VERSION 3.5)
project(vrxperience_bridge)

# Default to C99
if(NOT CMAKE_C_STANDARD)
  set(CMAKE_C_STANDARD 99)
endif()

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake_auto REQUIRED)
find_package(CycloneDDS REQUIRED COMPONENTS idlc)
ament_auto_find_build_dependencies()

# generate code to handle custom DDS data types
idlc_generate(IndyDS_RoadLinesPolynoms_lib "res/IndyDS_RoadLinesPolynoms.idl")
idlc_generate(IndyDS_SensorMovableTargetsBoundingBoxes_lib "res/IndyDS_SensorMovableTargetsBoundingBoxes.idl")
idlc_generate(IndyDS_GPS_lib "res/IndyDS_GPS.idl")
idlc_generate(IndyDS_LaserMeter_lib "res/IndyDS_LaserMeter.idl")
idlc_generate(IndyDS_SensorMovableTargets_lib "res/IndyDS_SensorMovableTargets.idl")
idlc_generate(IndyDS_VehicleOutput_lib "res/IndyDS_VehicleOutput.idl")
idlc_generate(IndyDS_CabToModelCorrective_lib "res/IndyDS_CabToModelCorrective.idl")
idlc_generate(IndyDS_CabToSteeringCorrective_lib "res/IndyDS_CabToSteeringCorrective.idl")
idlc_generate(DDS_Octets_lib "res/DDS_Octets.idl")

ament_auto_add_library(${PROJECT_NAME} SHARED
  src/recv_dds_done.cpp
  src/recv_gps.cpp
  src/recv_laser_meter.cpp
  src/recv_movable_targets.cpp
  src/recv_movable_targets_bounding_boxes.cpp
  src/recv_road_lines_polynoms.cpp
  src/recv_vehicle_output.cpp
  src/send_cab_to_model_corrective.cpp
  src/send_cab_to_steering_corrective.cpp
  src/send_dds_done_reply.cpp
)
target_link_libraries(${PROJECT_NAME}
  CycloneDDS::ddsc
  DDS_Octets_lib
  IndyDS_CabToModelCorrective_lib
  IndyDS_CabToSteeringCorrective_lib
  IndyDS_GPS_lib
  IndyDS_LaserMeter_lib
  IndyDS_RoadLinesPolynoms_lib
  IndyDS_SensorMovableTargetsBoundingBoxes_lib
  IndyDS_SensorMovableTargets_lib
  IndyDS_VehicleOutput_lib
)

rclcpp_components_register_node(${PROJECT_NAME}
  PLUGIN "vrxperience_bridge::DdsDoneReceiver"
  EXECUTABLE recv_dds_done
)

rclcpp_components_register_node(${PROJECT_NAME}
  PLUGIN "vrxperience_bridge::GpsReceiver"
  EXECUTABLE recv_gps
)

rclcpp_components_register_node(${PROJECT_NAME}
  PLUGIN "vrxperience_bridge::LaserMeterReceiver"
  EXECUTABLE recv_laser_meter
)

rclcpp_components_register_node(${PROJECT_NAME}
  PLUGIN "vrxperience_bridge::MovableTargetsReceiver"
  EXECUTABLE recv_movable_targets
)

rclcpp_components_register_node(${PROJECT_NAME}
  PLUGIN "vrxperience_bridge::MovableTargetsBoundingBoxesReceiver"
  EXECUTABLE recv_movable_targets_bounding_boxes
)

rclcpp_components_register_node(${PROJECT_NAME}
  PLUGIN "vrxperience_bridge::RoadLinesPolynomsReceiver"
  EXECUTABLE recv_road_lines_polynoms
)

rclcpp_components_register_node(${PROJECT_NAME}
  PLUGIN "vrxperience_bridge::VehicleOutputReceiver"
  EXECUTABLE recv_vehicle_output
)

rclcpp_components_register_node(${PROJECT_NAME}
  PLUGIN "vrxperience_bridge::CabToModelCorrectiveSender"
  EXECUTABLE send_cab_to_model_corrective
)

rclcpp_components_register_node(${PROJECT_NAME}
  PLUGIN "vrxperience_bridge::CabToSteeringCorrectiveSender"
  EXECUTABLE send_cab_to_steering_corrective
)

rclcpp_components_register_node(${PROJECT_NAME}
  PLUGIN "vrxperience_bridge::DdsDoneReplySender"
  EXECUTABLE send_dds_done_reply
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  set(ament_cmake_copyright_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_auto_package(
  INSTALL_TO_SHARE
    launch
)
