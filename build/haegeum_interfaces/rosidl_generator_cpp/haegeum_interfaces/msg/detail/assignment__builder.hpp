// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from haegeum_interfaces:msg/Assignment.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "haegeum_interfaces/msg/assignment.hpp"


#ifndef HAEGEUM_INTERFACES__MSG__DETAIL__ASSIGNMENT__BUILDER_HPP_
#define HAEGEUM_INTERFACES__MSG__DETAIL__ASSIGNMENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "haegeum_interfaces/msg/detail/assignment__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace haegeum_interfaces
{

namespace msg
{

namespace builder
{

class Init_Assignment_target_position
{
public:
  explicit Init_Assignment_target_position(::haegeum_interfaces::msg::Assignment & msg)
  : msg_(msg)
  {}
  ::haegeum_interfaces::msg::Assignment target_position(::haegeum_interfaces::msg::Assignment::_target_position_type arg)
  {
    msg_.target_position = std::move(arg);
    return std::move(msg_);
  }

private:
  ::haegeum_interfaces::msg::Assignment msg_;
};

class Init_Assignment_mission_type
{
public:
  explicit Init_Assignment_mission_type(::haegeum_interfaces::msg::Assignment & msg)
  : msg_(msg)
  {}
  Init_Assignment_target_position mission_type(::haegeum_interfaces::msg::Assignment::_mission_type_type arg)
  {
    msg_.mission_type = std::move(arg);
    return Init_Assignment_target_position(msg_);
  }

private:
  ::haegeum_interfaces::msg::Assignment msg_;
};

class Init_Assignment_assigned_robot
{
public:
  explicit Init_Assignment_assigned_robot(::haegeum_interfaces::msg::Assignment & msg)
  : msg_(msg)
  {}
  Init_Assignment_mission_type assigned_robot(::haegeum_interfaces::msg::Assignment::_assigned_robot_type arg)
  {
    msg_.assigned_robot = std::move(arg);
    return Init_Assignment_mission_type(msg_);
  }

private:
  ::haegeum_interfaces::msg::Assignment msg_;
};

class Init_Assignment_target_id
{
public:
  Init_Assignment_target_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Assignment_assigned_robot target_id(::haegeum_interfaces::msg::Assignment::_target_id_type arg)
  {
    msg_.target_id = std::move(arg);
    return Init_Assignment_assigned_robot(msg_);
  }

private:
  ::haegeum_interfaces::msg::Assignment msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::haegeum_interfaces::msg::Assignment>()
{
  return haegeum_interfaces::msg::builder::Init_Assignment_target_id();
}

}  // namespace haegeum_interfaces

#endif  // HAEGEUM_INTERFACES__MSG__DETAIL__ASSIGNMENT__BUILDER_HPP_
