cmake_minimum_required (VERSION 3.12)

project ("mcap_test")

add_library (mcap STATIC "mcap.cpp")

target_include_directories(mcap PUBLIC ${CMAKE_SOURCE_DIR}/mcap/include)

# Add source to this project's executable.
add_executable (mcap_test "mcap_test.cpp")
target_link_libraries(mcap_test mcap)

set_property(TARGET mcap_test PROPERTY CXX_STANDARD 20)
set_property(TARGET mcap PROPERTY CXX_STANDARD 20)
