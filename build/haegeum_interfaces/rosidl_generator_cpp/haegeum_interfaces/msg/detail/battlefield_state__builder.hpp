// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from haegeum_interfaces:msg/BattlefieldState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "haegeum_interfaces/msg/battlefield_state.hpp"


#ifndef HAEGEUM_INTERFACES__MSG__DETAIL__BATTLEFIELD_STATE__BUILDER_HPP_
#define HAEGEUM_INTERFACES__MSG__DETAIL__BATTLEFIELD_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "haegeum_interfaces/msg/detail/battlefield_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace haegeum_interfaces
{

namespace msg
{

namespace builder
{

class Init_BattlefieldState_robots
{
public:
  explicit Init_BattlefieldState_robots(::haegeum_interfaces::msg::BattlefieldState & msg)
  : msg_(msg)
  {}
  ::haegeum_interfaces::msg::BattlefieldState robots(::haegeum_interfaces::msg::BattlefieldState::_robots_type arg)
  {
    msg_.robots = std::move(arg);
    return std::move(msg_);
  }

private:
  ::haegeum_interfaces::msg::BattlefieldState msg_;
};

class Init_BattlefieldState_targets
{
public:
  Init_BattlefieldState_targets()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BattlefieldState_robots targets(::haegeum_interfaces::msg::BattlefieldState::_targets_type arg)
  {
    msg_.targets = std::move(arg);
    return Init_BattlefieldState_robots(msg_);
  }

private:
  ::haegeum_interfaces::msg::BattlefieldState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::haegeum_interfaces::msg::BattlefieldState>()
{
  return haegeum_interfaces::msg::builder::Init_BattlefieldState_targets();
}

}  // namespace haegeum_interfaces

#endif  // HAEGEUM_INTERFACES__MSG__DETAIL__BATTLEFIELD_STATE__BUILDER_HPP_
