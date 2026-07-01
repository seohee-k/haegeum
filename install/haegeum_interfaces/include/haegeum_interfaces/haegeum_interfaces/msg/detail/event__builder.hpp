// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from haegeum_interfaces:msg/Event.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "haegeum_interfaces/msg/event.hpp"


#ifndef HAEGEUM_INTERFACES__MSG__DETAIL__EVENT__BUILDER_HPP_
#define HAEGEUM_INTERFACES__MSG__DETAIL__EVENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "haegeum_interfaces/msg/detail/event__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace haegeum_interfaces
{

namespace msg
{

namespace builder
{

class Init_Event_detail
{
public:
  explicit Init_Event_detail(::haegeum_interfaces::msg::Event & msg)
  : msg_(msg)
  {}
  ::haegeum_interfaces::msg::Event detail(::haegeum_interfaces::msg::Event::_detail_type arg)
  {
    msg_.detail = std::move(arg);
    return std::move(msg_);
  }

private:
  ::haegeum_interfaces::msg::Event msg_;
};

class Init_Event_source
{
public:
  explicit Init_Event_source(::haegeum_interfaces::msg::Event & msg)
  : msg_(msg)
  {}
  Init_Event_detail source(::haegeum_interfaces::msg::Event::_source_type arg)
  {
    msg_.source = std::move(arg);
    return Init_Event_detail(msg_);
  }

private:
  ::haegeum_interfaces::msg::Event msg_;
};

class Init_Event_event_type
{
public:
  explicit Init_Event_event_type(::haegeum_interfaces::msg::Event & msg)
  : msg_(msg)
  {}
  Init_Event_source event_type(::haegeum_interfaces::msg::Event::_event_type_type arg)
  {
    msg_.event_type = std::move(arg);
    return Init_Event_source(msg_);
  }

private:
  ::haegeum_interfaces::msg::Event msg_;
};

class Init_Event_stamp
{
public:
  Init_Event_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Event_event_type stamp(::haegeum_interfaces::msg::Event::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_Event_event_type(msg_);
  }

private:
  ::haegeum_interfaces::msg::Event msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::haegeum_interfaces::msg::Event>()
{
  return haegeum_interfaces::msg::builder::Init_Event_stamp();
}

}  // namespace haegeum_interfaces

#endif  // HAEGEUM_INTERFACES__MSG__DETAIL__EVENT__BUILDER_HPP_
