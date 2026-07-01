// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from haegeum_interfaces:msg/BattlefieldState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "haegeum_interfaces/msg/battlefield_state.hpp"


#ifndef HAEGEUM_INTERFACES__MSG__DETAIL__BATTLEFIELD_STATE__STRUCT_HPP_
#define HAEGEUM_INTERFACES__MSG__DETAIL__BATTLEFIELD_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'targets'
#include "haegeum_interfaces/msg/detail/target__struct.hpp"
// Member 'robots'
#include "haegeum_interfaces/msg/detail/robot_status__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__haegeum_interfaces__msg__BattlefieldState __attribute__((deprecated))
#else
# define DEPRECATED__haegeum_interfaces__msg__BattlefieldState __declspec(deprecated)
#endif

namespace haegeum_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BattlefieldState_
{
  using Type = BattlefieldState_<ContainerAllocator>;

  explicit BattlefieldState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit BattlefieldState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _targets_type =
    std::vector<haegeum_interfaces::msg::Target_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<haegeum_interfaces::msg::Target_<ContainerAllocator>>>;
  _targets_type targets;
  using _robots_type =
    std::vector<haegeum_interfaces::msg::RobotStatus_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<haegeum_interfaces::msg::RobotStatus_<ContainerAllocator>>>;
  _robots_type robots;

  // setters for named parameter idiom
  Type & set__targets(
    const std::vector<haegeum_interfaces::msg::Target_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<haegeum_interfaces::msg::Target_<ContainerAllocator>>> & _arg)
  {
    this->targets = _arg;
    return *this;
  }
  Type & set__robots(
    const std::vector<haegeum_interfaces::msg::RobotStatus_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<haegeum_interfaces::msg::RobotStatus_<ContainerAllocator>>> & _arg)
  {
    this->robots = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    haegeum_interfaces::msg::BattlefieldState_<ContainerAllocator> *;
  using ConstRawPtr =
    const haegeum_interfaces::msg::BattlefieldState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<haegeum_interfaces::msg::BattlefieldState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<haegeum_interfaces::msg::BattlefieldState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      haegeum_interfaces::msg::BattlefieldState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<haegeum_interfaces::msg::BattlefieldState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      haegeum_interfaces::msg::BattlefieldState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<haegeum_interfaces::msg::BattlefieldState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<haegeum_interfaces::msg::BattlefieldState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<haegeum_interfaces::msg::BattlefieldState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__haegeum_interfaces__msg__BattlefieldState
    std::shared_ptr<haegeum_interfaces::msg::BattlefieldState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__haegeum_interfaces__msg__BattlefieldState
    std::shared_ptr<haegeum_interfaces::msg::BattlefieldState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BattlefieldState_ & other) const
  {
    if (this->targets != other.targets) {
      return false;
    }
    if (this->robots != other.robots) {
      return false;
    }
    return true;
  }
  bool operator!=(const BattlefieldState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BattlefieldState_

// alias to use template instance with default allocator
using BattlefieldState =
  haegeum_interfaces::msg::BattlefieldState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace haegeum_interfaces

#endif  // HAEGEUM_INTERFACES__MSG__DETAIL__BATTLEFIELD_STATE__STRUCT_HPP_
