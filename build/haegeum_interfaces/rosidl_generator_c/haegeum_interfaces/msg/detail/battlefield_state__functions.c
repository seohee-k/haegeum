// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from haegeum_interfaces:msg/BattlefieldState.idl
// generated code does not contain a copyright notice
#include "haegeum_interfaces/msg/detail/battlefield_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `targets`
#include "haegeum_interfaces/msg/detail/target__functions.h"
// Member `robots`
#include "haegeum_interfaces/msg/detail/robot_status__functions.h"

bool
haegeum_interfaces__msg__BattlefieldState__init(haegeum_interfaces__msg__BattlefieldState * msg)
{
  if (!msg) {
    return false;
  }
  // targets
  if (!haegeum_interfaces__msg__Target__Sequence__init(&msg->targets, 0)) {
    haegeum_interfaces__msg__BattlefieldState__fini(msg);
    return false;
  }
  // robots
  if (!haegeum_interfaces__msg__RobotStatus__Sequence__init(&msg->robots, 0)) {
    haegeum_interfaces__msg__BattlefieldState__fini(msg);
    return false;
  }
  return true;
}

void
haegeum_interfaces__msg__BattlefieldState__fini(haegeum_interfaces__msg__BattlefieldState * msg)
{
  if (!msg) {
    return;
  }
  // targets
  haegeum_interfaces__msg__Target__Sequence__fini(&msg->targets);
  // robots
  haegeum_interfaces__msg__RobotStatus__Sequence__fini(&msg->robots);
}

bool
haegeum_interfaces__msg__BattlefieldState__are_equal(const haegeum_interfaces__msg__BattlefieldState * lhs, const haegeum_interfaces__msg__BattlefieldState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // targets
  if (!haegeum_interfaces__msg__Target__Sequence__are_equal(
      &(lhs->targets), &(rhs->targets)))
  {
    return false;
  }
  // robots
  if (!haegeum_interfaces__msg__RobotStatus__Sequence__are_equal(
      &(lhs->robots), &(rhs->robots)))
  {
    return false;
  }
  return true;
}

bool
haegeum_interfaces__msg__BattlefieldState__copy(
  const haegeum_interfaces__msg__BattlefieldState * input,
  haegeum_interfaces__msg__BattlefieldState * output)
{
  if (!input || !output) {
    return false;
  }
  // targets
  if (!haegeum_interfaces__msg__Target__Sequence__copy(
      &(input->targets), &(output->targets)))
  {
    return false;
  }
  // robots
  if (!haegeum_interfaces__msg__RobotStatus__Sequence__copy(
      &(input->robots), &(output->robots)))
  {
    return false;
  }
  return true;
}

haegeum_interfaces__msg__BattlefieldState *
haegeum_interfaces__msg__BattlefieldState__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  haegeum_interfaces__msg__BattlefieldState * msg = (haegeum_interfaces__msg__BattlefieldState *)allocator.allocate(sizeof(haegeum_interfaces__msg__BattlefieldState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(haegeum_interfaces__msg__BattlefieldState));
  bool success = haegeum_interfaces__msg__BattlefieldState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
haegeum_interfaces__msg__BattlefieldState__destroy(haegeum_interfaces__msg__BattlefieldState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    haegeum_interfaces__msg__BattlefieldState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
haegeum_interfaces__msg__BattlefieldState__Sequence__init(haegeum_interfaces__msg__BattlefieldState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  haegeum_interfaces__msg__BattlefieldState * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(haegeum_interfaces__msg__BattlefieldState)) {
      return false;
    }
    data = (haegeum_interfaces__msg__BattlefieldState *)allocator.zero_allocate(size, sizeof(haegeum_interfaces__msg__BattlefieldState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = haegeum_interfaces__msg__BattlefieldState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        haegeum_interfaces__msg__BattlefieldState__fini(&data[i - 1]);
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
haegeum_interfaces__msg__BattlefieldState__Sequence__fini(haegeum_interfaces__msg__BattlefieldState__Sequence * array)
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
      haegeum_interfaces__msg__BattlefieldState__fini(&array->data[i]);
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

haegeum_interfaces__msg__BattlefieldState__Sequence *
haegeum_interfaces__msg__BattlefieldState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  haegeum_interfaces__msg__BattlefieldState__Sequence * array = (haegeum_interfaces__msg__BattlefieldState__Sequence *)allocator.allocate(sizeof(haegeum_interfaces__msg__BattlefieldState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = haegeum_interfaces__msg__BattlefieldState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
haegeum_interfaces__msg__BattlefieldState__Sequence__destroy(haegeum_interfaces__msg__BattlefieldState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    haegeum_interfaces__msg__BattlefieldState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
haegeum_interfaces__msg__BattlefieldState__Sequence__are_equal(const haegeum_interfaces__msg__BattlefieldState__Sequence * lhs, const haegeum_interfaces__msg__BattlefieldState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!haegeum_interfaces__msg__BattlefieldState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
haegeum_interfaces__msg__BattlefieldState__Sequence__copy(
  const haegeum_interfaces__msg__BattlefieldState__Sequence * input,
  haegeum_interfaces__msg__BattlefieldState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(haegeum_interfaces__msg__BattlefieldState)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(haegeum_interfaces__msg__BattlefieldState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    haegeum_interfaces__msg__BattlefieldState * data =
      (haegeum_interfaces__msg__BattlefieldState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!haegeum_interfaces__msg__BattlefieldState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          haegeum_interfaces__msg__BattlefieldState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!haegeum_interfaces__msg__BattlefieldState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
