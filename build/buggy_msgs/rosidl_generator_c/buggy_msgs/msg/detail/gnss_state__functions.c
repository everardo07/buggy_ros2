// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from buggy_msgs:msg/GNSSState.idl
// generated code does not contain a copyright notice
#include "buggy_msgs/msg/detail/gnss_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `gnss_counter_falling`
// Member `gnss_counter_rising`
// Member `gnss_counter_bus`
// Member `gnss_number_satellites`
// Member `gnss_quality`
// Member `gnss_mode`
// Member `gnss_counter`
#include "std_msgs/msg/detail/u_int16__functions.h"
// Member `gnss_altitude`
// Member `gnss_hdop`
// Member `gnss_pdop`
// Member `gnss_vdop`
#include "std_msgs/msg/detail/float32__functions.h"
// Member `gnss_counter_rmc1`
// Member `gnss_lon_mm`
// Member `gnss_lon_mm_frac`
// Member `gnss_counter_rmc2`
// Member `gnss_lat_mm`
// Member `gnss_lat_mm_frac`
// Member `gnss_angle`
// Member `gnss_angle_valid`
// Member `gnss_counter_rmc3`
// Member `gnss_quality_rmc3`
// Member `gnss_speed`
// Member `gnss_time`
#include "std_msgs/msg/detail/float64__functions.h"

bool
buggy_msgs__msg__GNSSState__init(buggy_msgs__msg__GNSSState * msg)
{
  if (!msg) {
    return false;
  }
  // gnss_counter_falling
  if (!std_msgs__msg__UInt16__init(&msg->gnss_counter_falling)) {
    buggy_msgs__msg__GNSSState__fini(msg);
    return false;
  }
  // gnss_counter_rising
  if (!std_msgs__msg__UInt16__init(&msg->gnss_counter_rising)) {
    buggy_msgs__msg__GNSSState__fini(msg);
    return false;
  }
  // gnss_counter_bus
  if (!std_msgs__msg__UInt16__init(&msg->gnss_counter_bus)) {
    buggy_msgs__msg__GNSSState__fini(msg);
    return false;
  }
  // gnss_altitude
  if (!std_msgs__msg__Float32__init(&msg->gnss_altitude)) {
    buggy_msgs__msg__GNSSState__fini(msg);
    return false;
  }
  // gnss_number_satellites
  if (!std_msgs__msg__UInt16__init(&msg->gnss_number_satellites)) {
    buggy_msgs__msg__GNSSState__fini(msg);
    return false;
  }
  // gnss_quality
  if (!std_msgs__msg__UInt16__init(&msg->gnss_quality)) {
    buggy_msgs__msg__GNSSState__fini(msg);
    return false;
  }
  // gnss_hdop
  if (!std_msgs__msg__Float32__init(&msg->gnss_hdop)) {
    buggy_msgs__msg__GNSSState__fini(msg);
    return false;
  }
  // gnss_mode
  if (!std_msgs__msg__UInt16__init(&msg->gnss_mode)) {
    buggy_msgs__msg__GNSSState__fini(msg);
    return false;
  }
  // gnss_counter
  if (!std_msgs__msg__UInt16__init(&msg->gnss_counter)) {
    buggy_msgs__msg__GNSSState__fini(msg);
    return false;
  }
  // gnss_pdop
  if (!std_msgs__msg__Float32__init(&msg->gnss_pdop)) {
    buggy_msgs__msg__GNSSState__fini(msg);
    return false;
  }
  // gnss_vdop
  if (!std_msgs__msg__Float32__init(&msg->gnss_vdop)) {
    buggy_msgs__msg__GNSSState__fini(msg);
    return false;
  }
  // gnss_counter_rmc1
  if (!std_msgs__msg__Float64__init(&msg->gnss_counter_rmc1)) {
    buggy_msgs__msg__GNSSState__fini(msg);
    return false;
  }
  // gnss_lon_mm
  if (!std_msgs__msg__Float64__init(&msg->gnss_lon_mm)) {
    buggy_msgs__msg__GNSSState__fini(msg);
    return false;
  }
  // gnss_lon_mm_frac
  if (!std_msgs__msg__Float64__init(&msg->gnss_lon_mm_frac)) {
    buggy_msgs__msg__GNSSState__fini(msg);
    return false;
  }
  // gnss_counter_rmc2
  if (!std_msgs__msg__Float64__init(&msg->gnss_counter_rmc2)) {
    buggy_msgs__msg__GNSSState__fini(msg);
    return false;
  }
  // gnss_lat_mm
  if (!std_msgs__msg__Float64__init(&msg->gnss_lat_mm)) {
    buggy_msgs__msg__GNSSState__fini(msg);
    return false;
  }
  // gnss_lat_mm_frac
  if (!std_msgs__msg__Float64__init(&msg->gnss_lat_mm_frac)) {
    buggy_msgs__msg__GNSSState__fini(msg);
    return false;
  }
  // gnss_angle
  if (!std_msgs__msg__Float64__init(&msg->gnss_angle)) {
    buggy_msgs__msg__GNSSState__fini(msg);
    return false;
  }
  // gnss_angle_valid
  if (!std_msgs__msg__Float64__init(&msg->gnss_angle_valid)) {
    buggy_msgs__msg__GNSSState__fini(msg);
    return false;
  }
  // gnss_counter_rmc3
  if (!std_msgs__msg__Float64__init(&msg->gnss_counter_rmc3)) {
    buggy_msgs__msg__GNSSState__fini(msg);
    return false;
  }
  // gnss_quality_rmc3
  if (!std_msgs__msg__Float64__init(&msg->gnss_quality_rmc3)) {
    buggy_msgs__msg__GNSSState__fini(msg);
    return false;
  }
  // gnss_speed
  if (!std_msgs__msg__Float64__init(&msg->gnss_speed)) {
    buggy_msgs__msg__GNSSState__fini(msg);
    return false;
  }
  // gnss_time
  if (!std_msgs__msg__Float64__init(&msg->gnss_time)) {
    buggy_msgs__msg__GNSSState__fini(msg);
    return false;
  }
  return true;
}

