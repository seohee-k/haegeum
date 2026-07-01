// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from haegeum_interfaces:msg/BattlefieldState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "haegeum_interfaces/msg/detail/battlefield_state__rosidl_typesupport_introspection_c.h"
#include "haegeum_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "haegeum_interfaces/msg/detail/battlefield_state__functions.h"
#include "haegeum_interfaces/msg/detail/battlefield_state__struct.h"


// Include directives for member types
// Member `targets`
#include "haegeum_interfaces/msg/target.h"
// Member `targets`
#include "haegeum_interfaces/msg/detail/target__rosidl_typesupport_introspection_c.h"
// Member `robots`
#include "haegeum_interfaces/msg/robot_status.h"
// Member `robots`
#include "haegeum_interfaces/msg/detail/robot_status__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void haegeum_interfaces__msg__BattlefieldState__rosidl_typesupport_introspection_c__BattlefieldState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  haegeum_interfaces__msg__BattlefieldState__init(message_memory);
}

void haegeum_interfaces__msg__BattlefieldState__rosidl_typesupport_introspection_c__BattlefieldState_fini_function(void * message_memory)
{
  haegeum_interfaces__msg__BattlefieldState__fini(message_memory);
}

size_t haegeum_interfaces__msg__BattlefieldState__rosidl_typesupport_introspection_c__size_function__BattlefieldState__targets(
  const void * untyped_member)
{
  const haegeum_interfaces__msg__Target__Sequence * member =
    (const haegeum_interfaces__msg__Target__Sequence *)(untyped_member);
  return member->size;
}

const void * haegeum_interfaces__msg__BattlefieldState__rosidl_typesupport_introspection_c__get_const_function__BattlefieldState__targets(
  const void * untyped_member, size_t index)
{
  const haegeum_interfaces__msg__Target__Sequence * member =
    (const haegeum_interfaces__msg__Target__Sequence *)(untyped_member);
  return &member->data[index];
}

void * haegeum_interfaces__msg__BattlefieldState__rosidl_typesupport_introspection_c__get_function__BattlefieldState__targets(
  void * untyped_member, size_t index)
{
  haegeum_interfaces__msg__Target__Sequence * member =
    (haegeum_interfaces__msg__Target__Sequence *)(untyped_member);
  return &member->data[index];
}

void haegeum_interfaces__msg__BattlefieldState__rosidl_typesupport_introspection_c__fetch_function__BattlefieldState__targets(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const haegeum_interfaces__msg__Target * item =
    ((const haegeum_interfaces__msg__Target *)
    haegeum_interfaces__msg__BattlefieldState__rosidl_typesupport_introspection_c__get_const_function__BattlefieldState__targets(untyped_member, index));
  haegeum_interfaces__msg__Target * value =
    (haegeum_interfaces__msg__Target *)(untyped_value);
  *value = *item;
}

void haegeum_interfaces__msg__BattlefieldState__rosidl_typesupport_introspection_c__assign_function__BattlefieldState__targets(
  void * untyped_member, size_t index, const void * untyped_value)
{
  haegeum_interfaces__msg__Target * item =
    ((haegeum_interfaces__msg__Target *)
    haegeum_interfaces__msg__BattlefieldState__rosidl_typesupport_introspection_c__get_function__BattlefieldState__targets(untyped_member, index));
  const haegeum_interfaces__msg__Target * value =
    (const haegeum_interfaces__msg__Target *)(untyped_value);
  *item = *value;
}

bool haegeum_interfaces__msg__BattlefieldState__rosidl_typesupport_introspection_c__resize_function__BattlefieldState__targets(
  void * untyped_member, size_t size)
{
  haegeum_interfaces__msg__Target__Sequence * member =
    (haegeum_interfaces__msg__Target__Sequence *)(untyped_member);
  haegeum_interfaces__msg__Target__Sequence__fini(member);
  return haegeum_interfaces__msg__Target__Sequence__init(member, size);
}

size_t haegeum_interfaces__msg__BattlefieldState__rosidl_typesupport_introspection_c__size_function__BattlefieldState__robots(
  const void * untyped_member)
{
  const haegeum_interfaces__msg__RobotStatus__Sequence * member =
    (const haegeum_interfaces__msg__RobotStatus__Sequence *)(untyped_member);
  return member->size;
}

const void * haegeum_interfaces__msg__BattlefieldState__rosidl_typesupport_introspection_c__get_const_function__BattlefieldState__robots(
  const void * untyped_member, size_t index)
{
  const haegeum_interfaces__msg__RobotStatus__Sequence * member =
    (const haegeum_interfaces__msg__RobotStatus__Sequence *)(untyped_member);
  return &member->data[index];
}

void * haegeum_interfaces__msg__BattlefieldState__rosidl_typesupport_introspection_c__get_function__BattlefieldState__robots(
  void * untyped_member, size_t index)
{
  haegeum_interfaces__msg__RobotStatus__Sequence * member =
    (haegeum_interfaces__msg__RobotStatus__Sequence *)(untyped_member);
  return &member->data[index];
}

void haegeum_interfaces__msg__BattlefieldState__rosidl_typesupport_introspection_c__fetch_function__BattlefieldState__robots(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const haegeum_interfaces__msg__RobotStatus * item =
    ((const haegeum_interfaces__msg__RobotStatus *)
    haegeum_interfaces__msg__BattlefieldState__rosidl_typesupport_introspection_c__get_const_function__BattlefieldState__robots(untyped_member, index));
  haegeum_interfaces__msg__RobotStatus * value =
    (haegeum_interfaces__msg__RobotStatus *)(untyped_value);
  *value = *item;
}

