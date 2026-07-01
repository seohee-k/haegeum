// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from haegeum_interfaces:msg/BattlefieldState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "haegeum_interfaces/msg/battlefield_state.h"


#ifndef HAEGEUM_INTERFACES__MSG__DETAIL__BATTLEFIELD_STATE__STRUCT_H_
#define HAEGEUM_INTERFACES__MSG__DETAIL__BATTLEFIELD_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'targets'
#include "haegeum_interfaces/msg/detail/target__struct.h"
// Member 'robots'
#include "haegeum_interfaces/msg/detail/robot_status__struct.h"

/// Struct defined in msg/BattlefieldState in the package haegeum_interfaces.
typedef struct haegeum_interfaces__msg__BattlefieldState
{
  haegeum_interfaces__msg__Target__Sequence targets;
  haegeum_interfaces__msg__RobotStatus__Sequence robots;
} haegeum_interfaces__msg__BattlefieldState;

// Struct for a sequence of haegeum_interfaces__msg__BattlefieldState.
typedef struct haegeum_interfaces__msg__BattlefieldState__Sequence
{
  haegeum_interfaces__msg__BattlefieldState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} haegeum_interfaces__msg__BattlefieldState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HAEGEUM_INTERFACES__MSG__DETAIL__BATTLEFIELD_STATE__STRUCT_H_
