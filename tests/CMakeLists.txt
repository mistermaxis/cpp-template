# Test executable
add_executable(template-test
  template-test.cpp
)

target_compile_options(template-test PRIVATE --coverage)
target_link_options(template-test PRIVATE --coverage)

target_include_directories(template-test
  PUBLIC
  ${PROJECT_SOURCE_DIR}/include
)

target_link_libraries(template-test
  PRIVATE
  GTest::gtest_main
  template-class
)

# Discover individual TEST cases and register them with CTest.
include(GoogleTest)
gtest_discover_tests(template-test)
