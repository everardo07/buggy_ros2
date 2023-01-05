// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from buggy_msgs:msg/BUSParameter.idl
// generated code does not contain a copyright notice
#include "buggy_msgs/msg/detail/bus_parameter__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `params1_wheelcircumference_mm`
// Member `params1_param_simplenav_reset`
// Member `params1_param_obeyspeedlimit`
// Member `params1_param_rv_a_demand`
// Member `params1_v2vid`
// Member `params1_param_track_a_max`
// Member `params1_param_nav_triggermsg`
// Member `params1_param_nav_gnssdelay`
// Member `params1_param_stromgrenze`
// Member `params1_param_drehzahlgrenze`
// Member `params2_param_acc_inverseacc`
// Member `params2_param_acc_timegap`
// Member `params2_param_acc_gain`
// Member `params2_param_acc_distance`
// Member `params2_param_acc_activationdist`
// Member `params2_param_menuparam4`
// Member `params2_param_menuparam3`
// Member `params2_param_menuparam2`
// Member `params2_param_menuparam1`
#include "std_msgs/msg/detail/float32__functions.h"

bool
buggy_msgs__msg__BUSParameter__init(buggy_msgs__msg__BUSParameter * msg)
{
  if (!msg) {
    return false;
  }
  // params1_wheelcircumference_mm
  if (!std_msgs__msg__Float32__init(&msg->params1_wheelcircumference_mm)) {
    buggy_msgs__msg__BUSParameter__fini(msg);
    return false;
  }
  // params1_param_simplenav_reset
  if (!std_msgs__msg__Float32__init(&msg->params1_param_simplenav_reset)) {
    buggy_msgs__msg__BUSParameter__fini(msg);
    return false;
  }
  // params1_param_obeyspeedlimit
  if (!std_msgs__msg__Float32__init(&msg->params1_param_obeyspeedlimit)) {
    buggy_msgs__msg__BUSParameter__fini(msg);
    return false;
  }
  // params1_param_rv_a_demand
  if (!std_msgs__msg__Float32__init(&msg->params1_param_rv_a_demand)) {
    buggy_msgs__msg__BUSParameter__fini(msg);
    return false;
  }
  // params1_v2vid
  if (!std_msgs__msg__Float32__init(&msg->params1_v2vid)) {
    buggy_msgs__msg__BUSParameter__fini(msg);
    return false;
  }
  // params1_param_track_a_max
  if (!std_msgs__msg__Float32__init(&msg->params1_param_track_a_max)) {
    buggy_msgs__msg__BUSParameter__fini(msg);
    return false;
  }
  // params1_param_nav_triggermsg
  if (!std_msgs__msg__Float32__init(&msg->params1_param_nav_triggermsg)) {
    buggy_msgs__msg__BUSParameter__fini(msg);
    return false;
  }
  // params1_param_nav_gnssdelay
  if (!std_msgs__msg__Float32__init(&msg->params1_param_nav_gnssdelay)) {
    buggy_msgs__msg__BUSParameter__fini(msg);
    return false;
  }
  // params1_param_stromgrenze
  if (!std_msgs__msg__Float32__init(&msg->params1_param_stromgrenze)) {
    buggy_msgs__msg__BUSParameter__fini(msg);
    return false;
  }
  // params1_param_drehzahlgrenze
  if (!std_msgs__msg__Float32__init(&msg->params1_param_drehzahlgrenze)) {
    buggy_msgs__msg__BUSParameter__fini(msg);
    return false;
  }
  // params2_param_acc_inverseacc
  if (!std_msgs__msg__Float32__init(&msg->params2_param_acc_inverseacc)) {
    buggy_msgs__msg__BUSParameter__fini(msg);
    return false;
  }
  // params2_param_acc_timegap
  if (!std_msgs__msg__Float32__init(&msg->params2_param_acc_timegap)) {
    buggy_msgs__msg__BUSParameter__fini(msg);
    return false;
  }
  // params2_param_acc_gain
  if (!std_msgs__msg__Float32__init(&msg->params2_param_acc_gain)) {
    buggy_msgs__msg__BUSParameter__fini(msg);
    return false;
  }
  // params2_param_acc_distance
  if (!std_msgs__msg__Float32__init(&msg->params2_param_acc_distance)) {
    buggy_msgs__msg__BUSParameter__fini(msg);
    return false;
  }
  // params2_param_acc_activationdist
  if (!std_msgs__msg__Float32__init(&msg->params2_param_acc_activationdist)) {
    buggy_msgs__msg__BUSParameter__fini(msg);
    return false;
  }
  // params2_param_menuparam4
  if (!std_msgs__msg__Float32__init(&msg->params2_param_menuparam4)) {
    buggy_msgs__msg__BUSParameter__fini(msg);
    return false;
  }
  // params2_param_menuparam3
  if (!std_msgs__msg__Float32__init(&msg->params2_param_menuparam3)) {
    buggy_msgs__msg__BUSParameter__fini(msg);
    return false;
  }
  // params2_param_menuparam2
  if (!std_msgs__msg__Float32__init(&msg->params2_param_menuparam2)) {
    buggy_msgs__msg__BUSParameter__fini(msg);
    return false;
  }
  // params2_param_menuparam1
  if (!std_msgs__msg__Float32__init(&msg->params2_param_menuparam1)) {
    buggy_msgs__msg__BUSParameter__fini(msg);
    return false;
  }
  return true;
}

