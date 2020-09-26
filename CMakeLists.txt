cmake_minimum_required(VERSION 3.10)
project(hello CXX)

include_directories(hello/include)
add_subdirectory(hello)

add_executable(main main.cpp)
target_link_libraries(main hello)
