// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from buggy_msgs:msg/VehicleState.idl
// generated code does not contain a copyright notice
#include "buggy_msgs/msg/detail/vehicle_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `wheels`
#include "buggy_msgs/msg/detail/wheels_state__functions.h"
// Member `steering_wheel`
#include "buggy_msgs/msg/detail/steering_wheel_state__functions.h"
// Member `acceleration`
#include "std_msgs/msg/detail/float64__functions.h"

bool
buggy_msgs__msg__VehicleState__init(buggy_msgs__msg__VehicleState * msg)
{
  if (!msg) {
    return false;
  }
  // wheels
  if (!buggy_msgs__msg__WheelsState__init(&msg->wheels)) {
    buggy_msgs__msg__VehicleState__fini(msg);
    return false;
  }
  // steering_wheel
  if (!buggy_msgs__msg__SteeringWheelState__init(&msg->steering_wheel)) {
    buggy_msgs__msg__VehicleState__fini(msg);
    return false;
  }
  // acceleration
  if (!std_msgs__msg__Float64__init(&msg->acceleration)) {
    buggy_msgs__msg__VehicleState__fini(msg);
    return false;
  }
  return true;
}

void
buggy_msgs__msg__VehicleState__fini(buggy_msgs__msg__VehicleState * msg)
{
  if (!msg) {
    return;
  }
  // wheels
  buggy_msgs__msg__WheelsState__fini(&msg->wheels);
  // steering_wheel
  buggy_msgs__msg__SteeringWheelState__fini(&msg->steering_wheel);
  // acceleration
  std_msgs__msg__Float64__fini(&msg->acceleration);
}

bool
buggy_msgs__msg__VehicleState__are_equal(const buggy_msgs__msg__VehicleState * lhs, const buggy_msgs__msg__VehicleState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // wheels
  if (!buggy_msgs__msg__WheelsState__are_equal(
      &(lhs->wheels), &(rhs->wheels)))
  {
    return false;
  }
  // steering_wheel
  if (!buggy_msgs__msg__SteeringWheelState__are_equal(
      &(lhs->steering_wheel), &(rhs->steering_wheel)))
  {
    return false;
  }
  // acceleration
  if (!std_msgs__msg__Float64__are_equal(
      &(lhs->acceleration), &(rhs->acceleration)))
  {
    return false;
  }
  return true;
}

bool
buggy_msgs__msg__VehicleState__copy(
  const buggy_msgs__msg__VehicleState * input,
  buggy_msgs__msg__VehicleState * output)
{
  if (!input || !output) {
    return false;
  }
  // wheels
  if (!buggy_msgs__msg__WheelsState__copy(
      &(input->wheels), &(output->wheels)))
  {
    return false;
  }
  // steering_wheel
  if (!buggy_msgs__msg__SteeringWheelState__copy(
      &(input->steering_wheel), &(output->steering_wheel)))
  {
    return false;
  }
  // acceleration
  if (!std_msgs__msg__Float64__copy(
      &(input->acceleration), &(output->acceleration)))
  {
    return false;
  }
  return true;
}

buggy_msgs__msg__VehicleState *
buggy_msgs__msg__VehicleState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  buggy_msgs__msg__VehicleState * msg = (buggy_msgs__msg__VehicleState *)allocator.allocate(sizeof(buggy_msgs__msg__VehicleState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(buggy_msgs__msg__VehicleState));
  bool success = buggy_msgs__msg__VehicleState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
buggy_msgs__msg__VehicleState__destroy(buggy_msgs__msg__VehicleState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    buggy_msgs__msg__VehicleState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
buggy_msgs__msg__VehicleState__Sequence__init(buggy_msgs__msg__VehicleState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  buggy_msgs__msg__VehicleState * data = NULL;

  if (size) {
    data = (buggy_msgs__msg__VehicleState *)allocator.zero_allocate(size, sizeof(buggy_msgs__msg__VehicleState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = buggy_msgs__msg__VehicleState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        buggy_msgs__msg__VehicleState__fini(&data[i - 1]);
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
buggy_msgs__msg__VehicleState__Sequence__fini(buggy_msgs__msg__VehicleState__Sequence * array)
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
      buggy_msgs__msg__VehicleState__fini(&array->data[i]);
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

buggy_msgs__msg__VehicleState__Sequence *
buggy_msgs__msg__VehicleState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  buggy_msgs__msg__VehicleState__Sequence * array = (buggy_msgs__msg__VehicleState__Sequence *)allocator.allocate(sizeof(buggy_msgs__msg__VehicleState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = buggy_msgs__msg__VehicleState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
buggy_msgs__msg__VehicleState__Sequence__destroy(buggy_msgs__msg__VehicleState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    buggy_msgs__msg__VehicleState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
buggy_msgs__msg__VehicleState__Sequence__are_equal(const buggy_msgs__msg__VehicleState__Sequence * lhs, const buggy_msgs__msg__VehicleState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!buggy_msgs__msg__VehicleState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
buggy_msgs__msg__VehicleState__Sequence__copy(
  const buggy_msgs__msg__VehicleState__Sequence * input,
  buggy_msgs__msg__VehicleState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(buggy_msgs__msg__VehicleState);
    buggy_msgs__msg__VehicleState * data =
      (buggy_msgs__msg__VehicleState *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!buggy_msgs__msg__VehicleState__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          buggy_msgs__msg__VehicleState__fini(&data[i]);
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
    if (!buggy_msgs__msg__VehicleState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
