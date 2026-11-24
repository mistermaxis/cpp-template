# Create the executable binary
add_executable(app_template main.cpp)

# Link to target library
# This pulls in the source code and include paths
target_link_libraries(app_template PRIVATE core_template)

target_compile_options(app_template PRIVATE
  $<$<CONFIG:Debug>:-fsanitize=address -fno-omit-frame-pointer>
)
target_link_options(app_template PRIVATE
  $<$<CONFIG:Debug>:-fsanitize=address>
)