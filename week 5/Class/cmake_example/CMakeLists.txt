cmake_minimum_required(VERSION 3.15)

project(MultiFiles)

add_executable(multi_files 
src/main.cpp
src/module.cpp
)

target_include_directories(multi_files
PRIVATE include 
)