// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from haegeum_interfaces:msg/RobotStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "haegeum_interfaces/msg/robot_status.h"


#ifndef HAEGEUM_INTERFACES__MSG__DETAIL__ROBOT_STATUS__STRUCT_H_
#define HAEGEUM_INTERFACES__MSG__DETAIL__ROBOT_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'robot_id'
// Member 'robot_type'
// Member 'state'
// Member 'current_task'
#include "rosidl_runtime_c/string.h"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in msg/RobotStatus in the package haegeum_interfaces.
typedef struct haegeum_interfaces__msg__RobotStatus
{
  rosidl_runtime_c__String robot_id;
  rosidl_runtime_c__String robot_type;
  geometry_msgs__msg__Pose pose;
  float battery;
  bool busy;
  rosidl_runtime_c__String state;
  rosidl_runtime_c__String current_task;
} haegeum_interfaces__msg__RobotStatus;

// Struct for a sequence of haegeum_interfaces__msg__RobotStatus.
typedef struct haegeum_interfaces__msg__RobotStatus__Sequence
{
  haegeum_interfaces__msg__RobotStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} haegeum_interfaces__msg__RobotStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HAEGEUM_INTERFACES__MSG__DETAIL__ROBOT_STATUS__STRUCT_H_
