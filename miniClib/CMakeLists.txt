cmake_minimum_required(VERSION 3.10)
project(miniClib C)
add_library(${PROJECT_NAME} STATIC square.c square.h)
target_include_directories(${PROJECT_NAME} PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR} "${PROJECT_BINARY_DIR}")
