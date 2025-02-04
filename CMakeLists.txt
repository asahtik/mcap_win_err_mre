cmake_minimum_required (VERSION 3.12)

project ("mcap_test")

# Add source to this project's executable.
add_executable (mcap_test "mcap_test.cpp")

target_include_directories(mcap_test PRIVATE ${CMAKE_SOURCE_DIR}/mcap/include)

set_property(TARGET mcap_test PROPERTY CXX_STANDARD 20)
