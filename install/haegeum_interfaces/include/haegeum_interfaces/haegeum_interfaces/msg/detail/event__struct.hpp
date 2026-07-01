// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from haegeum_interfaces:msg/Event.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "haegeum_interfaces/msg/event.hpp"


#ifndef HAEGEUM_INTERFACES__MSG__DETAIL__EVENT__STRUCT_HPP_
#define HAEGEUM_INTERFACES__MSG__DETAIL__EVENT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__haegeum_interfaces__msg__Event __attribute__((deprecated))
#else
# define DEPRECATED__haegeum_interfaces__msg__Event __declspec(deprecated)
#endif

namespace haegeum_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Event_
{
  using Type = Event_<ContainerAllocator>;

  explicit Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->event_type = "";
      this->source = "";
      this->detail = "";
    }
  }

  explicit Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init),
    event_type(_alloc),
    source(_alloc),
    detail(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->event_type = "";
      this->source = "";
      this->detail = "";
    }
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _event_type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _event_type_type event_type;
  using _source_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _source_type source;
  using _detail_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _detail_type detail;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__event_type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->event_type = _arg;
    return *this;
  }
  Type & set__source(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->source = _arg;
    return *this;
  }
  Type & set__detail(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->detail = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    haegeum_interfaces::msg::Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const haegeum_interfaces::msg::Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<haegeum_interfaces::msg::Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<haegeum_interfaces::msg::Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      haegeum_interfaces::msg::Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<haegeum_interfaces::msg::Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      haegeum_interfaces::msg::Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<haegeum_interfaces::msg::Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<haegeum_interfaces::msg::Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<haegeum_interfaces::msg::Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__haegeum_interfaces__msg__Event
    std::shared_ptr<haegeum_interfaces::msg::Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__haegeum_interfaces__msg__Event
    std::shared_ptr<haegeum_interfaces::msg::Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Event_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->event_type != other.event_type) {
      return false;
    }
    if (this->source != other.source) {
      return false;
    }
    if (this->detail != other.detail) {
      return false;
    }
    return true;
  }
  bool operator!=(const Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Event_

// alias to use template instance with default allocator
using Event =
  haegeum_interfaces::msg::Event_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace haegeum_interfaces

#endif  // HAEGEUM_INTERFACES__MSG__DETAIL__EVENT__STRUCT_HPP_
