# Test executable
add_executable(template-test
  template-test.cpp
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

if(ENABLE_COVERAGE AND CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang")
  target_compile_options(template-test PRIVATE
  --coverage -O0 -g
  $<$<CONFIG:Debug>:-fsanitize=address -fno-omit-frame-pointer>
  )
  target_link_options(template-test PRIVATE
  --coverage
  $<$<CONFIG:Debug>:-fsanitize=address -fno-omit-frame-pointer>
  )
endif()

target_include_directories(template-test
  PUBLIC
  ${PROJECT_SOURCE_DIR}/core_template/include
)

target_link_libraries(template-test
  PRIVATE
  GTest::gtest_main
  core_template
)

# Discover individual TEST cases and register them with CTest.
include(GoogleTest)
gtest_discover_tests(template-test)
