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

idlc_generate(IndyDS_lib "res/IndyDS.idl")
idlc_generate(DDS_Octets_lib "res/DDS_Octets.idl")

include_directories(include)
link_libraries(IndyDS_lib DDS_Octets_lib CycloneDDS::ddsc)

add_executable(recv_road_lines_polynoms src/recv_road_lines_polynoms.cpp)
ament_target_dependencies(recv_road_lines_polynoms rclcpp vrxperience_msgs)
install(
  TARGETS recv_road_lines_polynoms
  DESTINATION lib/${PROJECT_NAME}
)

add_executable(recv_movable_targets_bounding_boxes src/recv_movable_targets_bounding_boxes.cpp)
ament_target_dependencies(recv_movable_targets_bounding_boxes rclcpp vrxperience_msgs)
install(
  TARGETS recv_movable_targets_bounding_boxes
  DESTINATION lib/${PROJECT_NAME}
)

add_executable(recv_gps src/recv_gps.cpp)
ament_target_dependencies(recv_gps rclcpp vrxperience_msgs)
install(
  TARGETS recv_gps
  DESTINATION lib/${PROJECT_NAME}
)

add_executable(recv_laser_meter src/recv_laser_meter.cpp)
ament_target_dependencies(recv_laser_meter rclcpp vrxperience_msgs)
install(
  TARGETS recv_laser_meter
  DESTINATION lib/${PROJECT_NAME}
)

add_executable(recv_movable_targets src/recv_movable_targets.cpp)
ament_target_dependencies(recv_movable_targets rclcpp vrxperience_msgs)
install(
  TARGETS recv_movable_targets
  DESTINATION lib/${PROJECT_NAME}
)

add_executable(recv_vehicle_output src/recv_vehicle_output.cpp)
ament_target_dependencies(recv_vehicle_output rclcpp vrxperience_msgs)
install(
  TARGETS recv_vehicle_output
  DESTINATION lib/${PROJECT_NAME}
)

add_executable(send_cab_to_model_corrective src/send_cab_to_model_corrective.cpp)
ament_target_dependencies(send_cab_to_model_corrective rclcpp vrxperience_msgs)
install(
  TARGETS send_cab_to_model_corrective
  DESTINATION lib/${PROJECT_NAME}
)

add_executable(send_cab_to_steering_corrective src/send_cab_to_steering_corrective.cpp)
ament_target_dependencies(send_cab_to_steering_corrective rclcpp vrxperience_msgs)
install(
  TARGETS send_cab_to_steering_corrective
  DESTINATION lib/${PROJECT_NAME}
)

add_executable(recv_dds_done src/recv_dds_done.cpp)
ament_target_dependencies(recv_dds_done rclcpp std_msgs)
install(
  TARGETS recv_dds_done
  DESTINATION lib/${PROJECT_NAME}
)

add_executable(send_dds_done_reply src/send_dds_done_reply.cpp)
ament_target_dependencies(send_dds_done_reply rclcpp std_msgs)
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
