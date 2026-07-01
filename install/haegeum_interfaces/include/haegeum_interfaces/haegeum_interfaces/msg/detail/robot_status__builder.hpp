// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from haegeum_interfaces:msg/RobotStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "haegeum_interfaces/msg/robot_status.hpp"


#ifndef HAEGEUM_INTERFACES__MSG__DETAIL__ROBOT_STATUS__BUILDER_HPP_
#define HAEGEUM_INTERFACES__MSG__DETAIL__ROBOT_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "haegeum_interfaces/msg/detail/robot_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace haegeum_interfaces
{

namespace msg
{

namespace builder
{

class Init_RobotStatus_current_task
{
public:
  explicit Init_RobotStatus_current_task(::haegeum_interfaces::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  ::haegeum_interfaces::msg::RobotStatus current_task(::haegeum_interfaces::msg::RobotStatus::_current_task_type arg)
  {
    msg_.current_task = std::move(arg);
    return std::move(msg_);
  }

private:
  ::haegeum_interfaces::msg::RobotStatus msg_;
};

class Init_RobotStatus_state
{
public:
  explicit Init_RobotStatus_state(::haegeum_interfaces::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_current_task state(::haegeum_interfaces::msg::RobotStatus::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_RobotStatus_current_task(msg_);
  }

private:
  ::haegeum_interfaces::msg::RobotStatus msg_;
};

class Init_RobotStatus_busy
{
public:
  explicit Init_RobotStatus_busy(::haegeum_interfaces::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_state busy(::haegeum_interfaces::msg::RobotStatus::_busy_type arg)
  {
    msg_.busy = std::move(arg);
    return Init_RobotStatus_state(msg_);
  }

private:
  ::haegeum_interfaces::msg::RobotStatus msg_;
};

class Init_RobotStatus_battery
{
public:
  explicit Init_RobotStatus_battery(::haegeum_interfaces::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_busy battery(::haegeum_interfaces::msg::RobotStatus::_battery_type arg)
  {
    msg_.battery = std::move(arg);
    return Init_RobotStatus_busy(msg_);
  }

private:
  ::haegeum_interfaces::msg::RobotStatus msg_;
};

class Init_RobotStatus_pose
{
public:
  explicit Init_RobotStatus_pose(::haegeum_interfaces::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_battery pose(::haegeum_interfaces::msg::RobotStatus::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_RobotStatus_battery(msg_);
  }

private:
  ::haegeum_interfaces::msg::RobotStatus msg_;
};

class Init_RobotStatus_robot_type
{
public:
  explicit Init_RobotStatus_robot_type(::haegeum_interfaces::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_pose robot_type(::haegeum_interfaces::msg::RobotStatus::_robot_type_type arg)
  {
    msg_.robot_type = std::move(arg);
    return Init_RobotStatus_pose(msg_);
  }

private:
  ::haegeum_interfaces::msg::RobotStatus msg_;
};

class Init_RobotStatus_robot_id
{
public:
  Init_RobotStatus_robot_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotStatus_robot_type robot_id(::haegeum_interfaces::msg::RobotStatus::_robot_id_type arg)
  {
    msg_.robot_id = std::move(arg);
    return Init_RobotStatus_robot_type(msg_);
  }

private:
  ::haegeum_interfaces::msg::RobotStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::haegeum_interfaces::msg::RobotStatus>()
{
  return haegeum_interfaces::msg::builder::Init_RobotStatus_robot_id();
}

}  // namespace haegeum_interfaces

#endif  // HAEGEUM_INTERFACES__MSG__DETAIL__ROBOT_STATUS__BUILDER_HPP_
