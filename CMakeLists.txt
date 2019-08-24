cmake_minimum_required(VERSION 3.10)
project(test)
include_directories(${PROJECT_SOURCE_DIR})
add_executable(app function_t.c)