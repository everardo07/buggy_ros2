// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from buggy_msgs:msg/SteeringWheelState.idl
// generated code does not contain a copyright notice
#include "buggy_msgs/msg/detail/steering_wheel_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `steering_wheel_angle`
#include "std_msgs/msg/detail/float64__functions.h"

bool
buggy_msgs__msg__SteeringWheelState__init(buggy_msgs__msg__SteeringWheelState * msg)
{
  if (!msg) {
    return false;
  }
  // steering_wheel_angle
  if (!std_msgs__msg__Float64__init(&msg->steering_wheel_angle)) {
    buggy_msgs__msg__SteeringWheelState__fini(msg);
    return false;
  }
  return true;
}

void
buggy_msgs__msg__SteeringWheelState__fini(buggy_msgs__msg__SteeringWheelState * msg)
{
  if (!msg) {
    return;
  }
  // steering_wheel_angle
  std_msgs__msg__Float64__fini(&msg->steering_wheel_angle);
}

bool
buggy_msgs__msg__SteeringWheelState__are_equal(const buggy_msgs__msg__SteeringWheelState * lhs, const buggy_msgs__msg__SteeringWheelState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // steering_wheel_angle
  if (!std_msgs__msg__Float64__are_equal(
      &(lhs->steering_wheel_angle), &(rhs->steering_wheel_angle)))
  {
    return false;
  }
  return true;
}

bool
buggy_msgs__msg__SteeringWheelState__copy(
  const buggy_msgs__msg__SteeringWheelState * input,
  buggy_msgs__msg__SteeringWheelState * output)
{
  if (!input || !output) {
    return false;
  }
  // steering_wheel_angle
  if (!std_msgs__msg__Float64__copy(
      &(input->steering_wheel_angle), &(output->steering_wheel_angle)))
  {
    return false;
  }
  return true;
}

buggy_msgs__msg__SteeringWheelState *
buggy_msgs__msg__SteeringWheelState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  buggy_msgs__msg__SteeringWheelState * msg = (buggy_msgs__msg__SteeringWheelState *)allocator.allocate(sizeof(buggy_msgs__msg__SteeringWheelState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(buggy_msgs__msg__SteeringWheelState));
  bool success = buggy_msgs__msg__SteeringWheelState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
buggy_msgs__msg__SteeringWheelState__destroy(buggy_msgs__msg__SteeringWheelState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    buggy_msgs__msg__SteeringWheelState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
buggy_msgs__msg__SteeringWheelState__Sequence__init(buggy_msgs__msg__SteeringWheelState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  buggy_msgs__msg__SteeringWheelState * data = NULL;

  if (size) {
    data = (buggy_msgs__msg__SteeringWheelState *)allocator.zero_allocate(size, sizeof(buggy_msgs__msg__SteeringWheelState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = buggy_msgs__msg__SteeringWheelState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        buggy_msgs__msg__SteeringWheelState__fini(&data[i - 1]);
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
buggy_msgs__msg__SteeringWheelState__Sequence__fini(buggy_msgs__msg__SteeringWheelState__Sequence * array)
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
      buggy_msgs__msg__SteeringWheelState__fini(&array->data[i]);
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

buggy_msgs__msg__SteeringWheelState__Sequence *
buggy_msgs__msg__SteeringWheelState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  buggy_msgs__msg__SteeringWheelState__Sequence * array = (buggy_msgs__msg__SteeringWheelState__Sequence *)allocator.allocate(sizeof(buggy_msgs__msg__SteeringWheelState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = buggy_msgs__msg__SteeringWheelState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
buggy_msgs__msg__SteeringWheelState__Sequence__destroy(buggy_msgs__msg__SteeringWheelState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    buggy_msgs__msg__SteeringWheelState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
buggy_msgs__msg__SteeringWheelState__Sequence__are_equal(const buggy_msgs__msg__SteeringWheelState__Sequence * lhs, const buggy_msgs__msg__SteeringWheelState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!buggy_msgs__msg__SteeringWheelState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
buggy_msgs__msg__SteeringWheelState__Sequence__copy(
  const buggy_msgs__msg__SteeringWheelState__Sequence * input,
  buggy_msgs__msg__SteeringWheelState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(buggy_msgs__msg__SteeringWheelState);
    buggy_msgs__msg__SteeringWheelState * data =
      (buggy_msgs__msg__SteeringWheelState *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!buggy_msgs__msg__SteeringWheelState__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          buggy_msgs__msg__SteeringWheelState__fini(&data[i]);
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
    if (!buggy_msgs__msg__SteeringWheelState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
