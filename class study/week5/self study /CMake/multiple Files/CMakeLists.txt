cmake_minimum_required(VERSION 3.15)
project(MultipleFiles)

add_executable(multiple_files
    src/main.cpp
    src/module.cpp
    include/module.h
)

target_include_directories(multiple_files PRIVATE include)