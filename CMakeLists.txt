cmake_minimum_required(VERSION 3.24.0)
project(cpp-github-template VERSION 0.1.0 LANGUAGES C CXX)

add_library(template-class src/template-class.cpp)

target_compile_options(template-class PRIVATE --coverage)
target_link_options(template-class PRIVATE --coverage)

target_include_directories(template-class
  PUBLIC
  ${PROJECT_SOURCE_DIR}/include
)

# Enable CTest
include(CTest)
enable_testing()

# Obtain GoogleTest
include(FetchContent)

FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/v1.17.0.zip
)

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

FetchContent_MakeAvailable(googletest)

add_subdirectory(tests)

set(CMAKE_BUILD_TYPE "Debug")
