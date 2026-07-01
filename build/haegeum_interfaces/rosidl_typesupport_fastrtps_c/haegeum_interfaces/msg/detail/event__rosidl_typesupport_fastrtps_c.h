// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from haegeum_interfaces:msg/Event.idl
// generated code does not contain a copyright notice
#ifndef HAEGEUM_INTERFACES__MSG__DETAIL__EVENT__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define HAEGEUM_INTERFACES__MSG__DETAIL__EVENT__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "haegeum_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "haegeum_interfaces/msg/detail/event__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_haegeum_interfaces
bool cdr_serialize_haegeum_interfaces__msg__Event(
  const haegeum_interfaces__msg__Event * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_haegeum_interfaces
bool cdr_deserialize_haegeum_interfaces__msg__Event(
  eprosima::fastcdr::Cdr &,
  haegeum_interfaces__msg__Event * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_haegeum_interfaces
size_t get_serialized_size_haegeum_interfaces__msg__Event(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_haegeum_interfaces
size_t max_serialized_size_haegeum_interfaces__msg__Event(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_haegeum_interfaces
bool cdr_serialize_key_haegeum_interfaces__msg__Event(
  const haegeum_interfaces__msg__Event * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_haegeum_interfaces
size_t get_serialized_size_key_haegeum_interfaces__msg__Event(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_haegeum_interfaces
size_t max_serialized_size_key_haegeum_interfaces__msg__Event(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_haegeum_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, haegeum_interfaces, msg, Event)();

#ifdef __cplusplus
}
#endif

#endif  // HAEGEUM_INTERFACES__MSG__DETAIL__EVENT__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