void
buggy_msgs__msg__BUSParameter__fini(buggy_msgs__msg__BUSParameter * msg)
{
  if (!msg) {
    return;
  }
  // params1_wheelcircumference_mm
  std_msgs__msg__Float32__fini(&msg->params1_wheelcircumference_mm);
  // params1_param_simplenav_reset
  std_msgs__msg__Float32__fini(&msg->params1_param_simplenav_reset);
  // params1_param_obeyspeedlimit
  std_msgs__msg__Float32__fini(&msg->params1_param_obeyspeedlimit);
  // params1_param_rv_a_demand
  std_msgs__msg__Float32__fini(&msg->params1_param_rv_a_demand);
  // params1_v2vid
  std_msgs__msg__Float32__fini(&msg->params1_v2vid);
  // params1_param_track_a_max
  std_msgs__msg__Float32__fini(&msg->params1_param_track_a_max);
  // params1_param_nav_triggermsg
  std_msgs__msg__Float32__fini(&msg->params1_param_nav_triggermsg);
  // params1_param_nav_gnssdelay
  std_msgs__msg__Float32__fini(&msg->params1_param_nav_gnssdelay);
  // params1_param_stromgrenze
  std_msgs__msg__Float32__fini(&msg->params1_param_stromgrenze);
  // params1_param_drehzahlgrenze
  std_msgs__msg__Float32__fini(&msg->params1_param_drehzahlgrenze);
  // params2_param_acc_inverseacc
  std_msgs__msg__Float32__fini(&msg->params2_param_acc_inverseacc);
  // params2_param_acc_timegap
  std_msgs__msg__Float32__fini(&msg->params2_param_acc_timegap);
  // params2_param_acc_gain
  std_msgs__msg__Float32__fini(&msg->params2_param_acc_gain);
  // params2_param_acc_distance
  std_msgs__msg__Float32__fini(&msg->params2_param_acc_distance);
  // params2_param_acc_activationdist
  std_msgs__msg__Float32__fini(&msg->params2_param_acc_activationdist);
  // params2_param_menuparam4
  std_msgs__msg__Float32__fini(&msg->params2_param_menuparam4);
  // params2_param_menuparam3
  std_msgs__msg__Float32__fini(&msg->params2_param_menuparam3);
  // params2_param_menuparam2
  std_msgs__msg__Float32__fini(&msg->params2_param_menuparam2);
  // params2_param_menuparam1
  std_msgs__msg__Float32__fini(&msg->params2_param_menuparam1);
}

