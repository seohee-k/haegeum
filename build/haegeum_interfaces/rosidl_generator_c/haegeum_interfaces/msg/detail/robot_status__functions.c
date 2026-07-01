// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from haegeum_interfaces:msg/RobotStatus.idl
// generated code does not contain a copyright notice
#include "haegeum_interfaces/msg/detail/robot_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `robot_id`
// Member `robot_type`
// Member `state`
// Member `current_task`
#include "rosidl_runtime_c/string_functions.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
haegeum_interfaces__msg__RobotStatus__init(haegeum_interfaces__msg__RobotStatus * msg)
{
  if (!msg) {
    return false;
  }
  // robot_id
  if (!rosidl_runtime_c__String__init(&msg->robot_id)) {
    haegeum_interfaces__msg__RobotStatus__fini(msg);
    return false;
  }
  // robot_type
  if (!rosidl_runtime_c__String__init(&msg->robot_type)) {
    haegeum_interfaces__msg__RobotStatus__fini(msg);
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    haegeum_interfaces__msg__RobotStatus__fini(msg);
    return false;
  }
  // battery
  // busy
  // state
  if (!rosidl_runtime_c__String__init(&msg->state)) {
    haegeum_interfaces__msg__RobotStatus__fini(msg);
    return false;
  }
  // current_task
  if (!rosidl_runtime_c__String__init(&msg->current_task)) {
    haegeum_interfaces__msg__RobotStatus__fini(msg);
    return false;
  }
  return true;
}

void
haegeum_interfaces__msg__RobotStatus__fini(haegeum_interfaces__msg__RobotStatus * msg)
{
  if (!msg) {
    return;
  }
  // robot_id
  rosidl_runtime_c__String__fini(&msg->robot_id);
  // robot_type
  rosidl_runtime_c__String__fini(&msg->robot_type);
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
  // battery
  // busy
  // state
  rosidl_runtime_c__String__fini(&msg->state);
  // current_task
  rosidl_runtime_c__String__fini(&msg->current_task);
}

bool
haegeum_interfaces__msg__RobotStatus__are_equal(const haegeum_interfaces__msg__RobotStatus * lhs, const haegeum_interfaces__msg__RobotStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // robot_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->robot_id), &(rhs->robot_id)))
  {
    return false;
  }
  // robot_type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->robot_type), &(rhs->robot_type)))
  {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  // battery
  if (lhs->battery != rhs->battery) {
    return false;
  }
  // busy
  if (lhs->busy != rhs->busy) {
    return false;
  }
  // state
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->state), &(rhs->state)))
  {
    return false;
  }
  // current_task
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->current_task), &(rhs->current_task)))
  {
    return false;
  }
  return true;
}

bool
haegeum_interfaces__msg__RobotStatus__copy(
  const haegeum_interfaces__msg__RobotStatus * input,
  haegeum_interfaces__msg__RobotStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // robot_id
  if (!rosidl_runtime_c__String__copy(
      &(input->robot_id), &(output->robot_id)))
  {
    return false;
  }
  // robot_type
  if (!rosidl_runtime_c__String__copy(
      &(input->robot_type), &(output->robot_type)))
  {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  // battery
  output->battery = input->battery;
  // busy
  output->busy = input->busy;
  // state
  if (!rosidl_runtime_c__String__copy(
      &(input->state), &(output->state)))
  {
    return false;
  }
  // current_task
  if (!rosidl_runtime_c__String__copy(
      &(input->current_task), &(output->current_task)))
  {
    return false;
  }
  return true;
}

haegeum_interfaces__msg__RobotStatus *
haegeum_interfaces__msg__RobotStatus__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  haegeum_interfaces__msg__RobotStatus * msg = (haegeum_interfaces__msg__RobotStatus *)allocator.allocate(sizeof(haegeum_interfaces__msg__RobotStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(haegeum_interfaces__msg__RobotStatus));
  bool success = haegeum_interfaces__msg__RobotStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
haegeum_interfaces__msg__RobotStatus__destroy(haegeum_interfaces__msg__RobotStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    haegeum_interfaces__msg__RobotStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
haegeum_interfaces__msg__RobotStatus__Sequence__init(haegeum_interfaces__msg__RobotStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  haegeum_interfaces__msg__RobotStatus * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(haegeum_interfaces__msg__RobotStatus)) {
      return false;
    }
    data = (haegeum_interfaces__msg__RobotStatus *)allocator.zero_allocate(size, sizeof(haegeum_interfaces__msg__RobotStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = haegeum_interfaces__msg__RobotStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        haegeum_interfaces__msg__RobotStatus__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
haegeum_interfaces__msg__RobotStatus__Sequence__fini(haegeum_interfaces__msg__RobotStatus__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      haegeum_interfaces__msg__RobotStatus__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

haegeum_interfaces__msg__RobotStatus__Sequence *
haegeum_interfaces__msg__RobotStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  haegeum_interfaces__msg__RobotStatus__Sequence * array = (haegeum_interfaces__msg__RobotStatus__Sequence *)allocator.allocate(sizeof(haegeum_interfaces__msg__RobotStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = haegeum_interfaces__msg__RobotStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
haegeum_interfaces__msg__RobotStatus__Sequence__destroy(haegeum_interfaces__msg__RobotStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    haegeum_interfaces__msg__RobotStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
haegeum_interfaces__msg__RobotStatus__Sequence__are_equal(const haegeum_interfaces__msg__RobotStatus__Sequence * lhs, const haegeum_interfaces__msg__RobotStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!haegeum_interfaces__msg__RobotStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
haegeum_interfaces__msg__RobotStatus__Sequence__copy(
  const haegeum_interfaces__msg__RobotStatus__Sequence * input,
  haegeum_interfaces__msg__RobotStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(haegeum_interfaces__msg__RobotStatus)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(haegeum_interfaces__msg__RobotStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    haegeum_interfaces__msg__RobotStatus * data =
      (haegeum_interfaces__msg__RobotStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!haegeum_interfaces__msg__RobotStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          haegeum_interfaces__msg__RobotStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!haegeum_interfaces__msg__RobotStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
