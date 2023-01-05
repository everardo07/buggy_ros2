// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from buggy_msgs:msg/PlatoonState.idl
// generated code does not contain a copyright notice
#include "buggy_msgs/msg/detail/platoon_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `id`
// Member `counter`
#include "std_msgs/msg/detail/u_int16__functions.h"
// Member `platoon_acc_x`
// Member `platoon_mapmatching_isvalid`
// Member `platoon_mapmatching_roadindex`
// Member `platoon_mapmatching_s`
// Member `platoon_velocity`
#include "std_msgs/msg/detail/float32__functions.h"

bool
buggy_msgs__msg__PlatoonState__init(buggy_msgs__msg__PlatoonState * msg)
{
  if (!msg) {
    return false;
  }
  // id
  if (!std_msgs__msg__UInt16__init(&msg->id)) {
    buggy_msgs__msg__PlatoonState__fini(msg);
    return false;
  }
  // counter
  if (!std_msgs__msg__UInt16__init(&msg->counter)) {
    buggy_msgs__msg__PlatoonState__fini(msg);
    return false;
  }
  // platoon_acc_x
  if (!std_msgs__msg__Float32__init(&msg->platoon_acc_x)) {
    buggy_msgs__msg__PlatoonState__fini(msg);
    return false;
  }
  // platoon_mapmatching_isvalid
  if (!std_msgs__msg__Float32__init(&msg->platoon_mapmatching_isvalid)) {
    buggy_msgs__msg__PlatoonState__fini(msg);
    return false;
  }
  // platoon_mapmatching_roadindex
  if (!std_msgs__msg__Float32__init(&msg->platoon_mapmatching_roadindex)) {
    buggy_msgs__msg__PlatoonState__fini(msg);
    return false;
  }
  // platoon_mapmatching_s
  if (!std_msgs__msg__Float32__init(&msg->platoon_mapmatching_s)) {
    buggy_msgs__msg__PlatoonState__fini(msg);
    return false;
  }
  // platoon_velocity
  if (!std_msgs__msg__Float32__init(&msg->platoon_velocity)) {
    buggy_msgs__msg__PlatoonState__fini(msg);
    return false;
  }
  return true;
}

void
buggy_msgs__msg__PlatoonState__fini(buggy_msgs__msg__PlatoonState * msg)
{
  if (!msg) {
    return;
  }
  // id
  std_msgs__msg__UInt16__fini(&msg->id);
  // counter
  std_msgs__msg__UInt16__fini(&msg->counter);
  // platoon_acc_x
  std_msgs__msg__Float32__fini(&msg->platoon_acc_x);
  // platoon_mapmatching_isvalid
  std_msgs__msg__Float32__fini(&msg->platoon_mapmatching_isvalid);
  // platoon_mapmatching_roadindex
  std_msgs__msg__Float32__fini(&msg->platoon_mapmatching_roadindex);
  // platoon_mapmatching_s
  std_msgs__msg__Float32__fini(&msg->platoon_mapmatching_s);
  // platoon_velocity
  std_msgs__msg__Float32__fini(&msg->platoon_velocity);
}

bool
buggy_msgs__msg__PlatoonState__are_equal(const buggy_msgs__msg__PlatoonState * lhs, const buggy_msgs__msg__PlatoonState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (!std_msgs__msg__UInt16__are_equal(
      &(lhs->id), &(rhs->id)))
  {
    return false;
  }
  // counter
  if (!std_msgs__msg__UInt16__are_equal(
      &(lhs->counter), &(rhs->counter)))
  {
    return false;
  }
  // platoon_acc_x
  if (!std_msgs__msg__Float32__are_equal(
      &(lhs->platoon_acc_x), &(rhs->platoon_acc_x)))
  {
    return false;
  }
  // platoon_mapmatching_isvalid
  if (!std_msgs__msg__Float32__are_equal(
      &(lhs->platoon_mapmatching_isvalid), &(rhs->platoon_mapmatching_isvalid)))
  {
    return false;
  }
  // platoon_mapmatching_roadindex
  if (!std_msgs__msg__Float32__are_equal(
      &(lhs->platoon_mapmatching_roadindex), &(rhs->platoon_mapmatching_roadindex)))
  {
    return false;
  }
  // platoon_mapmatching_s
  if (!std_msgs__msg__Float32__are_equal(
      &(lhs->platoon_mapmatching_s), &(rhs->platoon_mapmatching_s)))
  {
    return false;
  }
  // platoon_velocity
  if (!std_msgs__msg__Float32__are_equal(
      &(lhs->platoon_velocity), &(rhs->platoon_velocity)))
  {
    return false;
  }
  return true;
}

