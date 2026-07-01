// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from haegeum_interfaces:msg/Target.idl
// generated code does not contain a copyright notice
#include "haegeum_interfaces/msg/detail/target__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `target_id`
// Member `target_type`
// Member `detected_by`
#include "rosidl_runtime_c/string_functions.h"
// Member `position`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
haegeum_interfaces__msg__Target__init(haegeum_interfaces__msg__Target * msg)
{
  if (!msg) {
    return false;
  }
  // target_id
  if (!rosidl_runtime_c__String__init(&msg->target_id)) {
    haegeum_interfaces__msg__Target__fini(msg);
    return false;
  }
  // target_type
  if (!rosidl_runtime_c__String__init(&msg->target_type)) {
    haegeum_interfaces__msg__Target__fini(msg);
    return false;
  }
  // position
  if (!geometry_msgs__msg__Point__init(&msg->position)) {
    haegeum_interfaces__msg__Target__fini(msg);
    return false;
  }
  // confidence
  // detected_by
  if (!rosidl_runtime_c__String__init(&msg->detected_by)) {
    haegeum_interfaces__msg__Target__fini(msg);
    return false;
  }
  return true;
}

void
haegeum_interfaces__msg__Target__fini(haegeum_interfaces__msg__Target * msg)
{
  if (!msg) {
    return;
  }
  // target_id
  rosidl_runtime_c__String__fini(&msg->target_id);
  // target_type
  rosidl_runtime_c__String__fini(&msg->target_type);
  // position
  geometry_msgs__msg__Point__fini(&msg->position);
  // confidence
  // detected_by
  rosidl_runtime_c__String__fini(&msg->detected_by);
}

bool
haegeum_interfaces__msg__Target__are_equal(const haegeum_interfaces__msg__Target * lhs, const haegeum_interfaces__msg__Target * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // target_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->target_id), &(rhs->target_id)))
  {
    return false;
  }
  // target_type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->target_type), &(rhs->target_type)))
  {
    return false;
  }
  // position
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->position), &(rhs->position)))
  {
    return false;
  }
  // confidence
  if (lhs->confidence != rhs->confidence) {
    return false;
  }
  // detected_by
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->detected_by), &(rhs->detected_by)))
  {
    return false;
  }
  return true;
}

bool
haegeum_interfaces__msg__Target__copy(
  const haegeum_interfaces__msg__Target * input,
  haegeum_interfaces__msg__Target * output)
{
  if (!input || !output) {
    return false;
  }
  // target_id
  if (!rosidl_runtime_c__String__copy(
      &(input->target_id), &(output->target_id)))
  {
    return false;
  }
  // target_type
  if (!rosidl_runtime_c__String__copy(
      &(input->target_type), &(output->target_type)))
  {
    return false;
  }
  // position
  if (!geometry_msgs__msg__Point__copy(
      &(input->position), &(output->position)))
  {
    return false;
  }
  // confidence
  output->confidence = input->confidence;
  // detected_by
  if (!rosidl_runtime_c__String__copy(
      &(input->detected_by), &(output->detected_by)))
  {
    return false;
  }
  return true;
}

haegeum_interfaces__msg__Target *
haegeum_interfaces__msg__Target__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  haegeum_interfaces__msg__Target * msg = (haegeum_interfaces__msg__Target *)allocator.allocate(sizeof(haegeum_interfaces__msg__Target), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(haegeum_interfaces__msg__Target));
  bool success = haegeum_interfaces__msg__Target__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
haegeum_interfaces__msg__Target__destroy(haegeum_interfaces__msg__Target * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    haegeum_interfaces__msg__Target__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
haegeum_interfaces__msg__Target__Sequence__init(haegeum_interfaces__msg__Target__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  haegeum_interfaces__msg__Target * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(haegeum_interfaces__msg__Target)) {
      return false;
    }
    data = (haegeum_interfaces__msg__Target *)allocator.zero_allocate(size, sizeof(haegeum_interfaces__msg__Target), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = haegeum_interfaces__msg__Target__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        haegeum_interfaces__msg__Target__fini(&data[i - 1]);
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
haegeum_interfaces__msg__Target__Sequence__fini(haegeum_interfaces__msg__Target__Sequence * array)
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
      haegeum_interfaces__msg__Target__fini(&array->data[i]);
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

haegeum_interfaces__msg__Target__Sequence *
haegeum_interfaces__msg__Target__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  haegeum_interfaces__msg__Target__Sequence * array = (haegeum_interfaces__msg__Target__Sequence *)allocator.allocate(sizeof(haegeum_interfaces__msg__Target__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = haegeum_interfaces__msg__Target__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
haegeum_interfaces__msg__Target__Sequence__destroy(haegeum_interfaces__msg__Target__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    haegeum_interfaces__msg__Target__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
haegeum_interfaces__msg__Target__Sequence__are_equal(const haegeum_interfaces__msg__Target__Sequence * lhs, const haegeum_interfaces__msg__Target__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!haegeum_interfaces__msg__Target__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
haegeum_interfaces__msg__Target__Sequence__copy(
  const haegeum_interfaces__msg__Target__Sequence * input,
  haegeum_interfaces__msg__Target__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(haegeum_interfaces__msg__Target)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(haegeum_interfaces__msg__Target);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    haegeum_interfaces__msg__Target * data =
      (haegeum_interfaces__msg__Target *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!haegeum_interfaces__msg__Target__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          haegeum_interfaces__msg__Target__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!haegeum_interfaces__msg__Target__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
