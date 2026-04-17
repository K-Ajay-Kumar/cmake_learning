cmake_minimum_required(VERSION 4.1.1)

project(adder_src)

add_subdirectory(lib)

add_executable(adder_src main.cpp)

target_link_libraries(adder_src adder_lib)