bool
buggy_msgs__msg__BUSParameter__are_equal(const buggy_msgs__msg__BUSParameter * lhs, const buggy_msgs__msg__BUSParameter * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // params1_wheelcircumference_mm
  if (!std_msgs__msg__Float32__are_equal(
      &(lhs->params1_wheelcircumference_mm), &(rhs->params1_wheelcircumference_mm)))
  {
    return false;
  }
  // params1_param_simplenav_reset
  if (!std_msgs__msg__Float32__are_equal(
      &(lhs->params1_param_simplenav_reset), &(rhs->params1_param_simplenav_reset)))
  {
    return false;
  }
  // params1_param_obeyspeedlimit
  if (!std_msgs__msg__Float32__are_equal(
      &(lhs->params1_param_obeyspeedlimit), &(rhs->params1_param_obeyspeedlimit)))
  {
    return false;
  }
  // params1_param_rv_a_demand
  if (!std_msgs__msg__Float32__are_equal(
      &(lhs->params1_param_rv_a_demand), &(rhs->params1_param_rv_a_demand)))
  {
    return false;
  }
  // params1_v2vid
  if (!std_msgs__msg__Float32__are_equal(
      &(lhs->params1_v2vid), &(rhs->params1_v2vid)))
  {
    return false;
  }
  // params1_param_track_a_max
  if (!std_msgs__msg__Float32__are_equal(
      &(lhs->params1_param_track_a_max), &(rhs->params1_param_track_a_max)))
  {
    return false;
  }
  // params1_param_nav_triggermsg
  if (!std_msgs__msg__Float32__are_equal(
      &(lhs->params1_param_nav_triggermsg), &(rhs->params1_param_nav_triggermsg)))
  {
    return false;
  }
  // params1_param_nav_gnssdelay
  if (!std_msgs__msg__Float32__are_equal(
      &(lhs->params1_param_nav_gnssdelay), &(rhs->params1_param_nav_gnssdelay)))
  {
    return false;
  }
  // params1_param_stromgrenze
  if (!std_msgs__msg__Float32__are_equal(
      &(lhs->params1_param_stromgrenze), &(rhs->params1_param_stromgrenze)))
  {
    return false;
  }
  // params1_param_drehzahlgrenze
  if (!std_msgs__msg__Float32__are_equal(
      &(lhs->params1_param_drehzahlgrenze), &(rhs->params1_param_drehzahlgrenze)))
  {
    return false;
  }
  // params2_param_acc_inverseacc
  if (!std_msgs__msg__Float32__are_equal(
      &(lhs->params2_param_acc_inverseacc), &(rhs->params2_param_acc_inverseacc)))
  {
    return false;
  }
  // params2_param_acc_timegap
  if (!std_msgs__msg__Float32__are_equal(
      &(lhs->params2_param_acc_timegap), &(rhs->params2_param_acc_timegap)))
  {
    return false;
  }
  // params2_param_acc_gain
  if (!std_msgs__msg__Float32__are_equal(
      &(lhs->params2_param_acc_gain), &(rhs->params2_param_acc_gain)))
  {
    return false;
  }
  // params2_param_acc_distance
  if (!std_msgs__msg__Float32__are_equal(
      &(lhs->params2_param_acc_distance), &(rhs->params2_param_acc_distance)))
  {
    return false;
  }
  // params2_param_acc_activationdist
  if (!std_msgs__msg__Float32__are_equal(
      &(lhs->params2_param_acc_activationdist), &(rhs->params2_param_acc_activationdist)))
  {
    return false;
  }
  // params2_param_menuparam4
  if (!std_msgs__msg__Float32__are_equal(
      &(lhs->params2_param_menuparam4), &(rhs->params2_param_menuparam4)))
  {
    return false;
  }
  // params2_param_menuparam3
  if (!std_msgs__msg__Float32__are_equal(
      &(lhs->params2_param_menuparam3), &(rhs->params2_param_menuparam3)))
  {
    return false;
  }
  // params2_param_menuparam2
  if (!std_msgs__msg__Float32__are_equal(
      &(lhs->params2_param_menuparam2), &(rhs->params2_param_menuparam2)))
  {
    return false;
  }
  // params2_param_menuparam1
  if (!std_msgs__msg__Float32__are_equal(
      &(lhs->params2_param_menuparam1), &(rhs->params2_param_menuparam1)))
  {
    return false;
  }
  return true;
}

