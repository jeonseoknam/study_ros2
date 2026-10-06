cmake_minimum_required(VERSION 3.8)
project(box_maker)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(visualization_msgs REQUIRED)

add_executable(box_publisher src/box_publisher.cpp)
ament_target_dependencies(box_publisher rclcpp visualization_msgs)

install(TARGETS
  box_publisher
  DESTINATION lib/${PROJECT_NAME})

ament_package()