void
buggy_msgs__msg__GNSSState__fini(buggy_msgs__msg__GNSSState * msg)
{
  if (!msg) {
    return;
  }
  // gnss_counter_falling
  std_msgs__msg__UInt16__fini(&msg->gnss_counter_falling);
  // gnss_counter_rising
  std_msgs__msg__UInt16__fini(&msg->gnss_counter_rising);
  // gnss_counter_bus
  std_msgs__msg__UInt16__fini(&msg->gnss_counter_bus);
  // gnss_altitude
  std_msgs__msg__Float32__fini(&msg->gnss_altitude);
  // gnss_number_satellites
  std_msgs__msg__UInt16__fini(&msg->gnss_number_satellites);
  // gnss_quality
  std_msgs__msg__UInt16__fini(&msg->gnss_quality);
  // gnss_hdop
  std_msgs__msg__Float32__fini(&msg->gnss_hdop);
  // gnss_mode
  std_msgs__msg__UInt16__fini(&msg->gnss_mode);
  // gnss_counter
  std_msgs__msg__UInt16__fini(&msg->gnss_counter);
  // gnss_pdop
  std_msgs__msg__Float32__fini(&msg->gnss_pdop);
  // gnss_vdop
  std_msgs__msg__Float32__fini(&msg->gnss_vdop);
  // gnss_counter_rmc1
  std_msgs__msg__Float64__fini(&msg->gnss_counter_rmc1);
  // gnss_lon_mm
  std_msgs__msg__Float64__fini(&msg->gnss_lon_mm);
  // gnss_lon_mm_frac
  std_msgs__msg__Float64__fini(&msg->gnss_lon_mm_frac);
  // gnss_counter_rmc2
  std_msgs__msg__Float64__fini(&msg->gnss_counter_rmc2);
  // gnss_lat_mm
  std_msgs__msg__Float64__fini(&msg->gnss_lat_mm);
  // gnss_lat_mm_frac
  std_msgs__msg__Float64__fini(&msg->gnss_lat_mm_frac);
  // gnss_angle
  std_msgs__msg__Float64__fini(&msg->gnss_angle);
  // gnss_angle_valid
  std_msgs__msg__Float64__fini(&msg->gnss_angle_valid);
  // gnss_counter_rmc3
  std_msgs__msg__Float64__fini(&msg->gnss_counter_rmc3);
  // gnss_quality_rmc3
  std_msgs__msg__Float64__fini(&msg->gnss_quality_rmc3);
  // gnss_speed
  std_msgs__msg__Float64__fini(&msg->gnss_speed);
  // gnss_time
  std_msgs__msg__Float64__fini(&msg->gnss_time);
}

