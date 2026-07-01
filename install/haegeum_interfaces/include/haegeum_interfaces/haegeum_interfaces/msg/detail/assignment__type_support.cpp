// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from haegeum_interfaces:msg/Assignment.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "haegeum_interfaces/msg/detail/assignment__functions.h"
#include "haegeum_interfaces/msg/detail/assignment__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace haegeum_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Assignment_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) haegeum_interfaces::msg::Assignment(_init);
}

void Assignment_fini_function(void * message_memory)
{
  auto typed_message = static_cast<haegeum_interfaces::msg::Assignment *>(message_memory);
  typed_message->~Assignment();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Assignment_message_member_array[4] = {
  {
    "target_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(haegeum_interfaces::msg::Assignment, target_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "assigned_robot",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(haegeum_interfaces::msg::Assignment, assigned_robot),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "mission_type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(haegeum_interfaces::msg::Assignment, mission_type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "target_position",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Point>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(haegeum_interfaces::msg::Assignment, target_position),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Assignment_message_members = {
  "haegeum_interfaces::msg",  // message namespace
  "Assignment",  // message name
  4,  // number of fields
  sizeof(haegeum_interfaces::msg::Assignment),
  false,  // has_any_key_member_
  Assignment_message_member_array,  // message members
  Assignment_init_function,  // function to initialize message memory (memory has to be allocated)
  Assignment_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Assignment_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Assignment_message_members,
  get_message_typesupport_handle_function,
  &haegeum_interfaces__msg__Assignment__get_type_hash,
  &haegeum_interfaces__msg__Assignment__get_type_description,
  &haegeum_interfaces__msg__Assignment__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace haegeum_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<haegeum_interfaces::msg::Assignment>()
{
  return &::haegeum_interfaces::msg::rosidl_typesupport_introspection_cpp::Assignment_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, haegeum_interfaces, msg, Assignment)() {
  return &::haegeum_interfaces::msg::rosidl_typesupport_introspection_cpp::Assignment_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
