cmake_minimum_required(VERSION 4.0.0)
project(GameEngine VERSION 0.1.0 LANGUAGES CXX)

include(CTest)
enable_testing()

add_executable(GameEngine src/main.cpp)

set_property(TARGET GameEngine PROPERTY CXX_STANDARD 20)

# Enable compile command export for clangd
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Enable warnings
if (CMAKE_CXX_COMPILER_ID STREQUAL "Clang" OR CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
    target_compile_options(GameEngine PRIVATE -Wall -Wextra -Wpedantic)
elseif (CMAKE_CXX_COMPILER_ID STREQUAL "MSVC")
    target_compile_options(GameEngine PRIVATE /W4)
endif()

# Enable clang-tidy
if (CMAKE_CXX_COMPILER_ID STREQUAL "Clang" OR CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
    set(CMAKE_CXX_CLANG_TIDY "clang-tidy")
endif()