bool
buggy_msgs__msg__GNSSState__are_equal(const buggy_msgs__msg__GNSSState * lhs, const buggy_msgs__msg__GNSSState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // gnss_counter_falling
  if (!std_msgs__msg__UInt16__are_equal(
      &(lhs->gnss_counter_falling), &(rhs->gnss_counter_falling)))
  {
    return false;
  }
  // gnss_counter_rising
  if (!std_msgs__msg__UInt16__are_equal(
      &(lhs->gnss_counter_rising), &(rhs->gnss_counter_rising)))
  {
    return false;
  }
  // gnss_counter_bus
  if (!std_msgs__msg__UInt16__are_equal(
      &(lhs->gnss_counter_bus), &(rhs->gnss_counter_bus)))
  {
    return false;
  }
  // gnss_altitude
  if (!std_msgs__msg__Float32__are_equal(
      &(lhs->gnss_altitude), &(rhs->gnss_altitude)))
  {
    return false;
  }
  // gnss_number_satellites
  if (!std_msgs__msg__UInt16__are_equal(
      &(lhs->gnss_number_satellites), &(rhs->gnss_number_satellites)))
  {
    return false;
  }
  // gnss_quality
  if (!std_msgs__msg__UInt16__are_equal(
      &(lhs->gnss_quality), &(rhs->gnss_quality)))
  {
    return false;
  }
  // gnss_hdop
  if (!std_msgs__msg__Float32__are_equal(
      &(lhs->gnss_hdop), &(rhs->gnss_hdop)))
  {
    return false;
  }
  // gnss_mode
  if (!std_msgs__msg__UInt16__are_equal(
      &(lhs->gnss_mode), &(rhs->gnss_mode)))
  {
    return false;
  }
  // gnss_counter
  if (!std_msgs__msg__UInt16__are_equal(
      &(lhs->gnss_counter), &(rhs->gnss_counter)))
  {
    return false;
  }
  // gnss_pdop
  if (!std_msgs__msg__Float32__are_equal(
      &(lhs->gnss_pdop), &(rhs->gnss_pdop)))
  {
    return false;
  }
  // gnss_vdop
  if (!std_msgs__msg__Float32__are_equal(
      &(lhs->gnss_vdop), &(rhs->gnss_vdop)))
  {
    return false;
  }
  // gnss_counter_rmc1
  if (!std_msgs__msg__Float64__are_equal(
      &(lhs->gnss_counter_rmc1), &(rhs->gnss_counter_rmc1)))
  {
    return false;
  }
  // gnss_lon_mm
  if (!std_msgs__msg__Float64__are_equal(
      &(lhs->gnss_lon_mm), &(rhs->gnss_lon_mm)))
  {
    return false;
  }
  // gnss_lon_mm_frac
  if (!std_msgs__msg__Float64__are_equal(
      &(lhs->gnss_lon_mm_frac), &(rhs->gnss_lon_mm_frac)))
  {
    return false;
  }
  // gnss_counter_rmc2
  if (!std_msgs__msg__Float64__are_equal(
      &(lhs->gnss_counter_rmc2), &(rhs->gnss_counter_rmc2)))
  {
    return false;
  }
  // gnss_lat_mm
  if (!std_msgs__msg__Float64__are_equal(
      &(lhs->gnss_lat_mm), &(rhs->gnss_lat_mm)))
  {
    return false;
  }
  // gnss_lat_mm_frac
  if (!std_msgs__msg__Float64__are_equal(
      &(lhs->gnss_lat_mm_frac), &(rhs->gnss_lat_mm_frac)))
  {
    return false;
  }
  // gnss_angle
  if (!std_msgs__msg__Float64__are_equal(
      &(lhs->gnss_angle), &(rhs->gnss_angle)))
  {
    return false;
  }
  // gnss_angle_valid
  if (!std_msgs__msg__Float64__are_equal(
      &(lhs->gnss_angle_valid), &(rhs->gnss_angle_valid)))
  {
    return false;
  }
  // gnss_counter_rmc3
  if (!std_msgs__msg__Float64__are_equal(
      &(lhs->gnss_counter_rmc3), &(rhs->gnss_counter_rmc3)))
  {
    return false;
  }
  // gnss_quality_rmc3
  if (!std_msgs__msg__Float64__are_equal(
      &(lhs->gnss_quality_rmc3), &(rhs->gnss_quality_rmc3)))
  {
    return false;
  }
  // gnss_speed
  if (!std_msgs__msg__Float64__are_equal(
      &(lhs->gnss_speed), &(rhs->gnss_speed)))
  {
    return false;
  }
  // gnss_time
  if (!std_msgs__msg__Float64__are_equal(
      &(lhs->gnss_time), &(rhs->gnss_time)))
  {
    return false;
  }
  return true;
}

