cmake_minimum_required(VERSION 3.5.0)
project(lab1 VERSION 0.1.0 LANGUAGES C CXX)

add_library(task1 STATIC task1.cpp)
add_library(task2 STATIC task2.cpp)
add_library(task3 STATIC task3.cpp)
add_executable(lab1 main.cpp)
target_link_libraries(lab1 task1 task2 task3)
