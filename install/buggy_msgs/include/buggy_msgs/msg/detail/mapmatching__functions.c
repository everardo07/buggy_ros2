// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from buggy_msgs:msg/Mapmatching.idl
// generated code does not contain a copyright notice
#include "buggy_msgs/msg/detail/mapmatching__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `id`
// Member `counter`
#include "std_msgs/msg/detail/u_int16__functions.h"
// Member `is_lead_vehicle`
#include "std_msgs/msg/detail/u_int8__functions.h"
// Member `mapmatching_checksum`
// Member `mapmatching_is_valid`
// Member `mapmatching_roadindex`
// Member `platoon_mapmatching_s`
#include "std_msgs/msg/detail/float32__functions.h"

bool
buggy_msgs__msg__Mapmatching__init(buggy_msgs__msg__Mapmatching * msg)
{
  if (!msg) {
    return false;
  }
  // id
  if (!std_msgs__msg__UInt16__init(&msg->id)) {
    buggy_msgs__msg__Mapmatching__fini(msg);
    return false;
  }
  // counter
  if (!std_msgs__msg__UInt16__init(&msg->counter)) {
    buggy_msgs__msg__Mapmatching__fini(msg);
    return false;
  }
  // is_lead_vehicle
  if (!std_msgs__msg__UInt8__init(&msg->is_lead_vehicle)) {
    buggy_msgs__msg__Mapmatching__fini(msg);
    return false;
  }
  // mapmatching_checksum
  if (!std_msgs__msg__Float32__init(&msg->mapmatching_checksum)) {
    buggy_msgs__msg__Mapmatching__fini(msg);
    return false;
  }
  // mapmatching_is_valid
  if (!std_msgs__msg__Float32__init(&msg->mapmatching_is_valid)) {
    buggy_msgs__msg__Mapmatching__fini(msg);
    return false;
  }
  // mapmatching_roadindex
  if (!std_msgs__msg__Float32__init(&msg->mapmatching_roadindex)) {
    buggy_msgs__msg__Mapmatching__fini(msg);
    return false;
  }
  // platoon_mapmatching_s
  if (!std_msgs__msg__Float32__init(&msg->platoon_mapmatching_s)) {
    buggy_msgs__msg__Mapmatching__fini(msg);
    return false;
  }
  return true;
}

void
buggy_msgs__msg__Mapmatching__fini(buggy_msgs__msg__Mapmatching * msg)
{
  if (!msg) {
    return;
  }
  // id
  std_msgs__msg__UInt16__fini(&msg->id);
  // counter
  std_msgs__msg__UInt16__fini(&msg->counter);
  // is_lead_vehicle
  std_msgs__msg__UInt8__fini(&msg->is_lead_vehicle);
  // mapmatching_checksum
  std_msgs__msg__Float32__fini(&msg->mapmatching_checksum);
  // mapmatching_is_valid
  std_msgs__msg__Float32__fini(&msg->mapmatching_is_valid);
  // mapmatching_roadindex
  std_msgs__msg__Float32__fini(&msg->mapmatching_roadindex);
  // platoon_mapmatching_s
  std_msgs__msg__Float32__fini(&msg->platoon_mapmatching_s);
}

bool
buggy_msgs__msg__Mapmatching__are_equal(const buggy_msgs__msg__Mapmatching * lhs, const buggy_msgs__msg__Mapmatching * rhs)
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
  // is_lead_vehicle
  if (!std_msgs__msg__UInt8__are_equal(
      &(lhs->is_lead_vehicle), &(rhs->is_lead_vehicle)))
  {
    return false;
  }
  // mapmatching_checksum
  if (!std_msgs__msg__Float32__are_equal(
      &(lhs->mapmatching_checksum), &(rhs->mapmatching_checksum)))
  {
    return false;
  }
  // mapmatching_is_valid
  if (!std_msgs__msg__Float32__are_equal(
      &(lhs->mapmatching_is_valid), &(rhs->mapmatching_is_valid)))
  {
    return false;
  }
  // mapmatching_roadindex
  if (!std_msgs__msg__Float32__are_equal(
      &(lhs->mapmatching_roadindex), &(rhs->mapmatching_roadindex)))
  {
    return false;
  }
  // platoon_mapmatching_s
  if (!std_msgs__msg__Float32__are_equal(
      &(lhs->platoon_mapmatching_s), &(rhs->platoon_mapmatching_s)))
  {
    return false;
  }
  return true;
}

