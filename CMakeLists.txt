cmake_minimum_required(VERSION 3.8)
project(my_bigInt C)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(CMAKE_C_STANDARD 17)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Wextra -Wpedantic")

add_subdirectory("${PROJECT_SOURCE_DIR}/my_app")
add_subdirectory("${PROJECT_SOURCE_DIR}/unit_tests")
