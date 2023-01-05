// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from buggy_msgs:msg/HILinitCMD.idl
// generated code does not contain a copyright notice
#include "buggy_msgs/msg/detail/hi_linit_cmd__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `counter`
#include "std_msgs/msg/detail/u_int8__functions.h"
// Member `lon_mm`
// Member `lat_mm`
// Member `angle`
#include "std_msgs/msg/detail/int16__functions.h"
// Member `lon_mm_frac`
// Member `lat_mm_frac`
#include "std_msgs/msg/detail/float32__functions.h"

bool
buggy_msgs__msg__HILinitCMD__init(buggy_msgs__msg__HILinitCMD * msg)
{
  if (!msg) {
    return false;
  }
  // counter
  if (!std_msgs__msg__UInt8__init(&msg->counter)) {
    buggy_msgs__msg__HILinitCMD__fini(msg);
    return false;
  }
  // lon_mm
  if (!std_msgs__msg__Int16__init(&msg->lon_mm)) {
    buggy_msgs__msg__HILinitCMD__fini(msg);
    return false;
  }
  // lon_mm_frac
  if (!std_msgs__msg__Float32__init(&msg->lon_mm_frac)) {
    buggy_msgs__msg__HILinitCMD__fini(msg);
    return false;
  }
  // lat_mm
  if (!std_msgs__msg__Int16__init(&msg->lat_mm)) {
    buggy_msgs__msg__HILinitCMD__fini(msg);
    return false;
  }
  // lat_mm_frac
  if (!std_msgs__msg__Float32__init(&msg->lat_mm_frac)) {
    buggy_msgs__msg__HILinitCMD__fini(msg);
    return false;
  }
  // angle
  if (!std_msgs__msg__Int16__init(&msg->angle)) {
    buggy_msgs__msg__HILinitCMD__fini(msg);
    return false;
  }
  return true;
}

void
buggy_msgs__msg__HILinitCMD__fini(buggy_msgs__msg__HILinitCMD * msg)
{
  if (!msg) {
    return;
  }
  // counter
  std_msgs__msg__UInt8__fini(&msg->counter);
  // lon_mm
  std_msgs__msg__Int16__fini(&msg->lon_mm);
  // lon_mm_frac
  std_msgs__msg__Float32__fini(&msg->lon_mm_frac);
  // lat_mm
  std_msgs__msg__Int16__fini(&msg->lat_mm);
  // lat_mm_frac
  std_msgs__msg__Float32__fini(&msg->lat_mm_frac);
  // angle
  std_msgs__msg__Int16__fini(&msg->angle);
}

bool
buggy_msgs__msg__HILinitCMD__are_equal(const buggy_msgs__msg__HILinitCMD * lhs, const buggy_msgs__msg__HILinitCMD * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // counter
  if (!std_msgs__msg__UInt8__are_equal(
      &(lhs->counter), &(rhs->counter)))
  {
    return false;
  }
  // lon_mm
  if (!std_msgs__msg__Int16__are_equal(
      &(lhs->lon_mm), &(rhs->lon_mm)))
  {
    return false;
  }
  // lon_mm_frac
  if (!std_msgs__msg__Float32__are_equal(
      &(lhs->lon_mm_frac), &(rhs->lon_mm_frac)))
  {
    return false;
  }
  // lat_mm
  if (!std_msgs__msg__Int16__are_equal(
      &(lhs->lat_mm), &(rhs->lat_mm)))
  {
    return false;
  }
  // lat_mm_frac
  if (!std_msgs__msg__Float32__are_equal(
      &(lhs->lat_mm_frac), &(rhs->lat_mm_frac)))
  {
    return false;
  }
  // angle
  if (!std_msgs__msg__Int16__are_equal(
      &(lhs->angle), &(rhs->angle)))
  {
    return false;
  }
  return true;
}

bool
buggy_msgs__msg__HILinitCMD__copy(
  const buggy_msgs__msg__HILinitCMD * input,
  buggy_msgs__msg__HILinitCMD * output)
{
  if (!input || !output) {
    return false;
  }
  // counter
  if (!std_msgs__msg__UInt8__copy(
      &(input->counter), &(output->counter)))
  {
    return false;
  }
  // lon_mm
  if (!std_msgs__msg__Int16__copy(
      &(input->lon_mm), &(output->lon_mm)))
  {
    return false;
  }
  // lon_mm_frac
  if (!std_msgs__msg__Float32__copy(
      &(input->lon_mm_frac), &(output->lon_mm_frac)))
  {
    return false;
  }
  // lat_mm
  if (!std_msgs__msg__Int16__copy(
      &(input->lat_mm), &(output->lat_mm)))
  {
    return false;
  }
  // lat_mm_frac
  if (!std_msgs__msg__Float32__copy(
      &(input->lat_mm_frac), &(output->lat_mm_frac)))
  {
    return false;
  }
  // angle
  if (!std_msgs__msg__Int16__copy(
      &(input->angle), &(output->angle)))
  {
    return false;
  }
  return true;
}

buggy_msgs__msg__HILinitCMD *
buggy_msgs__msg__HILinitCMD__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  buggy_msgs__msg__HILinitCMD * msg = (buggy_msgs__msg__HILinitCMD *)allocator.allocate(sizeof(buggy_msgs__msg__HILinitCMD), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(buggy_msgs__msg__HILinitCMD));
  bool success = buggy_msgs__msg__HILinitCMD__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
buggy_msgs__msg__HILinitCMD__destroy(buggy_msgs__msg__HILinitCMD * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    buggy_msgs__msg__HILinitCMD__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
buggy_msgs__msg__HILinitCMD__Sequence__init(buggy_msgs__msg__HILinitCMD__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  buggy_msgs__msg__HILinitCMD * data = NULL;

  if (size) {
    data = (buggy_msgs__msg__HILinitCMD *)allocator.zero_allocate(size, sizeof(buggy_msgs__msg__HILinitCMD), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = buggy_msgs__msg__HILinitCMD__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        buggy_msgs__msg__HILinitCMD__fini(&data[i - 1]);
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
buggy_msgs__msg__HILinitCMD__Sequence__fini(buggy_msgs__msg__HILinitCMD__Sequence * array)
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
      buggy_msgs__msg__HILinitCMD__fini(&array->data[i]);
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

buggy_msgs__msg__HILinitCMD__Sequence *
buggy_msgs__msg__HILinitCMD__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  buggy_msgs__msg__HILinitCMD__Sequence * array = (buggy_msgs__msg__HILinitCMD__Sequence *)allocator.allocate(sizeof(buggy_msgs__msg__HILinitCMD__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = buggy_msgs__msg__HILinitCMD__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
buggy_msgs__msg__HILinitCMD__Sequence__destroy(buggy_msgs__msg__HILinitCMD__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    buggy_msgs__msg__HILinitCMD__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
buggy_msgs__msg__HILinitCMD__Sequence__are_equal(const buggy_msgs__msg__HILinitCMD__Sequence * lhs, const buggy_msgs__msg__HILinitCMD__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!buggy_msgs__msg__HILinitCMD__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
buggy_msgs__msg__HILinitCMD__Sequence__copy(
  const buggy_msgs__msg__HILinitCMD__Sequence * input,
  buggy_msgs__msg__HILinitCMD__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(buggy_msgs__msg__HILinitCMD);
    buggy_msgs__msg__HILinitCMD * data =
      (buggy_msgs__msg__HILinitCMD *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!buggy_msgs__msg__HILinitCMD__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          buggy_msgs__msg__HILinitCMD__fini(&data[i]);
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
    if (!buggy_msgs__msg__HILinitCMD__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