bool
buggy_msgs__msg__Mapmatching__copy(
  const buggy_msgs__msg__Mapmatching * input,
  buggy_msgs__msg__Mapmatching * output)
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
  // is_lead_vehicle
  if (!std_msgs__msg__UInt8__copy(
      &(input->is_lead_vehicle), &(output->is_lead_vehicle)))
  {
    return false;
  }
  // mapmatching_checksum
  if (!std_msgs__msg__Float32__copy(
      &(input->mapmatching_checksum), &(output->mapmatching_checksum)))
  {
    return false;
  }
  // mapmatching_is_valid
  if (!std_msgs__msg__Float32__copy(
      &(input->mapmatching_is_valid), &(output->mapmatching_is_valid)))
  {
    return false;
  }
  // mapmatching_roadindex
  if (!std_msgs__msg__Float32__copy(
      &(input->mapmatching_roadindex), &(output->mapmatching_roadindex)))
  {
    return false;
  }
  // platoon_mapmatching_s
  if (!std_msgs__msg__Float32__copy(
      &(input->platoon_mapmatching_s), &(output->platoon_mapmatching_s)))
  {
    return false;
  }
  return true;
}

buggy_msgs__msg__Mapmatching *
buggy_msgs__msg__Mapmatching__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  buggy_msgs__msg__Mapmatching * msg = (buggy_msgs__msg__Mapmatching *)allocator.allocate(sizeof(buggy_msgs__msg__Mapmatching), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(buggy_msgs__msg__Mapmatching));
  bool success = buggy_msgs__msg__Mapmatching__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
buggy_msgs__msg__Mapmatching__destroy(buggy_msgs__msg__Mapmatching * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    buggy_msgs__msg__Mapmatching__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
buggy_msgs__msg__Mapmatching__Sequence__init(buggy_msgs__msg__Mapmatching__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  buggy_msgs__msg__Mapmatching * data = NULL;

  if (size) {
    data = (buggy_msgs__msg__Mapmatching *)allocator.zero_allocate(size, sizeof(buggy_msgs__msg__Mapmatching), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = buggy_msgs__msg__Mapmatching__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        buggy_msgs__msg__Mapmatching__fini(&data[i - 1]);
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
buggy_msgs__msg__Mapmatching__Sequence__fini(buggy_msgs__msg__Mapmatching__Sequence * array)
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
      buggy_msgs__msg__Mapmatching__fini(&array->data[i]);
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

buggy_msgs__msg__Mapmatching__Sequence *
buggy_msgs__msg__Mapmatching__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  buggy_msgs__msg__Mapmatching__Sequence * array = (buggy_msgs__msg__Mapmatching__Sequence *)allocator.allocate(sizeof(buggy_msgs__msg__Mapmatching__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = buggy_msgs__msg__Mapmatching__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
buggy_msgs__msg__Mapmatching__Sequence__destroy(buggy_msgs__msg__Mapmatching__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    buggy_msgs__msg__Mapmatching__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
buggy_msgs__msg__Mapmatching__Sequence__are_equal(const buggy_msgs__msg__Mapmatching__Sequence * lhs, const buggy_msgs__msg__Mapmatching__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!buggy_msgs__msg__Mapmatching__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
buggy_msgs__msg__Mapmatching__Sequence__copy(
  const buggy_msgs__msg__Mapmatching__Sequence * input,
  buggy_msgs__msg__Mapmatching__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(buggy_msgs__msg__Mapmatching);
    buggy_msgs__msg__Mapmatching * data =
      (buggy_msgs__msg__Mapmatching *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!buggy_msgs__msg__Mapmatching__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          buggy_msgs__msg__Mapmatching__fini(&data[i]);
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
    if (!buggy_msgs__msg__Mapmatching__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
