// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from haegeum_interfaces:msg/Target.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "haegeum_interfaces/msg/target.hpp"


#ifndef HAEGEUM_INTERFACES__MSG__DETAIL__TARGET__BUILDER_HPP_
#define HAEGEUM_INTERFACES__MSG__DETAIL__TARGET__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "haegeum_interfaces/msg/detail/target__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace haegeum_interfaces
{

namespace msg
{

namespace builder
{

class Init_Target_detected_by
{
public:
  explicit Init_Target_detected_by(::haegeum_interfaces::msg::Target & msg)
  : msg_(msg)
  {}
  ::haegeum_interfaces::msg::Target detected_by(::haegeum_interfaces::msg::Target::_detected_by_type arg)
  {
    msg_.detected_by = std::move(arg);
    return std::move(msg_);
  }

private:
  ::haegeum_interfaces::msg::Target msg_;
};

class Init_Target_confidence
{
public:
  explicit Init_Target_confidence(::haegeum_interfaces::msg::Target & msg)
  : msg_(msg)
  {}
  Init_Target_detected_by confidence(::haegeum_interfaces::msg::Target::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return Init_Target_detected_by(msg_);
  }

private:
  ::haegeum_interfaces::msg::Target msg_;
};

class Init_Target_position
{
public:
  explicit Init_Target_position(::haegeum_interfaces::msg::Target & msg)
  : msg_(msg)
  {}
  Init_Target_confidence position(::haegeum_interfaces::msg::Target::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_Target_confidence(msg_);
  }

private:
  ::haegeum_interfaces::msg::Target msg_;
};

class Init_Target_target_type
{
public:
  explicit Init_Target_target_type(::haegeum_interfaces::msg::Target & msg)
  : msg_(msg)
  {}
  Init_Target_position target_type(::haegeum_interfaces::msg::Target::_target_type_type arg)
  {
    msg_.target_type = std::move(arg);
    return Init_Target_position(msg_);
  }

private:
  ::haegeum_interfaces::msg::Target msg_;
};

class Init_Target_target_id
{
public:
  Init_Target_target_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Target_target_type target_id(::haegeum_interfaces::msg::Target::_target_id_type arg)
  {
    msg_.target_id = std::move(arg);
    return Init_Target_target_type(msg_);
  }

private:
  ::haegeum_interfaces::msg::Target msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::haegeum_interfaces::msg::Target>()
{
  return haegeum_interfaces::msg::builder::Init_Target_target_id();
}

}  // namespace haegeum_interfaces

#endif  // HAEGEUM_INTERFACES__MSG__DETAIL__TARGET__BUILDER_HPP_
