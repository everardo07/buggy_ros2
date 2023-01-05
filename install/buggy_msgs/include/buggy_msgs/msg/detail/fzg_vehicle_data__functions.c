// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from buggy_msgs:msg/FzgVehicleData.idl
// generated code does not contain a copyright notice
#include "buggy_msgs/msg/detail/fzg_vehicle_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `counter`
// Member `longitudinal_acc`
// Member `velocity`
// Member `yawrate`
// Member `set_curvature`
#include "std_msgs/msg/detail/float32__functions.h"

bool
buggy_msgs__msg__FzgVehicleData__init(buggy_msgs__msg__FzgVehicleData * msg)
{
  if (!msg) {
    return false;
  }
  // counter
  if (!std_msgs__msg__Float32__init(&msg->counter)) {
    buggy_msgs__msg__FzgVehicleData__fini(msg);
    return false;
  }
  // longitudinal_acc
  if (!std_msgs__msg__Float32__init(&msg->longitudinal_acc)) {
    buggy_msgs__msg__FzgVehicleData__fini(msg);
    return false;
  }
  // velocity
  if (!std_msgs__msg__Float32__init(&msg->velocity)) {
    buggy_msgs__msg__FzgVehicleData__fini(msg);
    return false;
  }
  // yawrate
  if (!std_msgs__msg__Float32__init(&msg->yawrate)) {
    buggy_msgs__msg__FzgVehicleData__fini(msg);
    return false;
  }
  // set_curvature
  if (!std_msgs__msg__Float32__init(&msg->set_curvature)) {
    buggy_msgs__msg__FzgVehicleData__fini(msg);
    return false;
  }
  return true;
}

void
buggy_msgs__msg__FzgVehicleData__fini(buggy_msgs__msg__FzgVehicleData * msg)
{
  if (!msg) {
    return;
  }
  // counter
  std_msgs__msg__Float32__fini(&msg->counter);
  // longitudinal_acc
  std_msgs__msg__Float32__fini(&msg->longitudinal_acc);
  // velocity
  std_msgs__msg__Float32__fini(&msg->velocity);
  // yawrate
  std_msgs__msg__Float32__fini(&msg->yawrate);
  // set_curvature
  std_msgs__msg__Float32__fini(&msg->set_curvature);
}

bool
buggy_msgs__msg__FzgVehicleData__are_equal(const buggy_msgs__msg__FzgVehicleData * lhs, const buggy_msgs__msg__FzgVehicleData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // counter
  if (!std_msgs__msg__Float32__are_equal(
      &(lhs->counter), &(rhs->counter)))
  {
    return false;
  }
  // longitudinal_acc
  if (!std_msgs__msg__Float32__are_equal(
      &(lhs->longitudinal_acc), &(rhs->longitudinal_acc)))
  {
    return false;
  }
  // velocity
  if (!std_msgs__msg__Float32__are_equal(
      &(lhs->velocity), &(rhs->velocity)))
  {
    return false;
  }
  // yawrate
  if (!std_msgs__msg__Float32__are_equal(
      &(lhs->yawrate), &(rhs->yawrate)))
  {
    return false;
  }
  // set_curvature
  if (!std_msgs__msg__Float32__are_equal(
      &(lhs->set_curvature), &(rhs->set_curvature)))
  {
    return false;
  }
  return true;
}

bool
buggy_msgs__msg__FzgVehicleData__copy(
  const buggy_msgs__msg__FzgVehicleData * input,
  buggy_msgs__msg__FzgVehicleData * output)
{
  if (!input || !output) {
    return false;
  }
  // counter
  if (!std_msgs__msg__Float32__copy(
      &(input->counter), &(output->counter)))
  {
    return false;
  }
  // longitudinal_acc
  if (!std_msgs__msg__Float32__copy(
      &(input->longitudinal_acc), &(output->longitudinal_acc)))
  {
    return false;
  }
  // velocity
  if (!std_msgs__msg__Float32__copy(
      &(input->velocity), &(output->velocity)))
  {
    return false;
  }
  // yawrate
  if (!std_msgs__msg__Float32__copy(
      &(input->yawrate), &(output->yawrate)))
  {
    return false;
  }
  // set_curvature
  if (!std_msgs__msg__Float32__copy(
      &(input->set_curvature), &(output->set_curvature)))
  {
    return false;
  }
  return true;
}

buggy_msgs__msg__FzgVehicleData *
buggy_msgs__msg__FzgVehicleData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  buggy_msgs__msg__FzgVehicleData * msg = (buggy_msgs__msg__FzgVehicleData *)allocator.allocate(sizeof(buggy_msgs__msg__FzgVehicleData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(buggy_msgs__msg__FzgVehicleData));
  bool success = buggy_msgs__msg__FzgVehicleData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
buggy_msgs__msg__FzgVehicleData__destroy(buggy_msgs__msg__FzgVehicleData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    buggy_msgs__msg__FzgVehicleData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
buggy_msgs__msg__FzgVehicleData__Sequence__init(buggy_msgs__msg__FzgVehicleData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  buggy_msgs__msg__FzgVehicleData * data = NULL;

  if (size) {
    data = (buggy_msgs__msg__FzgVehicleData *)allocator.zero_allocate(size, sizeof(buggy_msgs__msg__FzgVehicleData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = buggy_msgs__msg__FzgVehicleData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        buggy_msgs__msg__FzgVehicleData__fini(&data[i - 1]);
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
buggy_msgs__msg__FzgVehicleData__Sequence__fini(buggy_msgs__msg__FzgVehicleData__Sequence * array)
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
      buggy_msgs__msg__FzgVehicleData__fini(&array->data[i]);
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

buggy_msgs__msg__FzgVehicleData__Sequence *
buggy_msgs__msg__FzgVehicleData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  buggy_msgs__msg__FzgVehicleData__Sequence * array = (buggy_msgs__msg__FzgVehicleData__Sequence *)allocator.allocate(sizeof(buggy_msgs__msg__FzgVehicleData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = buggy_msgs__msg__FzgVehicleData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
buggy_msgs__msg__FzgVehicleData__Sequence__destroy(buggy_msgs__msg__FzgVehicleData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    buggy_msgs__msg__FzgVehicleData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
buggy_msgs__msg__FzgVehicleData__Sequence__are_equal(const buggy_msgs__msg__FzgVehicleData__Sequence * lhs, const buggy_msgs__msg__FzgVehicleData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!buggy_msgs__msg__FzgVehicleData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
buggy_msgs__msg__FzgVehicleData__Sequence__copy(
  const buggy_msgs__msg__FzgVehicleData__Sequence * input,
  buggy_msgs__msg__FzgVehicleData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(buggy_msgs__msg__FzgVehicleData);
    buggy_msgs__msg__FzgVehicleData * data =
      (buggy_msgs__msg__FzgVehicleData *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!buggy_msgs__msg__FzgVehicleData__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          buggy_msgs__msg__FzgVehicleData__fini(&data[i]);
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
    if (!buggy_msgs__msg__FzgVehicleData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
