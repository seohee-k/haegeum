// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from haegeum_interfaces:msg/BattlefieldState.idl
// generated code does not contain a copyright notice
#include "haegeum_interfaces/msg/detail/battlefield_state__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "haegeum_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "haegeum_interfaces/msg/detail/battlefield_state__struct.h"
#include "haegeum_interfaces/msg/detail/battlefield_state__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "haegeum_interfaces/msg/detail/robot_status__functions.h"  // robots
#include "haegeum_interfaces/msg/detail/target__functions.h"  // targets

// forward declare type support functions

bool cdr_serialize_haegeum_interfaces__msg__RobotStatus(
  const haegeum_interfaces__msg__RobotStatus * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_haegeum_interfaces__msg__RobotStatus(
  eprosima::fastcdr::Cdr & cdr,
  haegeum_interfaces__msg__RobotStatus * ros_message);

size_t get_serialized_size_haegeum_interfaces__msg__RobotStatus(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_haegeum_interfaces__msg__RobotStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_haegeum_interfaces__msg__RobotStatus(
  const haegeum_interfaces__msg__RobotStatus * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_haegeum_interfaces__msg__RobotStatus(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_haegeum_interfaces__msg__RobotStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, haegeum_interfaces, msg, RobotStatus)();

bool cdr_serialize_haegeum_interfaces__msg__Target(
  const haegeum_interfaces__msg__Target * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_haegeum_interfaces__msg__Target(
  eprosima::fastcdr::Cdr & cdr,
  haegeum_interfaces__msg__Target * ros_message);

size_t get_serialized_size_haegeum_interfaces__msg__Target(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_haegeum_interfaces__msg__Target(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_haegeum_interfaces__msg__Target(
  const haegeum_interfaces__msg__Target * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_haegeum_interfaces__msg__Target(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_haegeum_interfaces__msg__Target(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, haegeum_interfaces, msg, Target)();


using _BattlefieldState__ros_msg_type = haegeum_interfaces__msg__BattlefieldState;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_haegeum_interfaces
bool cdr_serialize_haegeum_interfaces__msg__BattlefieldState(
  const haegeum_interfaces__msg__BattlefieldState * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: targets
  {
    size_t size = ros_message->targets.size;
    auto array_ptr = ros_message->targets.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_haegeum_interfaces__msg__Target(
        &array_ptr[i], cdr);
    }
  }

  // Field name: robots
  {
    size_t size = ros_message->robots.size;
    auto array_ptr = ros_message->robots.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_haegeum_interfaces__msg__RobotStatus(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_haegeum_interfaces
bool cdr_deserialize_haegeum_interfaces__msg__BattlefieldState(
  eprosima::fastcdr::Cdr & cdr,
  haegeum_interfaces__msg__BattlefieldState * ros_message)
{
  // Field name: targets
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->targets.data) {
      haegeum_interfaces__msg__Target__Sequence__fini(&ros_message->targets);
    }
    if (!haegeum_interfaces__msg__Target__Sequence__init(&ros_message->targets, size)) {
      fprintf(stderr, "failed to create array for field 'targets'");
      return false;
    }
    auto array_ptr = ros_message->targets.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_haegeum_interfaces__msg__Target(cdr, &array_ptr[i]);
    }
  }

  // Field name: robots
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->robots.data) {
      haegeum_interfaces__msg__RobotStatus__Sequence__fini(&ros_message->robots);
    }
    if (!haegeum_interfaces__msg__RobotStatus__Sequence__init(&ros_message->robots, size)) {
      fprintf(stderr, "failed to create array for field 'robots'");
      return false;
    }
    auto array_ptr = ros_message->robots.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_haegeum_interfaces__msg__RobotStatus(cdr, &array_ptr[i]);
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_haegeum_interfaces
size_t get_serialized_size_haegeum_interfaces__msg__BattlefieldState(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _BattlefieldState__ros_msg_type * ros_message = static_cast<const _BattlefieldState__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: targets
  {
    size_t array_size = ros_message->targets.size;
    auto array_ptr = ros_message->targets.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_haegeum_interfaces__msg__Target(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: robots
  {
    size_t array_size = ros_message->robots.size;
    auto array_ptr = ros_message->robots.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_haegeum_interfaces__msg__RobotStatus(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_haegeum_interfaces
size_t max_serialized_size_haegeum_interfaces__msg__BattlefieldState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: targets
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_haegeum_interfaces__msg__Target(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: robots
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_haegeum_interfaces__msg__RobotStatus(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = haegeum_interfaces__msg__BattlefieldState;
    is_plain =
      (
      offsetof(DataType, robots) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_haegeum_interfaces
bool cdr_serialize_key_haegeum_interfaces__msg__BattlefieldState(
  const haegeum_interfaces__msg__BattlefieldState * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: targets
  {
    size_t size = ros_message->targets.size;
    auto array_ptr = ros_message->targets.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_haegeum_interfaces__msg__Target(
        &array_ptr[i], cdr);
    }
  }

  // Field name: robots
  {
    size_t size = ros_message->robots.size;
    auto array_ptr = ros_message->robots.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_haegeum_interfaces__msg__RobotStatus(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_haegeum_interfaces
size_t get_serialized_size_key_haegeum_interfaces__msg__BattlefieldState(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _BattlefieldState__ros_msg_type * ros_message = static_cast<const _BattlefieldState__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: targets
  {
    size_t array_size = ros_message->targets.size;
    auto array_ptr = ros_message->targets.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_haegeum_interfaces__msg__Target(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: robots
  {
    size_t array_size = ros_message->robots.size;
    auto array_ptr = ros_message->robots.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_haegeum_interfaces__msg__RobotStatus(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_haegeum_interfaces
size_t max_serialized_size_key_haegeum_interfaces__msg__BattlefieldState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: targets
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_haegeum_interfaces__msg__Target(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: robots
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_haegeum_interfaces__msg__RobotStatus(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = haegeum_interfaces__msg__BattlefieldState;
    is_plain =
      (
      offsetof(DataType, robots) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _BattlefieldState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const haegeum_interfaces__msg__BattlefieldState * ros_message = static_cast<const haegeum_interfaces__msg__BattlefieldState *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_haegeum_interfaces__msg__BattlefieldState(ros_message, cdr);
}

static bool _BattlefieldState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  haegeum_interfaces__msg__BattlefieldState * ros_message = static_cast<haegeum_interfaces__msg__BattlefieldState *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_haegeum_interfaces__msg__BattlefieldState(cdr, ros_message);
}

static uint32_t _BattlefieldState__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_haegeum_interfaces__msg__BattlefieldState(
      untyped_ros_message, 0));
}

static size_t _BattlefieldState__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_haegeum_interfaces__msg__BattlefieldState(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_BattlefieldState = {
  "haegeum_interfaces::msg",
  "BattlefieldState",
  _BattlefieldState__cdr_serialize,
  _BattlefieldState__cdr_deserialize,
  _BattlefieldState__get_serialized_size,
  _BattlefieldState__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _BattlefieldState__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_BattlefieldState,
  get_message_typesupport_handle_function,
  &haegeum_interfaces__msg__BattlefieldState__get_type_hash,
  &haegeum_interfaces__msg__BattlefieldState__get_type_description,
  &haegeum_interfaces__msg__BattlefieldState__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, haegeum_interfaces, msg, BattlefieldState)() {
  return &_BattlefieldState__type_support;
}

#if defined(__cplusplus)
}
#endif
