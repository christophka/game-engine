cmake_minimum_required(VERSION 4.0.0)
project(GameEngine VERSION 0.1.0 LANGUAGES CXX)

include(CTest)
enable_testing()

add_executable(GameEngine main.cpp)

set_property(TARGET GameEngine PROPERTY CXX_STANDARD 20)