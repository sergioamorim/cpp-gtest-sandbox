cmake_minimum_required(VERSION 3.17)
project(cpp-gtest-sandbox)

set(CMAKE_CXX_STANDARD 20)

include_directories(./headers)

add_executable(cpp-gtest-sandbox src/main.cpp src/node.cpp)
