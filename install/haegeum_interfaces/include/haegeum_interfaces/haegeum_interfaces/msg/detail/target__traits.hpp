// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from haegeum_interfaces:msg/Target.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "haegeum_interfaces/msg/target.hpp"


#ifndef HAEGEUM_INTERFACES__MSG__DETAIL__TARGET__TRAITS_HPP_
#define HAEGEUM_INTERFACES__MSG__DETAIL__TARGET__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "haegeum_interfaces/msg/detail/target__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'position'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace haegeum_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Target & msg,
  std::ostream & out)
{
  out << "{";
  // member: target_id
  {
    out << "target_id: ";
    rosidl_generator_traits::value_to_yaml(msg.target_id, out);
    out << ", ";
  }

  // member: target_type
  {
    out << "target_type: ";
    rosidl_generator_traits::value_to_yaml(msg.target_type, out);
    out << ", ";
  }

  // member: position
  {
    out << "position: ";
    to_flow_style_yaml(msg.position, out);
    out << ", ";
  }

  // member: confidence
  {
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
    out << ", ";
  }

  // member: detected_by
  {
    out << "detected_by: ";
    rosidl_generator_traits::value_to_yaml(msg.detected_by, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Target & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: target_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_id: ";
    rosidl_generator_traits::value_to_yaml(msg.target_id, out);
    out << "\n";
  }

  // member: target_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_type: ";
    rosidl_generator_traits::value_to_yaml(msg.target_type, out);
    out << "\n";
  }

  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position:\n";
    to_block_style_yaml(msg.position, out, indentation + 2);
  }

  // member: confidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
    out << "\n";
  }

  // member: detected_by
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "detected_by: ";
    rosidl_generator_traits::value_to_yaml(msg.detected_by, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Target & msg, bool use_flow_style = false)
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
  const haegeum_interfaces::msg::Target & msg,
  std::ostream & out, size_t indentation = 0)
{
  haegeum_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use haegeum_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const haegeum_interfaces::msg::Target & msg)
{
  return haegeum_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<haegeum_interfaces::msg::Target>()
{
  return "haegeum_interfaces::msg::Target";
}

template<>
inline const char * name<haegeum_interfaces::msg::Target>()
{
  return "haegeum_interfaces/msg/Target";
}

template<>
struct has_fixed_size<haegeum_interfaces::msg::Target>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<haegeum_interfaces::msg::Target>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<haegeum_interfaces::msg::Target>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // HAEGEUM_INTERFACES__MSG__DETAIL__TARGET__TRAITS_HPP_
