cmake_minimum_required (VERSION 3.12)

project ("mcap_test")

include(FetchContent)
FetchContent_Declare(
 mcap_builder
 GIT_REPOSITORY https://github.com/olympus-robotics/mcap_builder.git
 GIT_TAG main
)
FetchContent_MakeAvailable(mcap_builder)

# Add source to this project's executable.
add_executable (mcap_test "mcap_test.cpp")

target_link_libraries(mcap_test PUBLIC mcap)

set_property(TARGET mcap_test PROPERTY CXX_STANDARD 20)