bool
buggy_msgs__msg__GNSSState__copy(
  const buggy_msgs__msg__GNSSState * input,
  buggy_msgs__msg__GNSSState * output)
{
  if (!input || !output) {
    return false;
  }
  // gnss_counter_falling
  if (!std_msgs__msg__UInt16__copy(
      &(input->gnss_counter_falling), &(output->gnss_counter_falling)))
  {
    return false;
  }
  // gnss_counter_rising
  if (!std_msgs__msg__UInt16__copy(
      &(input->gnss_counter_rising), &(output->gnss_counter_rising)))
  {
    return false;
  }
  // gnss_counter_bus
  if (!std_msgs__msg__UInt16__copy(
      &(input->gnss_counter_bus), &(output->gnss_counter_bus)))
  {
    return false;
  }
  // gnss_altitude
  if (!std_msgs__msg__Float32__copy(
      &(input->gnss_altitude), &(output->gnss_altitude)))
  {
    return false;
  }
  // gnss_number_satellites
  if (!std_msgs__msg__UInt16__copy(
      &(input->gnss_number_satellites), &(output->gnss_number_satellites)))
  {
    return false;
  }
  // gnss_quality
  if (!std_msgs__msg__UInt16__copy(
      &(input->gnss_quality), &(output->gnss_quality)))
  {
    return false;
  }
  // gnss_hdop
  if (!std_msgs__msg__Float32__copy(
      &(input->gnss_hdop), &(output->gnss_hdop)))
  {
    return false;
  }
  // gnss_mode
  if (!std_msgs__msg__UInt16__copy(
      &(input->gnss_mode), &(output->gnss_mode)))
  {
    return false;
  }
  // gnss_counter
  if (!std_msgs__msg__UInt16__copy(
      &(input->gnss_counter), &(output->gnss_counter)))
  {
    return false;
  }
  // gnss_pdop
  if (!std_msgs__msg__Float32__copy(
      &(input->gnss_pdop), &(output->gnss_pdop)))
  {
    return false;
  }
  // gnss_vdop
  if (!std_msgs__msg__Float32__copy(
      &(input->gnss_vdop), &(output->gnss_vdop)))
  {
    return false;
  }
  // gnss_counter_rmc1
  if (!std_msgs__msg__Float64__copy(
      &(input->gnss_counter_rmc1), &(output->gnss_counter_rmc1)))
  {
    return false;
  }
  // gnss_lon_mm
  if (!std_msgs__msg__Float64__copy(
      &(input->gnss_lon_mm), &(output->gnss_lon_mm)))
  {
    return false;
  }
  // gnss_lon_mm_frac
  if (!std_msgs__msg__Float64__copy(
      &(input->gnss_lon_mm_frac), &(output->gnss_lon_mm_frac)))
  {
    return false;
  }
  // gnss_counter_rmc2
  if (!std_msgs__msg__Float64__copy(
      &(input->gnss_counter_rmc2), &(output->gnss_counter_rmc2)))
  {
    return false;
  }
  // gnss_lat_mm
  if (!std_msgs__msg__Float64__copy(
      &(input->gnss_lat_mm), &(output->gnss_lat_mm)))
  {
    return false;
  }
  // gnss_lat_mm_frac
  if (!std_msgs__msg__Float64__copy(
      &(input->gnss_lat_mm_frac), &(output->gnss_lat_mm_frac)))
  {
    return false;
  }
  // gnss_angle
  if (!std_msgs__msg__Float64__copy(
      &(input->gnss_angle), &(output->gnss_angle)))
  {
    return false;
  }
  // gnss_angle_valid
  if (!std_msgs__msg__Float64__copy(
      &(input->gnss_angle_valid), &(output->gnss_angle_valid)))
  {
    return false;
  }
  // gnss_counter_rmc3
  if (!std_msgs__msg__Float64__copy(
      &(input->gnss_counter_rmc3), &(output->gnss_counter_rmc3)))
  {
    return false;
  }
  // gnss_quality_rmc3
  if (!std_msgs__msg__Float64__copy(
      &(input->gnss_quality_rmc3), &(output->gnss_quality_rmc3)))
  {
    return false;
  }
  // gnss_speed
  if (!std_msgs__msg__Float64__copy(
      &(input->gnss_speed), &(output->gnss_speed)))
  {
    return false;
  }
  // gnss_time
  if (!std_msgs__msg__Float64__copy(
      &(input->gnss_time), &(output->gnss_time)))
  {
    return false;
  }
  return true;
}

