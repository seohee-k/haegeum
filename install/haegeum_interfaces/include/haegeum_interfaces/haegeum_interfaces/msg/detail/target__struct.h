// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from haegeum_interfaces:msg/Target.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "haegeum_interfaces/msg/target.h"


#ifndef HAEGEUM_INTERFACES__MSG__DETAIL__TARGET__STRUCT_H_
#define HAEGEUM_INTERFACES__MSG__DETAIL__TARGET__STRUCT_H_

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
// Member 'target_type'
// Member 'detected_by'
#include "rosidl_runtime_c/string.h"
// Member 'position'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in msg/Target in the package haegeum_interfaces.
typedef struct haegeum_interfaces__msg__Target
{
  rosidl_runtime_c__String target_id;
  rosidl_runtime_c__String target_type;
  geometry_msgs__msg__Point position;
  float confidence;
  rosidl_runtime_c__String detected_by;
} haegeum_interfaces__msg__Target;

// Struct for a sequence of haegeum_interfaces__msg__Target.
typedef struct haegeum_interfaces__msg__Target__Sequence
{
  haegeum_interfaces__msg__Target * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} haegeum_interfaces__msg__Target__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HAEGEUM_INTERFACES__MSG__DETAIL__TARGET__STRUCT_H_
