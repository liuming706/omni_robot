cmake_minimum_required(VERSION 3.5)
project(omni_gazebo)

# Default to C++14
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Find ament packages
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclpy REQUIRED)
install(DIRECTORY config meshes urdf world launch
        DESTINATION share/${PROJECT_NAME})

# Declare the package
ament_package()

