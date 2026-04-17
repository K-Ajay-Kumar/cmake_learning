cmake_minimum_required(VERSION 4.1.1)

project(adder_lib)

add_library(adder_lib adder.cpp)

target_include_directories(adder_lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../inc/)