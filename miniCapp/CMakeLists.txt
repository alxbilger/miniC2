cmake_minimum_required(VERSION 3.10)
project(miniCapp C)
add_executable(${PROJECT_NAME} main.c)
target_link_libraries(${PROJECT_NAME} miniClib)