void haegeum_interfaces__msg__BattlefieldState__rosidl_typesupport_introspection_c__assign_function__BattlefieldState__robots(
  void * untyped_member, size_t index, const void * untyped_value)
{
  haegeum_interfaces__msg__RobotStatus * item =
    ((haegeum_interfaces__msg__RobotStatus *)
    haegeum_interfaces__msg__BattlefieldState__rosidl_typesupport_introspection_c__get_function__BattlefieldState__robots(untyped_member, index));
  const haegeum_interfaces__msg__RobotStatus * value =
    (const haegeum_interfaces__msg__RobotStatus *)(untyped_value);
  *item = *value;
}

bool haegeum_interfaces__msg__BattlefieldState__rosidl_typesupport_introspection_c__resize_function__BattlefieldState__robots(
  void * untyped_member, size_t size)
{
  haegeum_interfaces__msg__RobotStatus__Sequence * member =
    (haegeum_interfaces__msg__RobotStatus__Sequence *)(untyped_member);
  haegeum_interfaces__msg__RobotStatus__Sequence__fini(member);
  return haegeum_interfaces__msg__RobotStatus__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember haegeum_interfaces__msg__BattlefieldState__rosidl_typesupport_introspection_c__BattlefieldState_message_member_array[2] = {
  {
    "targets",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(haegeum_interfaces__msg__BattlefieldState, targets),  // bytes offset in struct
    NULL,  // default value
    haegeum_interfaces__msg__BattlefieldState__rosidl_typesupport_introspection_c__size_function__BattlefieldState__targets,  // size() function pointer
    haegeum_interfaces__msg__BattlefieldState__rosidl_typesupport_introspection_c__get_const_function__BattlefieldState__targets,  // get_const(index) function pointer
    haegeum_interfaces__msg__BattlefieldState__rosidl_typesupport_introspection_c__get_function__BattlefieldState__targets,  // get(index) function pointer
    haegeum_interfaces__msg__BattlefieldState__rosidl_typesupport_introspection_c__fetch_function__BattlefieldState__targets,  // fetch(index, &value) function pointer
    haegeum_interfaces__msg__BattlefieldState__rosidl_typesupport_introspection_c__assign_function__BattlefieldState__targets,  // assign(index, value) function pointer
    haegeum_interfaces__msg__BattlefieldState__rosidl_typesupport_introspection_c__resize_function__BattlefieldState__targets  // resize(index) function pointer
  },
  {
    "robots",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(haegeum_interfaces__msg__BattlefieldState, robots),  // bytes offset in struct
    NULL,  // default value
    haegeum_interfaces__msg__BattlefieldState__rosidl_typesupport_introspection_c__size_function__BattlefieldState__robots,  // size() function pointer
    haegeum_interfaces__msg__BattlefieldState__rosidl_typesupport_introspection_c__get_const_function__BattlefieldState__robots,  // get_const(index) function pointer
    haegeum_interfaces__msg__BattlefieldState__rosidl_typesupport_introspection_c__get_function__BattlefieldState__robots,  // get(index) function pointer
    haegeum_interfaces__msg__BattlefieldState__rosidl_typesupport_introspection_c__fetch_function__BattlefieldState__robots,  // fetch(index, &value) function pointer
    haegeum_interfaces__msg__BattlefieldState__rosidl_typesupport_introspection_c__assign_function__BattlefieldState__robots,  // assign(index, value) function pointer
    haegeum_interfaces__msg__BattlefieldState__rosidl_typesupport_introspection_c__resize_function__BattlefieldState__robots  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers haegeum_interfaces__msg__BattlefieldState__rosidl_typesupport_introspection_c__BattlefieldState_message_members = {
  "haegeum_interfaces__msg",  // message namespace
  "BattlefieldState",  // message name
  2,  // number of fields
  sizeof(haegeum_interfaces__msg__BattlefieldState),
  false,  // has_any_key_member_
  haegeum_interfaces__msg__BattlefieldState__rosidl_typesupport_introspection_c__BattlefieldState_message_member_array,  // message members
  haegeum_interfaces__msg__BattlefieldState__rosidl_typesupport_introspection_c__BattlefieldState_init_function,  // function to initialize message memory (memory has to be allocated)
  haegeum_interfaces__msg__BattlefieldState__rosidl_typesupport_introspection_c__BattlefieldState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t haegeum_interfaces__msg__BattlefieldState__rosidl_typesupport_introspection_c__BattlefieldState_message_type_support_handle = {
  0,
  &haegeum_interfaces__msg__BattlefieldState__rosidl_typesupport_introspection_c__BattlefieldState_message_members,
  get_message_typesupport_handle_function,
  &haegeum_interfaces__msg__BattlefieldState__get_type_hash,
  &haegeum_interfaces__msg__BattlefieldState__get_type_description,
  &haegeum_interfaces__msg__BattlefieldState__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_haegeum_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, haegeum_interfaces, msg, BattlefieldState)() {
  haegeum_interfaces__msg__BattlefieldState__rosidl_typesupport_introspection_c__BattlefieldState_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, haegeum_interfaces, msg, Target)();
  haegeum_interfaces__msg__BattlefieldState__rosidl_typesupport_introspection_c__BattlefieldState_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, haegeum_interfaces, msg, RobotStatus)();
  if (!haegeum_interfaces__msg__BattlefieldState__rosidl_typesupport_introspection_c__BattlefieldState_message_type_support_handle.typesupport_identifier) {
    haegeum_interfaces__msg__BattlefieldState__rosidl_typesupport_introspection_c__BattlefieldState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &haegeum_interfaces__msg__BattlefieldState__rosidl_typesupport_introspection_c__BattlefieldState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
