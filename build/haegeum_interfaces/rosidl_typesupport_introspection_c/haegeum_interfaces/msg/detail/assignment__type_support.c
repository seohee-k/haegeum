// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from haegeum_interfaces:msg/Assignment.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "haegeum_interfaces/msg/detail/assignment__rosidl_typesupport_introspection_c.h"
#include "haegeum_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "haegeum_interfaces/msg/detail/assignment__functions.h"
#include "haegeum_interfaces/msg/detail/assignment__struct.h"


// Include directives for member types
// Member `target_id`
// Member `assigned_robot`
// Member `mission_type`
#include "rosidl_runtime_c/string_functions.h"
// Member `target_position`
#include "geometry_msgs/msg/point.h"
// Member `target_position`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void haegeum_interfaces__msg__Assignment__rosidl_typesupport_introspection_c__Assignment_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  haegeum_interfaces__msg__Assignment__init(message_memory);
}

void haegeum_interfaces__msg__Assignment__rosidl_typesupport_introspection_c__Assignment_fini_function(void * message_memory)
{
  haegeum_interfaces__msg__Assignment__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember haegeum_interfaces__msg__Assignment__rosidl_typesupport_introspection_c__Assignment_message_member_array[4] = {
  {
    "target_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(haegeum_interfaces__msg__Assignment, target_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "assigned_robot",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(haegeum_interfaces__msg__Assignment, assigned_robot),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mission_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(haegeum_interfaces__msg__Assignment, mission_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "target_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(haegeum_interfaces__msg__Assignment, target_position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers haegeum_interfaces__msg__Assignment__rosidl_typesupport_introspection_c__Assignment_message_members = {
  "haegeum_interfaces__msg",  // message namespace
  "Assignment",  // message name
  4,  // number of fields
  sizeof(haegeum_interfaces__msg__Assignment),
  false,  // has_any_key_member_
  haegeum_interfaces__msg__Assignment__rosidl_typesupport_introspection_c__Assignment_message_member_array,  // message members
  haegeum_interfaces__msg__Assignment__rosidl_typesupport_introspection_c__Assignment_init_function,  // function to initialize message memory (memory has to be allocated)
  haegeum_interfaces__msg__Assignment__rosidl_typesupport_introspection_c__Assignment_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t haegeum_interfaces__msg__Assignment__rosidl_typesupport_introspection_c__Assignment_message_type_support_handle = {
  0,
  &haegeum_interfaces__msg__Assignment__rosidl_typesupport_introspection_c__Assignment_message_members,
  get_message_typesupport_handle_function,
  &haegeum_interfaces__msg__Assignment__get_type_hash,
  &haegeum_interfaces__msg__Assignment__get_type_description,
  &haegeum_interfaces__msg__Assignment__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_haegeum_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, haegeum_interfaces, msg, Assignment)() {
  haegeum_interfaces__msg__Assignment__rosidl_typesupport_introspection_c__Assignment_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  if (!haegeum_interfaces__msg__Assignment__rosidl_typesupport_introspection_c__Assignment_message_type_support_handle.typesupport_identifier) {
    haegeum_interfaces__msg__Assignment__rosidl_typesupport_introspection_c__Assignment_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &haegeum_interfaces__msg__Assignment__rosidl_typesupport_introspection_c__Assignment_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
