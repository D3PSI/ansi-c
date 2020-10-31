cmake_minimum_required(VERSION 2.8 FATAL_ERROR)
cmake_policy(VERSION 2.8)

set(NAME ANSI_C)

project(${NAME})

set(CMAKE_BUILD_TYPE "Release")

add_subdirectory("examples")
add_subdirectory("exercises")
