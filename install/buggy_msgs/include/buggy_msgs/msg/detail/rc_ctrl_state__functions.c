// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from buggy_msgs:msg/RCCtrlState.idl
// generated code does not contain a copyright notice
#include "buggy_msgs/msg/detail/rc_ctrl_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `joyctrl_enabled`
// Member `ro2car_enabled`
// Member `control_disabled`
#include "std_msgs/msg/detail/u_int8__functions.h"
// Member `rc1_value`
// Member `rc2_value`
// Member `rc3_value`
#include "std_msgs/msg/detail/float32__functions.h"

bool
buggy_msgs__msg__RCCtrlState__init(buggy_msgs__msg__RCCtrlState * msg)
{
  if (!msg) {
    return false;
  }
  // joyctrl_enabled
  if (!std_msgs__msg__UInt8__init(&msg->joyctrl_enabled)) {
    buggy_msgs__msg__RCCtrlState__fini(msg);
    return false;
  }
  // ro2car_enabled
  if (!std_msgs__msg__UInt8__init(&msg->ro2car_enabled)) {
    buggy_msgs__msg__RCCtrlState__fini(msg);
    return false;
  }
  // control_disabled
  if (!std_msgs__msg__UInt8__init(&msg->control_disabled)) {
    buggy_msgs__msg__RCCtrlState__fini(msg);
    return false;
  }
  // rc1_value
  if (!std_msgs__msg__Float32__init(&msg->rc1_value)) {
    buggy_msgs__msg__RCCtrlState__fini(msg);
    return false;
  }
  // rc2_value
  if (!std_msgs__msg__Float32__init(&msg->rc2_value)) {
    buggy_msgs__msg__RCCtrlState__fini(msg);
    return false;
  }
  // rc3_value
  if (!std_msgs__msg__Float32__init(&msg->rc3_value)) {
    buggy_msgs__msg__RCCtrlState__fini(msg);
    return false;
  }
  return true;
}

void
buggy_msgs__msg__RCCtrlState__fini(buggy_msgs__msg__RCCtrlState * msg)
{
  if (!msg) {
    return;
  }
  // joyctrl_enabled
  std_msgs__msg__UInt8__fini(&msg->joyctrl_enabled);
  // ro2car_enabled
  std_msgs__msg__UInt8__fini(&msg->ro2car_enabled);
  // control_disabled
  std_msgs__msg__UInt8__fini(&msg->control_disabled);
  // rc1_value
  std_msgs__msg__Float32__fini(&msg->rc1_value);
  // rc2_value
  std_msgs__msg__Float32__fini(&msg->rc2_value);
  // rc3_value
  std_msgs__msg__Float32__fini(&msg->rc3_value);
}

bool
buggy_msgs__msg__RCCtrlState__are_equal(const buggy_msgs__msg__RCCtrlState * lhs, const buggy_msgs__msg__RCCtrlState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // joyctrl_enabled
  if (!std_msgs__msg__UInt8__are_equal(
      &(lhs->joyctrl_enabled), &(rhs->joyctrl_enabled)))
  {
    return false;
  }
  // ro2car_enabled
  if (!std_msgs__msg__UInt8__are_equal(
      &(lhs->ro2car_enabled), &(rhs->ro2car_enabled)))
  {
    return false;
  }
  // control_disabled
  if (!std_msgs__msg__UInt8__are_equal(
      &(lhs->control_disabled), &(rhs->control_disabled)))
  {
    return false;
  }
  // rc1_value
  if (!std_msgs__msg__Float32__are_equal(
      &(lhs->rc1_value), &(rhs->rc1_value)))
  {
    return false;
  }
  // rc2_value
  if (!std_msgs__msg__Float32__are_equal(
      &(lhs->rc2_value), &(rhs->rc2_value)))
  {
    return false;
  }
  // rc3_value
  if (!std_msgs__msg__Float32__are_equal(
      &(lhs->rc3_value), &(rhs->rc3_value)))
  {
    return false;
  }
  return true;
}

