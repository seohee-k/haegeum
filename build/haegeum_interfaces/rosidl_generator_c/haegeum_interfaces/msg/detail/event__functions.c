// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from haegeum_interfaces:msg/Event.idl
// generated code does not contain a copyright notice
#include "haegeum_interfaces/msg/detail/event__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `event_type`
// Member `source`
// Member `detail`
#include "rosidl_runtime_c/string_functions.h"

bool
haegeum_interfaces__msg__Event__init(haegeum_interfaces__msg__Event * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    haegeum_interfaces__msg__Event__fini(msg);
    return false;
  }
  // event_type
  if (!rosidl_runtime_c__String__init(&msg->event_type)) {
    haegeum_interfaces__msg__Event__fini(msg);
    return false;
  }
  // source
  if (!rosidl_runtime_c__String__init(&msg->source)) {
    haegeum_interfaces__msg__Event__fini(msg);
    return false;
  }
  // detail
  if (!rosidl_runtime_c__String__init(&msg->detail)) {
    haegeum_interfaces__msg__Event__fini(msg);
    return false;
  }
  return true;
}

void
haegeum_interfaces__msg__Event__fini(haegeum_interfaces__msg__Event * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // event_type
  rosidl_runtime_c__String__fini(&msg->event_type);
  // source
  rosidl_runtime_c__String__fini(&msg->source);
  // detail
  rosidl_runtime_c__String__fini(&msg->detail);
}

bool
haegeum_interfaces__msg__Event__are_equal(const haegeum_interfaces__msg__Event * lhs, const haegeum_interfaces__msg__Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  // event_type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->event_type), &(rhs->event_type)))
  {
    return false;
  }
  // source
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->source), &(rhs->source)))
  {
    return false;
  }
  // detail
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->detail), &(rhs->detail)))
  {
    return false;
  }
  return true;
}

bool
haegeum_interfaces__msg__Event__copy(
  const haegeum_interfaces__msg__Event * input,
  haegeum_interfaces__msg__Event * output)
{
  if (!input || !output) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  // event_type
  if (!rosidl_runtime_c__String__copy(
      &(input->event_type), &(output->event_type)))
  {
    return false;
  }
  // source
  if (!rosidl_runtime_c__String__copy(
      &(input->source), &(output->source)))
  {
    return false;
  }
  // detail
  if (!rosidl_runtime_c__String__copy(
      &(input->detail), &(output->detail)))
  {
    return false;
  }
  return true;
}

haegeum_interfaces__msg__Event *
haegeum_interfaces__msg__Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  haegeum_interfaces__msg__Event * msg = (haegeum_interfaces__msg__Event *)allocator.allocate(sizeof(haegeum_interfaces__msg__Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(haegeum_interfaces__msg__Event));
  bool success = haegeum_interfaces__msg__Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
haegeum_interfaces__msg__Event__destroy(haegeum_interfaces__msg__Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    haegeum_interfaces__msg__Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
haegeum_interfaces__msg__Event__Sequence__init(haegeum_interfaces__msg__Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  haegeum_interfaces__msg__Event * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(haegeum_interfaces__msg__Event)) {
      return false;
    }
    data = (haegeum_interfaces__msg__Event *)allocator.zero_allocate(size, sizeof(haegeum_interfaces__msg__Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = haegeum_interfaces__msg__Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        haegeum_interfaces__msg__Event__fini(&data[i - 1]);
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
haegeum_interfaces__msg__Event__Sequence__fini(haegeum_interfaces__msg__Event__Sequence * array)
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
      haegeum_interfaces__msg__Event__fini(&array->data[i]);
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

haegeum_interfaces__msg__Event__Sequence *
haegeum_interfaces__msg__Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  haegeum_interfaces__msg__Event__Sequence * array = (haegeum_interfaces__msg__Event__Sequence *)allocator.allocate(sizeof(haegeum_interfaces__msg__Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = haegeum_interfaces__msg__Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
haegeum_interfaces__msg__Event__Sequence__destroy(haegeum_interfaces__msg__Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    haegeum_interfaces__msg__Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
haegeum_interfaces__msg__Event__Sequence__are_equal(const haegeum_interfaces__msg__Event__Sequence * lhs, const haegeum_interfaces__msg__Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!haegeum_interfaces__msg__Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
haegeum_interfaces__msg__Event__Sequence__copy(
  const haegeum_interfaces__msg__Event__Sequence * input,
  haegeum_interfaces__msg__Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(haegeum_interfaces__msg__Event)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(haegeum_interfaces__msg__Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    haegeum_interfaces__msg__Event * data =
      (haegeum_interfaces__msg__Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!haegeum_interfaces__msg__Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          haegeum_interfaces__msg__Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!haegeum_interfaces__msg__Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
