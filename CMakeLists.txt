cmake_minimum_required(VERSION 3.24.0)

# Define the project name, version and language
project(cpp-template VERSION 0.1.0 LANGUAGES C CXX)

# Define version 23 as the C++ standad for the project with no extensions
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(core_template)
add_subdirectory(app_template)
add_subdirectory(tests)
