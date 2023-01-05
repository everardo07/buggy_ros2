// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from buggy_msgs:msg/CurrentCMDStamped.idl
// generated code does not contain a copyright notice
#include "buggy_msgs/msg/detail/current_cmd_stamped__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `current`
#include "buggy_msgs/msg/detail/current_cmd__functions.h"

bool
buggy_msgs__msg__CurrentCMDStamped__init(buggy_msgs__msg__CurrentCMDStamped * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    buggy_msgs__msg__CurrentCMDStamped__fini(msg);
    return false;
  }
  // current
  if (!buggy_msgs__msg__CurrentCMD__init(&msg->current)) {
    buggy_msgs__msg__CurrentCMDStamped__fini(msg);
    return false;
  }
  return true;
}

void
buggy_msgs__msg__CurrentCMDStamped__fini(buggy_msgs__msg__CurrentCMDStamped * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // current
  buggy_msgs__msg__CurrentCMD__fini(&msg->current);
}

bool
buggy_msgs__msg__CurrentCMDStamped__are_equal(const buggy_msgs__msg__CurrentCMDStamped * lhs, const buggy_msgs__msg__CurrentCMDStamped * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // current
  if (!buggy_msgs__msg__CurrentCMD__are_equal(
      &(lhs->current), &(rhs->current)))
  {
    return false;
  }
  return true;
}

bool
buggy_msgs__msg__CurrentCMDStamped__copy(
  const buggy_msgs__msg__CurrentCMDStamped * input,
  buggy_msgs__msg__CurrentCMDStamped * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // current
  if (!buggy_msgs__msg__CurrentCMD__copy(
      &(input->current), &(output->current)))
  {
    return false;
  }
  return true;
}

buggy_msgs__msg__CurrentCMDStamped *
buggy_msgs__msg__CurrentCMDStamped__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  buggy_msgs__msg__CurrentCMDStamped * msg = (buggy_msgs__msg__CurrentCMDStamped *)allocator.allocate(sizeof(buggy_msgs__msg__CurrentCMDStamped), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(buggy_msgs__msg__CurrentCMDStamped));
  bool success = buggy_msgs__msg__CurrentCMDStamped__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
buggy_msgs__msg__CurrentCMDStamped__destroy(buggy_msgs__msg__CurrentCMDStamped * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    buggy_msgs__msg__CurrentCMDStamped__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
buggy_msgs__msg__CurrentCMDStamped__Sequence__init(buggy_msgs__msg__CurrentCMDStamped__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  buggy_msgs__msg__CurrentCMDStamped * data = NULL;

  if (size) {
    data = (buggy_msgs__msg__CurrentCMDStamped *)allocator.zero_allocate(size, sizeof(buggy_msgs__msg__CurrentCMDStamped), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = buggy_msgs__msg__CurrentCMDStamped__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        buggy_msgs__msg__CurrentCMDStamped__fini(&data[i - 1]);
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
buggy_msgs__msg__CurrentCMDStamped__Sequence__fini(buggy_msgs__msg__CurrentCMDStamped__Sequence * array)
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
      buggy_msgs__msg__CurrentCMDStamped__fini(&array->data[i]);
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

buggy_msgs__msg__CurrentCMDStamped__Sequence *
buggy_msgs__msg__CurrentCMDStamped__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  buggy_msgs__msg__CurrentCMDStamped__Sequence * array = (buggy_msgs__msg__CurrentCMDStamped__Sequence *)allocator.allocate(sizeof(buggy_msgs__msg__CurrentCMDStamped__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = buggy_msgs__msg__CurrentCMDStamped__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
buggy_msgs__msg__CurrentCMDStamped__Sequence__destroy(buggy_msgs__msg__CurrentCMDStamped__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    buggy_msgs__msg__CurrentCMDStamped__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
buggy_msgs__msg__CurrentCMDStamped__Sequence__are_equal(const buggy_msgs__msg__CurrentCMDStamped__Sequence * lhs, const buggy_msgs__msg__CurrentCMDStamped__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!buggy_msgs__msg__CurrentCMDStamped__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
buggy_msgs__msg__CurrentCMDStamped__Sequence__copy(
  const buggy_msgs__msg__CurrentCMDStamped__Sequence * input,
  buggy_msgs__msg__CurrentCMDStamped__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(buggy_msgs__msg__CurrentCMDStamped);
    buggy_msgs__msg__CurrentCMDStamped * data =
      (buggy_msgs__msg__CurrentCMDStamped *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!buggy_msgs__msg__CurrentCMDStamped__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          buggy_msgs__msg__CurrentCMDStamped__fini(&data[i]);
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
    if (!buggy_msgs__msg__CurrentCMDStamped__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
