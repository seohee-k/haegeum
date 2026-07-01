// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from haegeum_interfaces:msg/Assignment.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "haegeum_interfaces/msg/assignment.h"


#ifndef HAEGEUM_INTERFACES__MSG__DETAIL__ASSIGNMENT__STRUCT_H_
#define HAEGEUM_INTERFACES__MSG__DETAIL__ASSIGNMENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'target_id'
// Member 'assigned_robot'
// Member 'mission_type'
#include "rosidl_runtime_c/string.h"
// Member 'target_position'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in msg/Assignment in the package haegeum_interfaces.
typedef struct haegeum_interfaces__msg__Assignment
{
  rosidl_runtime_c__String target_id;
  rosidl_runtime_c__String assigned_robot;
  rosidl_runtime_c__String mission_type;
  geometry_msgs__msg__Point target_position;
} haegeum_interfaces__msg__Assignment;

// Struct for a sequence of haegeum_interfaces__msg__Assignment.
typedef struct haegeum_interfaces__msg__Assignment__Sequence
{
  haegeum_interfaces__msg__Assignment * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} haegeum_interfaces__msg__Assignment__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HAEGEUM_INTERFACES__MSG__DETAIL__ASSIGNMENT__STRUCT_H_
