// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from buggy_msgs:msg/SteeringCMD.idl
// generated code does not contain a copyright notice
#include "buggy_msgs/msg/detail/steering_cmd__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `steering_angle`
// Member `steering_angle_velocity`
// Member `steering_torque`
#include "std_msgs/msg/detail/float64__functions.h"

bool
buggy_msgs__msg__SteeringCMD__init(buggy_msgs__msg__SteeringCMD * msg)
{
  if (!msg) {
    return false;
  }
  // steering_angle
  if (!std_msgs__msg__Float64__init(&msg->steering_angle)) {
    buggy_msgs__msg__SteeringCMD__fini(msg);
    return false;
  }
  // steering_angle_velocity
  if (!std_msgs__msg__Float64__init(&msg->steering_angle_velocity)) {
    buggy_msgs__msg__SteeringCMD__fini(msg);
    return false;
  }
  // steering_torque
  if (!std_msgs__msg__Float64__init(&msg->steering_torque)) {
    buggy_msgs__msg__SteeringCMD__fini(msg);
    return false;
  }
  return true;
}

void
buggy_msgs__msg__SteeringCMD__fini(buggy_msgs__msg__SteeringCMD * msg)
{
  if (!msg) {
    return;
  }
  // steering_angle
  std_msgs__msg__Float64__fini(&msg->steering_angle);
  // steering_angle_velocity
  std_msgs__msg__Float64__fini(&msg->steering_angle_velocity);
  // steering_torque
  std_msgs__msg__Float64__fini(&msg->steering_torque);
}

bool
buggy_msgs__msg__SteeringCMD__are_equal(const buggy_msgs__msg__SteeringCMD * lhs, const buggy_msgs__msg__SteeringCMD * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // steering_angle
  if (!std_msgs__msg__Float64__are_equal(
      &(lhs->steering_angle), &(rhs->steering_angle)))
  {
    return false;
  }
  // steering_angle_velocity
  if (!std_msgs__msg__Float64__are_equal(
      &(lhs->steering_angle_velocity), &(rhs->steering_angle_velocity)))
  {
    return false;
  }
  // steering_torque
  if (!std_msgs__msg__Float64__are_equal(
      &(lhs->steering_torque), &(rhs->steering_torque)))
  {
    return false;
  }
  return true;
}

bool
buggy_msgs__msg__SteeringCMD__copy(
  const buggy_msgs__msg__SteeringCMD * input,
  buggy_msgs__msg__SteeringCMD * output)
{
  if (!input || !output) {
    return false;
  }
  // steering_angle
  if (!std_msgs__msg__Float64__copy(
      &(input->steering_angle), &(output->steering_angle)))
  {
    return false;
  }
  // steering_angle_velocity
  if (!std_msgs__msg__Float64__copy(
      &(input->steering_angle_velocity), &(output->steering_angle_velocity)))
  {
    return false;
  }
  // steering_torque
  if (!std_msgs__msg__Float64__copy(
      &(input->steering_torque), &(output->steering_torque)))
  {
    return false;
  }
  return true;
}

buggy_msgs__msg__SteeringCMD *
buggy_msgs__msg__SteeringCMD__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  buggy_msgs__msg__SteeringCMD * msg = (buggy_msgs__msg__SteeringCMD *)allocator.allocate(sizeof(buggy_msgs__msg__SteeringCMD), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(buggy_msgs__msg__SteeringCMD));
  bool success = buggy_msgs__msg__SteeringCMD__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
buggy_msgs__msg__SteeringCMD__destroy(buggy_msgs__msg__SteeringCMD * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    buggy_msgs__msg__SteeringCMD__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
buggy_msgs__msg__SteeringCMD__Sequence__init(buggy_msgs__msg__SteeringCMD__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  buggy_msgs__msg__SteeringCMD * data = NULL;

  if (size) {
    data = (buggy_msgs__msg__SteeringCMD *)allocator.zero_allocate(size, sizeof(buggy_msgs__msg__SteeringCMD), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = buggy_msgs__msg__SteeringCMD__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        buggy_msgs__msg__SteeringCMD__fini(&data[i - 1]);
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
buggy_msgs__msg__SteeringCMD__Sequence__fini(buggy_msgs__msg__SteeringCMD__Sequence * array)
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
      buggy_msgs__msg__SteeringCMD__fini(&array->data[i]);
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

buggy_msgs__msg__SteeringCMD__Sequence *
buggy_msgs__msg__SteeringCMD__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  buggy_msgs__msg__SteeringCMD__Sequence * array = (buggy_msgs__msg__SteeringCMD__Sequence *)allocator.allocate(sizeof(buggy_msgs__msg__SteeringCMD__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = buggy_msgs__msg__SteeringCMD__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
buggy_msgs__msg__SteeringCMD__Sequence__destroy(buggy_msgs__msg__SteeringCMD__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    buggy_msgs__msg__SteeringCMD__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
buggy_msgs__msg__SteeringCMD__Sequence__are_equal(const buggy_msgs__msg__SteeringCMD__Sequence * lhs, const buggy_msgs__msg__SteeringCMD__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!buggy_msgs__msg__SteeringCMD__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
buggy_msgs__msg__SteeringCMD__Sequence__copy(
  const buggy_msgs__msg__SteeringCMD__Sequence * input,
  buggy_msgs__msg__SteeringCMD__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(buggy_msgs__msg__SteeringCMD);
    buggy_msgs__msg__SteeringCMD * data =
      (buggy_msgs__msg__SteeringCMD *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!buggy_msgs__msg__SteeringCMD__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          buggy_msgs__msg__SteeringCMD__fini(&data[i]);
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
    if (!buggy_msgs__msg__SteeringCMD__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
