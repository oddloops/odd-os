# CMake verison, project name, & C++ Standard
cmake_minimum_required(VERSION 3.13)
project(oddOS)
set(CMAKE_CXX_STANDARD 14)

# Add header and source files
include_directories(include)
file(GLOB SOURCE_FILES "src/*.cpp")

# Create executable
add_executable(oddOS ${SOURCE_FILES})