// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from haegeum_interfaces:msg/BattlefieldState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "haegeum_interfaces/msg/battlefield_state.hpp"


#ifndef HAEGEUM_INTERFACES__MSG__DETAIL__BATTLEFIELD_STATE__TRAITS_HPP_
#define HAEGEUM_INTERFACES__MSG__DETAIL__BATTLEFIELD_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "haegeum_interfaces/msg/detail/battlefield_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'targets'
#include "haegeum_interfaces/msg/detail/target__traits.hpp"
// Member 'robots'
#include "haegeum_interfaces/msg/detail/robot_status__traits.hpp"

namespace haegeum_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const BattlefieldState & msg,
  std::ostream & out)
{
  out << "{";
  // member: targets
  {
    if (msg.targets.size() == 0) {
      out << "targets: []";
    } else {
      out << "targets: [";
      size_t pending_items = msg.targets.size();
      for (auto item : msg.targets) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: robots
  {
    if (msg.robots.size() == 0) {
      out << "robots: []";
    } else {
      out << "robots: [";
      size_t pending_items = msg.robots.size();
      for (auto item : msg.robots) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BattlefieldState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: targets
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.targets.size() == 0) {
      out << "targets: []\n";
    } else {
      out << "targets:\n";
      for (auto item : msg.targets) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: robots
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.robots.size() == 0) {
      out << "robots: []\n";
    } else {
      out << "robots:\n";
      for (auto item : msg.robots) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BattlefieldState & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace haegeum_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use haegeum_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const haegeum_interfaces::msg::BattlefieldState & msg,
  std::ostream & out, size_t indentation = 0)
{
  haegeum_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use haegeum_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const haegeum_interfaces::msg::BattlefieldState & msg)
{
  return haegeum_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<haegeum_interfaces::msg::BattlefieldState>()
{
  return "haegeum_interfaces::msg::BattlefieldState";
}

template<>
inline const char * name<haegeum_interfaces::msg::BattlefieldState>()
{
  return "haegeum_interfaces/msg/BattlefieldState";
}

template<>
struct has_fixed_size<haegeum_interfaces::msg::BattlefieldState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<haegeum_interfaces::msg::BattlefieldState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<haegeum_interfaces::msg::BattlefieldState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // HAEGEUM_INTERFACES__MSG__DETAIL__BATTLEFIELD_STATE__TRAITS_HPP_