buggy_msgs__msg__GNSSState *
buggy_msgs__msg__GNSSState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  buggy_msgs__msg__GNSSState * msg = (buggy_msgs__msg__GNSSState *)allocator.allocate(sizeof(buggy_msgs__msg__GNSSState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(buggy_msgs__msg__GNSSState));
  bool success = buggy_msgs__msg__GNSSState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
buggy_msgs__msg__GNSSState__destroy(buggy_msgs__msg__GNSSState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    buggy_msgs__msg__GNSSState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
buggy_msgs__msg__GNSSState__Sequence__init(buggy_msgs__msg__GNSSState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  buggy_msgs__msg__GNSSState * data = NULL;

  if (size) {
    data = (buggy_msgs__msg__GNSSState *)allocator.zero_allocate(size, sizeof(buggy_msgs__msg__GNSSState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = buggy_msgs__msg__GNSSState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        buggy_msgs__msg__GNSSState__fini(&data[i - 1]);
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
buggy_msgs__msg__GNSSState__Sequence__fini(buggy_msgs__msg__GNSSState__Sequence * array)
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
      buggy_msgs__msg__GNSSState__fini(&array->data[i]);
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

buggy_msgs__msg__GNSSState__Sequence *
buggy_msgs__msg__GNSSState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  buggy_msgs__msg__GNSSState__Sequence * array = (buggy_msgs__msg__GNSSState__Sequence *)allocator.allocate(sizeof(buggy_msgs__msg__GNSSState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = buggy_msgs__msg__GNSSState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
buggy_msgs__msg__GNSSState__Sequence__destroy(buggy_msgs__msg__GNSSState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    buggy_msgs__msg__GNSSState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
buggy_msgs__msg__GNSSState__Sequence__are_equal(const buggy_msgs__msg__GNSSState__Sequence * lhs, const buggy_msgs__msg__GNSSState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!buggy_msgs__msg__GNSSState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
buggy_msgs__msg__GNSSState__Sequence__copy(
  const buggy_msgs__msg__GNSSState__Sequence * input,
  buggy_msgs__msg__GNSSState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(buggy_msgs__msg__GNSSState);
    buggy_msgs__msg__GNSSState * data =
      (buggy_msgs__msg__GNSSState *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!buggy_msgs__msg__GNSSState__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          buggy_msgs__msg__GNSSState__fini(&data[i]);
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
    if (!buggy_msgs__msg__GNSSState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
