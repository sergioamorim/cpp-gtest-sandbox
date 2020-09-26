project(hello_lib)

add_library(hello STATIC src/hello.cpp)
add_subdirectory(test)
