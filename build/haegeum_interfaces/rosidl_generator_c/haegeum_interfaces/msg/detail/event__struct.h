// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from haegeum_interfaces:msg/Event.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "haegeum_interfaces/msg/event.h"


#ifndef HAEGEUM_INTERFACES__MSG__DETAIL__EVENT__STRUCT_H_
#define HAEGEUM_INTERFACES__MSG__DETAIL__EVENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'event_type'
// Member 'source'
// Member 'detail'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Event in the package haegeum_interfaces.
typedef struct haegeum_interfaces__msg__Event
{
  builtin_interfaces__msg__Time stamp;
  rosidl_runtime_c__String event_type;
  rosidl_runtime_c__String source;
  rosidl_runtime_c__String detail;
} haegeum_interfaces__msg__Event;

// Struct for a sequence of haegeum_interfaces__msg__Event.
typedef struct haegeum_interfaces__msg__Event__Sequence
{
  haegeum_interfaces__msg__Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} haegeum_interfaces__msg__Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HAEGEUM_INTERFACES__MSG__DETAIL__EVENT__STRUCT_H_
