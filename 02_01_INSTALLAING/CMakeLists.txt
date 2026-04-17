cmake_minimum_required(VERSION 4.1.1)

project (recursion)

add_executable(recursion recursion.cpp)

INSTALL(TARGETS recursion DESTINATION bin)