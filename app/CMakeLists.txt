cmake_minimum_required(VERSION 3.8)
project(my_bigInt C)

set(CMAKE_C_STANDARD 17)

file(GLOB_RECURSE sources
        "src/*.c"
    )

add_executable(my_app ${sources})

target_include_directories(my_app PUBLIC include)

# add_library(my_bigInt_program ${my_bigInt_files})
