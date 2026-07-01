# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target haegeum_interfaces::haegeum_interfaces
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${haegeum_interfaces_TARGETS}.
if(haegeum_interfaces_TARGETS AND NOT TARGET haegeum_interfaces::haegeum_interfaces)
  add_library(haegeum_interfaces::haegeum_interfaces INTERFACE IMPORTED)
  set_target_properties(haegeum_interfaces::haegeum_interfaces PROPERTIES
    INTERFACE_LINK_LIBRARIES "${haegeum_interfaces_TARGETS}")
endif()