bool
buggy_msgs__msg__BUSParameter__copy(
  const buggy_msgs__msg__BUSParameter * input,
  buggy_msgs__msg__BUSParameter * output)
{
  if (!input || !output) {
    return false;
  }
  // params1_wheelcircumference_mm
  if (!std_msgs__msg__Float32__copy(
      &(input->params1_wheelcircumference_mm), &(output->params1_wheelcircumference_mm)))
  {
    return false;
  }
  // params1_param_simplenav_reset
  if (!std_msgs__msg__Float32__copy(
      &(input->params1_param_simplenav_reset), &(output->params1_param_simplenav_reset)))
  {
    return false;
  }
  // params1_param_obeyspeedlimit
  if (!std_msgs__msg__Float32__copy(
      &(input->params1_param_obeyspeedlimit), &(output->params1_param_obeyspeedlimit)))
  {
    return false;
  }
  // params1_param_rv_a_demand
  if (!std_msgs__msg__Float32__copy(
      &(input->params1_param_rv_a_demand), &(output->params1_param_rv_a_demand)))
  {
    return false;
  }
  // params1_v2vid
  if (!std_msgs__msg__Float32__copy(
      &(input->params1_v2vid), &(output->params1_v2vid)))
  {
    return false;
  }
  // params1_param_track_a_max
  if (!std_msgs__msg__Float32__copy(
      &(input->params1_param_track_a_max), &(output->params1_param_track_a_max)))
  {
    return false;
  }
  // params1_param_nav_triggermsg
  if (!std_msgs__msg__Float32__copy(
      &(input->params1_param_nav_triggermsg), &(output->params1_param_nav_triggermsg)))
  {
    return false;
  }
  // params1_param_nav_gnssdelay
  if (!std_msgs__msg__Float32__copy(
      &(input->params1_param_nav_gnssdelay), &(output->params1_param_nav_gnssdelay)))
  {
    return false;
  }
  // params1_param_stromgrenze
  if (!std_msgs__msg__Float32__copy(
      &(input->params1_param_stromgrenze), &(output->params1_param_stromgrenze)))
  {
    return false;
  }
  // params1_param_drehzahlgrenze
  if (!std_msgs__msg__Float32__copy(
      &(input->params1_param_drehzahlgrenze), &(output->params1_param_drehzahlgrenze)))
  {
    return false;
  }
  // params2_param_acc_inverseacc
  if (!std_msgs__msg__Float32__copy(
      &(input->params2_param_acc_inverseacc), &(output->params2_param_acc_inverseacc)))
  {
    return false;
  }
  // params2_param_acc_timegap
  if (!std_msgs__msg__Float32__copy(
      &(input->params2_param_acc_timegap), &(output->params2_param_acc_timegap)))
  {
    return false;
  }
  // params2_param_acc_gain
  if (!std_msgs__msg__Float32__copy(
      &(input->params2_param_acc_gain), &(output->params2_param_acc_gain)))
  {
    return false;
  }
  // params2_param_acc_distance
  if (!std_msgs__msg__Float32__copy(
      &(input->params2_param_acc_distance), &(output->params2_param_acc_distance)))
  {
    return false;
  }
  // params2_param_acc_activationdist
  if (!std_msgs__msg__Float32__copy(
      &(input->params2_param_acc_activationdist), &(output->params2_param_acc_activationdist)))
  {
    return false;
  }
  // params2_param_menuparam4
  if (!std_msgs__msg__Float32__copy(
      &(input->params2_param_menuparam4), &(output->params2_param_menuparam4)))
  {
    return false;
  }
  // params2_param_menuparam3
  if (!std_msgs__msg__Float32__copy(
      &(input->params2_param_menuparam3), &(output->params2_param_menuparam3)))
  {
    return false;
  }
  // params2_param_menuparam2
  if (!std_msgs__msg__Float32__copy(
      &(input->params2_param_menuparam2), &(output->params2_param_menuparam2)))
  {
    return false;
  }
  // params2_param_menuparam1
  if (!std_msgs__msg__Float32__copy(
      &(input->params2_param_menuparam1), &(output->params2_param_menuparam1)))
  {
    return false;
  }
  return true;
}

buggy_msgs__msg__BUSParameter *
buggy_msgs__msg__BUSParameter__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  buggy_msgs__msg__BUSParameter * msg = (buggy_msgs__msg__BUSParameter *)allocator.allocate(sizeof(buggy_msgs__msg__BUSParameter), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(buggy_msgs__msg__BUSParameter));
  bool success = buggy_msgs__msg__BUSParameter__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
buggy_msgs__msg__BUSParameter__destroy(buggy_msgs__msg__BUSParameter * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    buggy_msgs__msg__BUSParameter__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
buggy_msgs__msg__BUSParameter__Sequence__init(buggy_msgs__msg__BUSParameter__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  buggy_msgs__msg__BUSParameter * data = NULL;

  if (size) {
    data = (buggy_msgs__msg__BUSParameter *)allocator.zero_allocate(size, sizeof(buggy_msgs__msg__BUSParameter), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = buggy_msgs__msg__BUSParameter__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        buggy_msgs__msg__BUSParameter__fini(&data[i - 1]);
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
buggy_msgs__msg__BUSParameter__Sequence__fini(buggy_msgs__msg__BUSParameter__Sequence * array)
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
      buggy_msgs__msg__BUSParameter__fini(&array->data[i]);
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

buggy_msgs__msg__BUSParameter__Sequence *
buggy_msgs__msg__BUSParameter__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  buggy_msgs__msg__BUSParameter__Sequence * array = (buggy_msgs__msg__BUSParameter__Sequence *)allocator.allocate(sizeof(buggy_msgs__msg__BUSParameter__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = buggy_msgs__msg__BUSParameter__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
buggy_msgs__msg__BUSParameter__Sequence__destroy(buggy_msgs__msg__BUSParameter__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    buggy_msgs__msg__BUSParameter__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
buggy_msgs__msg__BUSParameter__Sequence__are_equal(const buggy_msgs__msg__BUSParameter__Sequence * lhs, const buggy_msgs__msg__BUSParameter__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!buggy_msgs__msg__BUSParameter__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
buggy_msgs__msg__BUSParameter__Sequence__copy(
  const buggy_msgs__msg__BUSParameter__Sequence * input,
  buggy_msgs__msg__BUSParameter__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(buggy_msgs__msg__BUSParameter);
    buggy_msgs__msg__BUSParameter * data =
      (buggy_msgs__msg__BUSParameter *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!buggy_msgs__msg__BUSParameter__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          buggy_msgs__msg__BUSParameter__fini(&data[i]);
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
    if (!buggy_msgs__msg__BUSParameter__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
