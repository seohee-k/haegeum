// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from haegeum_interfaces:msg/BattlefieldState.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "haegeum_interfaces/msg/detail/battlefield_state__functions.h"
#include "haegeum_interfaces/msg/detail/battlefield_state__struct.hpp"
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

void BattlefieldState_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) haegeum_interfaces::msg::BattlefieldState(_init);
}

void BattlefieldState_fini_function(void * message_memory)
{
  auto typed_message = static_cast<haegeum_interfaces::msg::BattlefieldState *>(message_memory);
  typed_message->~BattlefieldState();
}

size_t size_function__BattlefieldState__targets(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<haegeum_interfaces::msg::Target> *>(untyped_member);
  return member->size();
}

const void * get_const_function__BattlefieldState__targets(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<haegeum_interfaces::msg::Target> *>(untyped_member);
  return &member[index];
}

void * get_function__BattlefieldState__targets(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<haegeum_interfaces::msg::Target> *>(untyped_member);
  return &member[index];
}

void fetch_function__BattlefieldState__targets(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const haegeum_interfaces::msg::Target *>(
    get_const_function__BattlefieldState__targets(untyped_member, index));
  auto & value = *reinterpret_cast<haegeum_interfaces::msg::Target *>(untyped_value);
  value = item;
}

void assign_function__BattlefieldState__targets(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<haegeum_interfaces::msg::Target *>(
    get_function__BattlefieldState__targets(untyped_member, index));
  const auto & value = *reinterpret_cast<const haegeum_interfaces::msg::Target *>(untyped_value);
  item = value;
}

void resize_function__BattlefieldState__targets(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<haegeum_interfaces::msg::Target> *>(untyped_member);
  member->resize(size);
}

size_t size_function__BattlefieldState__robots(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<haegeum_interfaces::msg::RobotStatus> *>(untyped_member);
  return member->size();
}

const void * get_const_function__BattlefieldState__robots(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<haegeum_interfaces::msg::RobotStatus> *>(untyped_member);
  return &member[index];
}

void * get_function__BattlefieldState__robots(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<haegeum_interfaces::msg::RobotStatus> *>(untyped_member);
  return &member[index];
}

void fetch_function__BattlefieldState__robots(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const haegeum_interfaces::msg::RobotStatus *>(
    get_const_function__BattlefieldState__robots(untyped_member, index));
  auto & value = *reinterpret_cast<haegeum_interfaces::msg::RobotStatus *>(untyped_value);
  value = item;
}

void assign_function__BattlefieldState__robots(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<haegeum_interfaces::msg::RobotStatus *>(
    get_function__BattlefieldState__robots(untyped_member, index));
  const auto & value = *reinterpret_cast<const haegeum_interfaces::msg::RobotStatus *>(untyped_value);
  item = value;
}

void resize_function__BattlefieldState__robots(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<haegeum_interfaces::msg::RobotStatus> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember BattlefieldState_message_member_array[2] = {
  {
    "targets",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<haegeum_interfaces::msg::Target>(),  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(haegeum_interfaces::msg::BattlefieldState, targets),  // bytes offset in struct
    nullptr,  // default value
    size_function__BattlefieldState__targets,  // size() function pointer
    get_const_function__BattlefieldState__targets,  // get_const(index) function pointer
    get_function__BattlefieldState__targets,  // get(index) function pointer
    fetch_function__BattlefieldState__targets,  // fetch(index, &value) function pointer
    assign_function__BattlefieldState__targets,  // assign(index, value) function pointer
    resize_function__BattlefieldState__targets  // resize(index) function pointer
  },
  {
    "robots",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<haegeum_interfaces::msg::RobotStatus>(),  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(haegeum_interfaces::msg::BattlefieldState, robots),  // bytes offset in struct
    nullptr,  // default value
    size_function__BattlefieldState__robots,  // size() function pointer
    get_const_function__BattlefieldState__robots,  // get_const(index) function pointer
    get_function__BattlefieldState__robots,  // get(index) function pointer
    fetch_function__BattlefieldState__robots,  // fetch(index, &value) function pointer
    assign_function__BattlefieldState__robots,  // assign(index, value) function pointer
    resize_function__BattlefieldState__robots  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers BattlefieldState_message_members = {
  "haegeum_interfaces::msg",  // message namespace
  "BattlefieldState",  // message name
  2,  // number of fields
  sizeof(haegeum_interfaces::msg::BattlefieldState),
  false,  // has_any_key_member_
  BattlefieldState_message_member_array,  // message members
  BattlefieldState_init_function,  // function to initialize message memory (memory has to be allocated)
  BattlefieldState_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t BattlefieldState_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &BattlefieldState_message_members,
  get_message_typesupport_handle_function,
  &haegeum_interfaces__msg__BattlefieldState__get_type_hash,
  &haegeum_interfaces__msg__BattlefieldState__get_type_description,
  &haegeum_interfaces__msg__BattlefieldState__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace haegeum_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<haegeum_interfaces::msg::BattlefieldState>()
{
  return &::haegeum_interfaces::msg::rosidl_typesupport_introspection_cpp::BattlefieldState_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, haegeum_interfaces, msg, BattlefieldState)() {
  return &::haegeum_interfaces::msg::rosidl_typesupport_introspection_cpp::BattlefieldState_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
