// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from haegeum_interfaces:msg/Assignment.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "haegeum_interfaces/msg/assignment.hpp"


#ifndef HAEGEUM_INTERFACES__MSG__DETAIL__ASSIGNMENT__STRUCT_HPP_
#define HAEGEUM_INTERFACES__MSG__DETAIL__ASSIGNMENT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'target_position'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__haegeum_interfaces__msg__Assignment __attribute__((deprecated))
#else
# define DEPRECATED__haegeum_interfaces__msg__Assignment __declspec(deprecated)
#endif

namespace haegeum_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Assignment_
{
  using Type = Assignment_<ContainerAllocator>;

  explicit Assignment_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : target_position(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->target_id = "";
      this->assigned_robot = "";
      this->mission_type = "";
    }
  }

  explicit Assignment_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : target_id(_alloc),
    assigned_robot(_alloc),
    mission_type(_alloc),
    target_position(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->target_id = "";
      this->assigned_robot = "";
      this->mission_type = "";
    }
  }

  // field types and members
  using _target_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _target_id_type target_id;
  using _assigned_robot_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _assigned_robot_type assigned_robot;
  using _mission_type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _mission_type_type mission_type;
  using _target_position_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _target_position_type target_position;

  // setters for named parameter idiom
  Type & set__target_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->target_id = _arg;
    return *this;
  }
  Type & set__assigned_robot(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->assigned_robot = _arg;
    return *this;
  }
  Type & set__mission_type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->mission_type = _arg;
    return *this;
  }
  Type & set__target_position(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->target_position = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    haegeum_interfaces::msg::Assignment_<ContainerAllocator> *;
  using ConstRawPtr =
    const haegeum_interfaces::msg::Assignment_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<haegeum_interfaces::msg::Assignment_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<haegeum_interfaces::msg::Assignment_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      haegeum_interfaces::msg::Assignment_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<haegeum_interfaces::msg::Assignment_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      haegeum_interfaces::msg::Assignment_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<haegeum_interfaces::msg::Assignment_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<haegeum_interfaces::msg::Assignment_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<haegeum_interfaces::msg::Assignment_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__haegeum_interfaces__msg__Assignment
    std::shared_ptr<haegeum_interfaces::msg::Assignment_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__haegeum_interfaces__msg__Assignment
    std::shared_ptr<haegeum_interfaces::msg::Assignment_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Assignment_ & other) const
  {
    if (this->target_id != other.target_id) {
      return false;
    }
    if (this->assigned_robot != other.assigned_robot) {
      return false;
    }
    if (this->mission_type != other.mission_type) {
      return false;
    }
    if (this->target_position != other.target_position) {
      return false;
    }
    return true;
  }
  bool operator!=(const Assignment_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Assignment_

// alias to use template instance with default allocator
using Assignment =
  haegeum_interfaces::msg::Assignment_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace haegeum_interfaces

#endif  // HAEGEUM_INTERFACES__MSG__DETAIL__ASSIGNMENT__STRUCT_HPP_