bool
buggy_msgs__msg__PlatoonState__copy(
  const buggy_msgs__msg__PlatoonState * input,
  buggy_msgs__msg__PlatoonState * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  if (!std_msgs__msg__UInt16__copy(
      &(input->id), &(output->id)))
  {
    return false;
  }
  // counter
  if (!std_msgs__msg__UInt16__copy(
      &(input->counter), &(output->counter)))
  {
    return false;
  }
  // platoon_acc_x
  if (!std_msgs__msg__Float32__copy(
      &(input->platoon_acc_x), &(output->platoon_acc_x)))
  {
    return false;
  }
  // platoon_mapmatching_isvalid
  if (!std_msgs__msg__Float32__copy(
      &(input->platoon_mapmatching_isvalid), &(output->platoon_mapmatching_isvalid)))
  {
    return false;
  }
  // platoon_mapmatching_roadindex
  if (!std_msgs__msg__Float32__copy(
      &(input->platoon_mapmatching_roadindex), &(output->platoon_mapmatching_roadindex)))
  {
    return false;
  }
  // platoon_mapmatching_s
  if (!std_msgs__msg__Float32__copy(
      &(input->platoon_mapmatching_s), &(output->platoon_mapmatching_s)))
  {
    return false;
  }
  // platoon_velocity
  if (!std_msgs__msg__Float32__copy(
      &(input->platoon_velocity), &(output->platoon_velocity)))
  {
    return false;
  }
  return true;
}

buggy_msgs__msg__PlatoonState *
buggy_msgs__msg__PlatoonState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  buggy_msgs__msg__PlatoonState * msg = (buggy_msgs__msg__PlatoonState *)allocator.allocate(sizeof(buggy_msgs__msg__PlatoonState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(buggy_msgs__msg__PlatoonState));
  bool success = buggy_msgs__msg__PlatoonState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
buggy_msgs__msg__PlatoonState__destroy(buggy_msgs__msg__PlatoonState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    buggy_msgs__msg__PlatoonState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
buggy_msgs__msg__PlatoonState__Sequence__init(buggy_msgs__msg__PlatoonState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  buggy_msgs__msg__PlatoonState * data = NULL;

  if (size) {
    data = (buggy_msgs__msg__PlatoonState *)allocator.zero_allocate(size, sizeof(buggy_msgs__msg__PlatoonState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = buggy_msgs__msg__PlatoonState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        buggy_msgs__msg__PlatoonState__fini(&data[i - 1]);
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
buggy_msgs__msg__PlatoonState__Sequence__fini(buggy_msgs__msg__PlatoonState__Sequence * array)
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
      buggy_msgs__msg__PlatoonState__fini(&array->data[i]);
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

buggy_msgs__msg__PlatoonState__Sequence *
buggy_msgs__msg__PlatoonState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  buggy_msgs__msg__PlatoonState__Sequence * array = (buggy_msgs__msg__PlatoonState__Sequence *)allocator.allocate(sizeof(buggy_msgs__msg__PlatoonState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = buggy_msgs__msg__PlatoonState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
buggy_msgs__msg__PlatoonState__Sequence__destroy(buggy_msgs__msg__PlatoonState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    buggy_msgs__msg__PlatoonState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
buggy_msgs__msg__PlatoonState__Sequence__are_equal(const buggy_msgs__msg__PlatoonState__Sequence * lhs, const buggy_msgs__msg__PlatoonState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!buggy_msgs__msg__PlatoonState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
buggy_msgs__msg__PlatoonState__Sequence__copy(
  const buggy_msgs__msg__PlatoonState__Sequence * input,
  buggy_msgs__msg__PlatoonState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(buggy_msgs__msg__PlatoonState);
    buggy_msgs__msg__PlatoonState * data =
      (buggy_msgs__msg__PlatoonState *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!buggy_msgs__msg__PlatoonState__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          buggy_msgs__msg__PlatoonState__fini(&data[i]);
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
    if (!buggy_msgs__msg__PlatoonState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
