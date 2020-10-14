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
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(vrxperience_msgs REQUIRED)
find_package(CycloneDDS REQUIRED COMPONENTS idlc)

# generate code to handle custom DDS data types
idlc_generate(IndyDS_RoadLinesPolynoms_lib                 "res/IndyDS_RoadLinesPolynoms.idl"                )
idlc_generate(IndyDS_SensorMovableTargetsBoundingBoxes_lib "res/IndyDS_SensorMovableTargetsBoundingBoxes.idl")
idlc_generate(IndyDS_GPS_lib                               "res/IndyDS_GPS.idl"                              )
idlc_generate(IndyDS_LaserMeter_lib                        "res/IndyDS_LaserMeter.idl"                       )
idlc_generate(IndyDS_SensorMovableTargets_lib              "res/IndyDS_SensorMovableTargets.idl"             )
idlc_generate(IndyDS_VehicleOutput_lib                     "res/IndyDS_VehicleOutput.idl"                    )
idlc_generate(IndyDS_CabToModelCorrective_lib              "res/IndyDS_CabToModelCorrective.idl"             )
idlc_generate(IndyDS_CabToSteeringCorrective_lib           "res/IndyDS_CabToSteeringCorrective.idl"          )
idlc_generate(DDS_Octets_lib                               "res/DDS_Octets.idl"                              )

include_directories(include)
link_libraries(CycloneDDS::ddsc)

add_executable(recv_road_lines_polynoms src/recv_road_lines_polynoms.cpp)
ament_target_dependencies(recv_road_lines_polynoms rclcpp vrxperience_msgs)
target_link_libraries(recv_road_lines_polynoms IndyDS_RoadLinesPolynoms_lib)
install(
  TARGETS recv_road_lines_polynoms
  DESTINATION lib/${PROJECT_NAME}
)

add_executable(recv_movable_targets_bounding_boxes src/recv_movable_targets_bounding_boxes.cpp)
ament_target_dependencies(recv_movable_targets_bounding_boxes rclcpp vrxperience_msgs)
target_link_libraries(recv_movable_targets_bounding_boxes IndyDS_SensorMovableTargetsBoundingBoxes_lib)
install(
  TARGETS recv_movable_targets_bounding_boxes
  DESTINATION lib/${PROJECT_NAME}
)

add_executable(recv_gps src/recv_gps.cpp)
ament_target_dependencies(recv_gps rclcpp vrxperience_msgs)
target_link_libraries(recv_gps IndyDS_GPS_lib)
install(
  TARGETS recv_gps
  DESTINATION lib/${PROJECT_NAME}
)

add_executable(recv_laser_meter src/recv_laser_meter.cpp)
ament_target_dependencies(recv_laser_meter rclcpp vrxperience_msgs)
target_link_libraries(recv_laser_meter IndyDS_LaserMeter_lib)
install(
  TARGETS recv_laser_meter
  DESTINATION lib/${PROJECT_NAME}
)

add_executable(recv_movable_targets src/recv_movable_targets.cpp)
ament_target_dependencies(recv_movable_targets rclcpp vrxperience_msgs)
target_link_libraries(recv_movable_targets IndyDS_SensorMovableTargets_lib)
install(
  TARGETS recv_movable_targets
  DESTINATION lib/${PROJECT_NAME}
)

add_executable(recv_vehicle_output src/recv_vehicle_output.cpp)
ament_target_dependencies(recv_vehicle_output rclcpp vrxperience_msgs)
target_link_libraries(recv_vehicle_output IndyDS_VehicleOutput_lib)
install(
  TARGETS recv_vehicle_output
  DESTINATION lib/${PROJECT_NAME}
)

add_executable(send_cab_to_model_corrective src/send_cab_to_model_corrective.cpp)
ament_target_dependencies(send_cab_to_model_corrective rclcpp vrxperience_msgs)
target_link_libraries(send_cab_to_model_corrective IndyDS_CabToModelCorrective_lib)
install(
  TARGETS send_cab_to_model_corrective
  DESTINATION lib/${PROJECT_NAME}
)

add_executable(send_cab_to_steering_corrective src/send_cab_to_steering_corrective.cpp)
ament_target_dependencies(send_cab_to_steering_corrective rclcpp vrxperience_msgs)
target_link_libraries(send_cab_to_steering_corrective IndyDS_CabToSteeringCorrective_lib)
install(
  TARGETS send_cab_to_steering_corrective
  DESTINATION lib/${PROJECT_NAME}
)

add_executable(recv_dds_done src/recv_dds_done.cpp)
ament_target_dependencies(recv_dds_done rclcpp vrxperience_msgs)
target_link_libraries(recv_dds_done DDS_Octets_lib)
install(
  TARGETS recv_dds_done
  DESTINATION lib/${PROJECT_NAME}
)

add_executable(send_dds_done_reply src/send_dds_done_reply.cpp)
ament_target_dependencies(send_dds_done_reply rclcpp vrxperience_msgs)
target_link_libraries(send_dds_done_reply DDS_Octets_lib)
install(
  TARGETS send_dds_done_reply
  DESTINATION lib/${PROJECT_NAME}
)

install(
  DIRECTORY launch
  DESTINATION share/${PROJECT_NAME}/
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  set(ament_cmake_copyright_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
