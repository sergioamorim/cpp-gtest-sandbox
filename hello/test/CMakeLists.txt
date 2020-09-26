project(hello_test)

include_directories(lib/googletest/googletest/include)
add_subdirectory(lib/googletest)

add_executable(test_hello test_hello.cpp)
target_link_libraries(test_hello hello)
target_link_libraries(test_hello gtest gtest_main)
