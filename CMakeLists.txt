cmake_minimum_required(VERSION 3.10)
project(miniC C)

include(CTest)

add_subdirectory(miniClib)
add_subdirectory(miniCapp)
add_subdirectory(miniCtest)