bool
buggy_msgs__msg__RCCtrlState__copy(
  const buggy_msgs__msg__RCCtrlState * input,
  buggy_msgs__msg__RCCtrlState * output)
{
  if (!input || !output) {
    return false;
  }
  // joyctrl_enabled
  if (!std_msgs__msg__UInt8__copy(
      &(input->joyctrl_enabled), &(output->joyctrl_enabled)))
  {
    return false;
  }
  // ro2car_enabled
  if (!std_msgs__msg__UInt8__copy(
      &(input->ro2car_enabled), &(output->ro2car_enabled)))
  {
    return false;
  }
  // control_disabled
  if (!std_msgs__msg__UInt8__copy(
      &(input->control_disabled), &(output->control_disabled)))
  {
    return false;
  }
  // rc1_value
  if (!std_msgs__msg__Float32__copy(
      &(input->rc1_value), &(output->rc1_value)))
  {
    return false;
  }
  // rc2_value
  if (!std_msgs__msg__Float32__copy(
      &(input->rc2_value), &(output->rc2_value)))
  {
    return false;
  }
  // rc3_value
  if (!std_msgs__msg__Float32__copy(
      &(input->rc3_value), &(output->rc3_value)))
  {
    return false;
  }
  return true;
}

buggy_msgs__msg__RCCtrlState *
buggy_msgs__msg__RCCtrlState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  buggy_msgs__msg__RCCtrlState * msg = (buggy_msgs__msg__RCCtrlState *)allocator.allocate(sizeof(buggy_msgs__msg__RCCtrlState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(buggy_msgs__msg__RCCtrlState));
  bool success = buggy_msgs__msg__RCCtrlState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
buggy_msgs__msg__RCCtrlState__destroy(buggy_msgs__msg__RCCtrlState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    buggy_msgs__msg__RCCtrlState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
buggy_msgs__msg__RCCtrlState__Sequence__init(buggy_msgs__msg__RCCtrlState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  buggy_msgs__msg__RCCtrlState * data = NULL;

  if (size) {
    data = (buggy_msgs__msg__RCCtrlState *)allocator.zero_allocate(size, sizeof(buggy_msgs__msg__RCCtrlState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = buggy_msgs__msg__RCCtrlState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        buggy_msgs__msg__RCCtrlState__fini(&data[i - 1]);
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
buggy_msgs__msg__RCCtrlState__Sequence__fini(buggy_msgs__msg__RCCtrlState__Sequence * array)
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
      buggy_msgs__msg__RCCtrlState__fini(&array->data[i]);
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

buggy_msgs__msg__RCCtrlState__Sequence *
buggy_msgs__msg__RCCtrlState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  buggy_msgs__msg__RCCtrlState__Sequence * array = (buggy_msgs__msg__RCCtrlState__Sequence *)allocator.allocate(sizeof(buggy_msgs__msg__RCCtrlState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = buggy_msgs__msg__RCCtrlState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
buggy_msgs__msg__RCCtrlState__Sequence__destroy(buggy_msgs__msg__RCCtrlState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    buggy_msgs__msg__RCCtrlState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
buggy_msgs__msg__RCCtrlState__Sequence__are_equal(const buggy_msgs__msg__RCCtrlState__Sequence * lhs, const buggy_msgs__msg__RCCtrlState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!buggy_msgs__msg__RCCtrlState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
buggy_msgs__msg__RCCtrlState__Sequence__copy(
  const buggy_msgs__msg__RCCtrlState__Sequence * input,
  buggy_msgs__msg__RCCtrlState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(buggy_msgs__msg__RCCtrlState);
    buggy_msgs__msg__RCCtrlState * data =
      (buggy_msgs__msg__RCCtrlState *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!buggy_msgs__msg__RCCtrlState__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          buggy_msgs__msg__RCCtrlState__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!buggy_msgs__msg__RCCtrlState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
