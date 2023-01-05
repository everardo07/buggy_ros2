// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from vox_nav_msgs:action/FollowPath.idl
// generated code does not contain a copyright notice
#include "vox_nav_msgs/action/detail/follow_path__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `path`
#include "nav_msgs/msg/detail/path__functions.h"
// Member `controller_id`
#include "rosidl_runtime_c/string_functions.h"

bool
vox_nav_msgs__action__FollowPath_Goal__init(vox_nav_msgs__action__FollowPath_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // path
  if (!nav_msgs__msg__Path__init(&msg->path)) {
    vox_nav_msgs__action__FollowPath_Goal__fini(msg);
    return false;
  }
  // controller_id
  if (!rosidl_runtime_c__String__init(&msg->controller_id)) {
    vox_nav_msgs__action__FollowPath_Goal__fini(msg);
    return false;
  }
  return true;
}

void
vox_nav_msgs__action__FollowPath_Goal__fini(vox_nav_msgs__action__FollowPath_Goal * msg)
{
  if (!msg) {
    return;
  }
  // path
  nav_msgs__msg__Path__fini(&msg->path);
  // controller_id
  rosidl_runtime_c__String__fini(&msg->controller_id);
}

bool
vox_nav_msgs__action__FollowPath_Goal__are_equal(const vox_nav_msgs__action__FollowPath_Goal * lhs, const vox_nav_msgs__action__FollowPath_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // path
  if (!nav_msgs__msg__Path__are_equal(
      &(lhs->path), &(rhs->path)))
  {
    return false;
  }
  // controller_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->controller_id), &(rhs->controller_id)))
  {
    return false;
  }
  return true;
}

bool
vox_nav_msgs__action__FollowPath_Goal__copy(
  const vox_nav_msgs__action__FollowPath_Goal * input,
  vox_nav_msgs__action__FollowPath_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // path
  if (!nav_msgs__msg__Path__copy(
      &(input->path), &(output->path)))
  {
    return false;
  }
  // controller_id
  if (!rosidl_runtime_c__String__copy(
      &(input->controller_id), &(output->controller_id)))
  {
    return false;
  }
  return true;
}

vox_nav_msgs__action__FollowPath_Goal *
vox_nav_msgs__action__FollowPath_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vox_nav_msgs__action__FollowPath_Goal * msg = (vox_nav_msgs__action__FollowPath_Goal *)allocator.allocate(sizeof(vox_nav_msgs__action__FollowPath_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(vox_nav_msgs__action__FollowPath_Goal));
  bool success = vox_nav_msgs__action__FollowPath_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
vox_nav_msgs__action__FollowPath_Goal__destroy(vox_nav_msgs__action__FollowPath_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    vox_nav_msgs__action__FollowPath_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
vox_nav_msgs__action__FollowPath_Goal__Sequence__init(vox_nav_msgs__action__FollowPath_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vox_nav_msgs__action__FollowPath_Goal * data = NULL;

  if (size) {
    data = (vox_nav_msgs__action__FollowPath_Goal *)allocator.zero_allocate(size, sizeof(vox_nav_msgs__action__FollowPath_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = vox_nav_msgs__action__FollowPath_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        vox_nav_msgs__action__FollowPath_Goal__fini(&data[i - 1]);
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
vox_nav_msgs__action__FollowPath_Goal__Sequence__fini(vox_nav_msgs__action__FollowPath_Goal__Sequence * array)
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
      vox_nav_msgs__action__FollowPath_Goal__fini(&array->data[i]);
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

vox_nav_msgs__action__FollowPath_Goal__Sequence *
vox_nav_msgs__action__FollowPath_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vox_nav_msgs__action__FollowPath_Goal__Sequence * array = (vox_nav_msgs__action__FollowPath_Goal__Sequence *)allocator.allocate(sizeof(vox_nav_msgs__action__FollowPath_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = vox_nav_msgs__action__FollowPath_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
vox_nav_msgs__action__FollowPath_Goal__Sequence__destroy(vox_nav_msgs__action__FollowPath_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    vox_nav_msgs__action__FollowPath_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
vox_nav_msgs__action__FollowPath_Goal__Sequence__are_equal(const vox_nav_msgs__action__FollowPath_Goal__Sequence * lhs, const vox_nav_msgs__action__FollowPath_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!vox_nav_msgs__action__FollowPath_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
vox_nav_msgs__action__FollowPath_Goal__Sequence__copy(
  const vox_nav_msgs__action__FollowPath_Goal__Sequence * input,
  vox_nav_msgs__action__FollowPath_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(vox_nav_msgs__action__FollowPath_Goal);
    vox_nav_msgs__action__FollowPath_Goal * data =
      (vox_nav_msgs__action__FollowPath_Goal *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!vox_nav_msgs__action__FollowPath_Goal__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          vox_nav_msgs__action__FollowPath_Goal__fini(&data[i]);
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
    if (!vox_nav_msgs__action__FollowPath_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `total_time`
#include "builtin_interfaces/msg/detail/duration__functions.h"

bool
vox_nav_msgs__action__FollowPath_Result__init(vox_nav_msgs__action__FollowPath_Result * msg)
{
  if (!msg) {
    return false;
  }
  // total_time
  if (!builtin_interfaces__msg__Duration__init(&msg->total_time)) {
    vox_nav_msgs__action__FollowPath_Result__fini(msg);
    return false;
  }
  return true;
}

void
vox_nav_msgs__action__FollowPath_Result__fini(vox_nav_msgs__action__FollowPath_Result * msg)
{
  if (!msg) {
    return;
  }
  // total_time
  builtin_interfaces__msg__Duration__fini(&msg->total_time);
}

bool
vox_nav_msgs__action__FollowPath_Result__are_equal(const vox_nav_msgs__action__FollowPath_Result * lhs, const vox_nav_msgs__action__FollowPath_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // total_time
  if (!builtin_interfaces__msg__Duration__are_equal(
      &(lhs->total_time), &(rhs->total_time)))
  {
    return false;
  }
  return true;
}

bool
vox_nav_msgs__action__FollowPath_Result__copy(
  const vox_nav_msgs__action__FollowPath_Result * input,
  vox_nav_msgs__action__FollowPath_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // total_time
  if (!builtin_interfaces__msg__Duration__copy(
      &(input->total_time), &(output->total_time)))
  {
    return false;
  }
  return true;
}

vox_nav_msgs__action__FollowPath_Result *
vox_nav_msgs__action__FollowPath_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vox_nav_msgs__action__FollowPath_Result * msg = (vox_nav_msgs__action__FollowPath_Result *)allocator.allocate(sizeof(vox_nav_msgs__action__FollowPath_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(vox_nav_msgs__action__FollowPath_Result));
  bool success = vox_nav_msgs__action__FollowPath_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
vox_nav_msgs__action__FollowPath_Result__destroy(vox_nav_msgs__action__FollowPath_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    vox_nav_msgs__action__FollowPath_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
vox_nav_msgs__action__FollowPath_Result__Sequence__init(vox_nav_msgs__action__FollowPath_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vox_nav_msgs__action__FollowPath_Result * data = NULL;

  if (size) {
    data = (vox_nav_msgs__action__FollowPath_Result *)allocator.zero_allocate(size, sizeof(vox_nav_msgs__action__FollowPath_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = vox_nav_msgs__action__FollowPath_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        vox_nav_msgs__action__FollowPath_Result__fini(&data[i - 1]);
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
vox_nav_msgs__action__FollowPath_Result__Sequence__fini(vox_nav_msgs__action__FollowPath_Result__Sequence * array)
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
      vox_nav_msgs__action__FollowPath_Result__fini(&array->data[i]);
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

vox_nav_msgs__action__FollowPath_Result__Sequence *
vox_nav_msgs__action__FollowPath_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vox_nav_msgs__action__FollowPath_Result__Sequence * array = (vox_nav_msgs__action__FollowPath_Result__Sequence *)allocator.allocate(sizeof(vox_nav_msgs__action__FollowPath_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = vox_nav_msgs__action__FollowPath_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
vox_nav_msgs__action__FollowPath_Result__Sequence__destroy(vox_nav_msgs__action__FollowPath_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    vox_nav_msgs__action__FollowPath_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
vox_nav_msgs__action__FollowPath_Result__Sequence__are_equal(const vox_nav_msgs__action__FollowPath_Result__Sequence * lhs, const vox_nav_msgs__action__FollowPath_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!vox_nav_msgs__action__FollowPath_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
vox_nav_msgs__action__FollowPath_Result__Sequence__copy(
  const vox_nav_msgs__action__FollowPath_Result__Sequence * input,
  vox_nav_msgs__action__FollowPath_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(vox_nav_msgs__action__FollowPath_Result);
    vox_nav_msgs__action__FollowPath_Result * data =
      (vox_nav_msgs__action__FollowPath_Result *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!vox_nav_msgs__action__FollowPath_Result__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          vox_nav_msgs__action__FollowPath_Result__fini(&data[i]);
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
    if (!vox_nav_msgs__action__FollowPath_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `elapsed_time`
// already included above
// #include "builtin_interfaces/msg/detail/duration__functions.h"

bool
vox_nav_msgs__action__FollowPath_Feedback__init(vox_nav_msgs__action__FollowPath_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // distance_to_goal
  // speed
  // elapsed_time
  if (!builtin_interfaces__msg__Duration__init(&msg->elapsed_time)) {
    vox_nav_msgs__action__FollowPath_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
vox_nav_msgs__action__FollowPath_Feedback__fini(vox_nav_msgs__action__FollowPath_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // distance_to_goal
  // speed
  // elapsed_time
  builtin_interfaces__msg__Duration__fini(&msg->elapsed_time);
}

bool
vox_nav_msgs__action__FollowPath_Feedback__are_equal(const vox_nav_msgs__action__FollowPath_Feedback * lhs, const vox_nav_msgs__action__FollowPath_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // distance_to_goal
  if (lhs->distance_to_goal != rhs->distance_to_goal) {
    return false;
  }
  // speed
  if (lhs->speed != rhs->speed) {
    return false;
  }
  // elapsed_time
  if (!builtin_interfaces__msg__Duration__are_equal(
      &(lhs->elapsed_time), &(rhs->elapsed_time)))
  {
    return false;
  }
  return true;
}

bool
vox_nav_msgs__action__FollowPath_Feedback__copy(
  const vox_nav_msgs__action__FollowPath_Feedback * input,
  vox_nav_msgs__action__FollowPath_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // distance_to_goal
  output->distance_to_goal = input->distance_to_goal;
  // speed
  output->speed = input->speed;
  // elapsed_time
  if (!builtin_interfaces__msg__Duration__copy(
      &(input->elapsed_time), &(output->elapsed_time)))
  {
    return false;
  }
  return true;
}

vox_nav_msgs__action__FollowPath_Feedback *
vox_nav_msgs__action__FollowPath_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vox_nav_msgs__action__FollowPath_Feedback * msg = (vox_nav_msgs__action__FollowPath_Feedback *)allocator.allocate(sizeof(vox_nav_msgs__action__FollowPath_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(vox_nav_msgs__action__FollowPath_Feedback));
  bool success = vox_nav_msgs__action__FollowPath_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
vox_nav_msgs__action__FollowPath_Feedback__destroy(vox_nav_msgs__action__FollowPath_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    vox_nav_msgs__action__FollowPath_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
vox_nav_msgs__action__FollowPath_Feedback__Sequence__init(vox_nav_msgs__action__FollowPath_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vox_nav_msgs__action__FollowPath_Feedback * data = NULL;

  if (size) {
    data = (vox_nav_msgs__action__FollowPath_Feedback *)allocator.zero_allocate(size, sizeof(vox_nav_msgs__action__FollowPath_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = vox_nav_msgs__action__FollowPath_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        vox_nav_msgs__action__FollowPath_Feedback__fini(&data[i - 1]);
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
vox_nav_msgs__action__FollowPath_Feedback__Sequence__fini(vox_nav_msgs__action__FollowPath_Feedback__Sequence * array)
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
      vox_nav_msgs__action__FollowPath_Feedback__fini(&array->data[i]);
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

vox_nav_msgs__action__FollowPath_Feedback__Sequence *
vox_nav_msgs__action__FollowPath_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vox_nav_msgs__action__FollowPath_Feedback__Sequence * array = (vox_nav_msgs__action__FollowPath_Feedback__Sequence *)allocator.allocate(sizeof(vox_nav_msgs__action__FollowPath_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = vox_nav_msgs__action__FollowPath_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
vox_nav_msgs__action__FollowPath_Feedback__Sequence__destroy(vox_nav_msgs__action__FollowPath_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    vox_nav_msgs__action__FollowPath_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
vox_nav_msgs__action__FollowPath_Feedback__Sequence__are_equal(const vox_nav_msgs__action__FollowPath_Feedback__Sequence * lhs, const vox_nav_msgs__action__FollowPath_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!vox_nav_msgs__action__FollowPath_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
vox_nav_msgs__action__FollowPath_Feedback__Sequence__copy(
  const vox_nav_msgs__action__FollowPath_Feedback__Sequence * input,
  vox_nav_msgs__action__FollowPath_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(vox_nav_msgs__action__FollowPath_Feedback);
    vox_nav_msgs__action__FollowPath_Feedback * data =
      (vox_nav_msgs__action__FollowPath_Feedback *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!vox_nav_msgs__action__FollowPath_Feedback__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          vox_nav_msgs__action__FollowPath_Feedback__fini(&data[i]);
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
    if (!vox_nav_msgs__action__FollowPath_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "vox_nav_msgs/action/detail/follow_path__functions.h"

bool
vox_nav_msgs__action__FollowPath_SendGoal_Request__init(vox_nav_msgs__action__FollowPath_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    vox_nav_msgs__action__FollowPath_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!vox_nav_msgs__action__FollowPath_Goal__init(&msg->goal)) {
    vox_nav_msgs__action__FollowPath_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
vox_nav_msgs__action__FollowPath_SendGoal_Request__fini(vox_nav_msgs__action__FollowPath_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  vox_nav_msgs__action__FollowPath_Goal__fini(&msg->goal);
}

bool
vox_nav_msgs__action__FollowPath_SendGoal_Request__are_equal(const vox_nav_msgs__action__FollowPath_SendGoal_Request * lhs, const vox_nav_msgs__action__FollowPath_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!vox_nav_msgs__action__FollowPath_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
vox_nav_msgs__action__FollowPath_SendGoal_Request__copy(
  const vox_nav_msgs__action__FollowPath_SendGoal_Request * input,
  vox_nav_msgs__action__FollowPath_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!vox_nav_msgs__action__FollowPath_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

vox_nav_msgs__action__FollowPath_SendGoal_Request *
vox_nav_msgs__action__FollowPath_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vox_nav_msgs__action__FollowPath_SendGoal_Request * msg = (vox_nav_msgs__action__FollowPath_SendGoal_Request *)allocator.allocate(sizeof(vox_nav_msgs__action__FollowPath_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(vox_nav_msgs__action__FollowPath_SendGoal_Request));
  bool success = vox_nav_msgs__action__FollowPath_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
vox_nav_msgs__action__FollowPath_SendGoal_Request__destroy(vox_nav_msgs__action__FollowPath_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    vox_nav_msgs__action__FollowPath_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
vox_nav_msgs__action__FollowPath_SendGoal_Request__Sequence__init(vox_nav_msgs__action__FollowPath_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vox_nav_msgs__action__FollowPath_SendGoal_Request * data = NULL;

  if (size) {
    data = (vox_nav_msgs__action__FollowPath_SendGoal_Request *)allocator.zero_allocate(size, sizeof(vox_nav_msgs__action__FollowPath_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = vox_nav_msgs__action__FollowPath_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        vox_nav_msgs__action__FollowPath_SendGoal_Request__fini(&data[i - 1]);
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
vox_nav_msgs__action__FollowPath_SendGoal_Request__Sequence__fini(vox_nav_msgs__action__FollowPath_SendGoal_Request__Sequence * array)
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
      vox_nav_msgs__action__FollowPath_SendGoal_Request__fini(&array->data[i]);
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

vox_nav_msgs__action__FollowPath_SendGoal_Request__Sequence *
vox_nav_msgs__action__FollowPath_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vox_nav_msgs__action__FollowPath_SendGoal_Request__Sequence * array = (vox_nav_msgs__action__FollowPath_SendGoal_Request__Sequence *)allocator.allocate(sizeof(vox_nav_msgs__action__FollowPath_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = vox_nav_msgs__action__FollowPath_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
vox_nav_msgs__action__FollowPath_SendGoal_Request__Sequence__destroy(vox_nav_msgs__action__FollowPath_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    vox_nav_msgs__action__FollowPath_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
vox_nav_msgs__action__FollowPath_SendGoal_Request__Sequence__are_equal(const vox_nav_msgs__action__FollowPath_SendGoal_Request__Sequence * lhs, const vox_nav_msgs__action__FollowPath_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!vox_nav_msgs__action__FollowPath_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
vox_nav_msgs__action__FollowPath_SendGoal_Request__Sequence__copy(
  const vox_nav_msgs__action__FollowPath_SendGoal_Request__Sequence * input,
  vox_nav_msgs__action__FollowPath_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(vox_nav_msgs__action__FollowPath_SendGoal_Request);
    vox_nav_msgs__action__FollowPath_SendGoal_Request * data =
      (vox_nav_msgs__action__FollowPath_SendGoal_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!vox_nav_msgs__action__FollowPath_SendGoal_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          vox_nav_msgs__action__FollowPath_SendGoal_Request__fini(&data[i]);
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
    if (!vox_nav_msgs__action__FollowPath_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
vox_nav_msgs__action__FollowPath_SendGoal_Response__init(vox_nav_msgs__action__FollowPath_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    vox_nav_msgs__action__FollowPath_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
vox_nav_msgs__action__FollowPath_SendGoal_Response__fini(vox_nav_msgs__action__FollowPath_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
vox_nav_msgs__action__FollowPath_SendGoal_Response__are_equal(const vox_nav_msgs__action__FollowPath_SendGoal_Response * lhs, const vox_nav_msgs__action__FollowPath_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
vox_nav_msgs__action__FollowPath_SendGoal_Response__copy(
  const vox_nav_msgs__action__FollowPath_SendGoal_Response * input,
  vox_nav_msgs__action__FollowPath_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

vox_nav_msgs__action__FollowPath_SendGoal_Response *
vox_nav_msgs__action__FollowPath_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vox_nav_msgs__action__FollowPath_SendGoal_Response * msg = (vox_nav_msgs__action__FollowPath_SendGoal_Response *)allocator.allocate(sizeof(vox_nav_msgs__action__FollowPath_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(vox_nav_msgs__action__FollowPath_SendGoal_Response));
  bool success = vox_nav_msgs__action__FollowPath_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
vox_nav_msgs__action__FollowPath_SendGoal_Response__destroy(vox_nav_msgs__action__FollowPath_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    vox_nav_msgs__action__FollowPath_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
vox_nav_msgs__action__FollowPath_SendGoal_Response__Sequence__init(vox_nav_msgs__action__FollowPath_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vox_nav_msgs__action__FollowPath_SendGoal_Response * data = NULL;

  if (size) {
    data = (vox_nav_msgs__action__FollowPath_SendGoal_Response *)allocator.zero_allocate(size, sizeof(vox_nav_msgs__action__FollowPath_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = vox_nav_msgs__action__FollowPath_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        vox_nav_msgs__action__FollowPath_SendGoal_Response__fini(&data[i - 1]);
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
vox_nav_msgs__action__FollowPath_SendGoal_Response__Sequence__fini(vox_nav_msgs__action__FollowPath_SendGoal_Response__Sequence * array)
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
      vox_nav_msgs__action__FollowPath_SendGoal_Response__fini(&array->data[i]);
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

vox_nav_msgs__action__FollowPath_SendGoal_Response__Sequence *
vox_nav_msgs__action__FollowPath_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vox_nav_msgs__action__FollowPath_SendGoal_Response__Sequence * array = (vox_nav_msgs__action__FollowPath_SendGoal_Response__Sequence *)allocator.allocate(sizeof(vox_nav_msgs__action__FollowPath_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = vox_nav_msgs__action__FollowPath_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
vox_nav_msgs__action__FollowPath_SendGoal_Response__Sequence__destroy(vox_nav_msgs__action__FollowPath_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    vox_nav_msgs__action__FollowPath_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
vox_nav_msgs__action__FollowPath_SendGoal_Response__Sequence__are_equal(const vox_nav_msgs__action__FollowPath_SendGoal_Response__Sequence * lhs, const vox_nav_msgs__action__FollowPath_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!vox_nav_msgs__action__FollowPath_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
vox_nav_msgs__action__FollowPath_SendGoal_Response__Sequence__copy(
  const vox_nav_msgs__action__FollowPath_SendGoal_Response__Sequence * input,
  vox_nav_msgs__action__FollowPath_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(vox_nav_msgs__action__FollowPath_SendGoal_Response);
    vox_nav_msgs__action__FollowPath_SendGoal_Response * data =
      (vox_nav_msgs__action__FollowPath_SendGoal_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!vox_nav_msgs__action__FollowPath_SendGoal_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          vox_nav_msgs__action__FollowPath_SendGoal_Response__fini(&data[i]);
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
    if (!vox_nav_msgs__action__FollowPath_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
vox_nav_msgs__action__FollowPath_GetResult_Request__init(vox_nav_msgs__action__FollowPath_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    vox_nav_msgs__action__FollowPath_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
vox_nav_msgs__action__FollowPath_GetResult_Request__fini(vox_nav_msgs__action__FollowPath_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
vox_nav_msgs__action__FollowPath_GetResult_Request__are_equal(const vox_nav_msgs__action__FollowPath_GetResult_Request * lhs, const vox_nav_msgs__action__FollowPath_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
vox_nav_msgs__action__FollowPath_GetResult_Request__copy(
  const vox_nav_msgs__action__FollowPath_GetResult_Request * input,
  vox_nav_msgs__action__FollowPath_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

vox_nav_msgs__action__FollowPath_GetResult_Request *
vox_nav_msgs__action__FollowPath_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vox_nav_msgs__action__FollowPath_GetResult_Request * msg = (vox_nav_msgs__action__FollowPath_GetResult_Request *)allocator.allocate(sizeof(vox_nav_msgs__action__FollowPath_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(vox_nav_msgs__action__FollowPath_GetResult_Request));
  bool success = vox_nav_msgs__action__FollowPath_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
vox_nav_msgs__action__FollowPath_GetResult_Request__destroy(vox_nav_msgs__action__FollowPath_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    vox_nav_msgs__action__FollowPath_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
vox_nav_msgs__action__FollowPath_GetResult_Request__Sequence__init(vox_nav_msgs__action__FollowPath_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vox_nav_msgs__action__FollowPath_GetResult_Request * data = NULL;

  if (size) {
    data = (vox_nav_msgs__action__FollowPath_GetResult_Request *)allocator.zero_allocate(size, sizeof(vox_nav_msgs__action__FollowPath_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = vox_nav_msgs__action__FollowPath_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        vox_nav_msgs__action__FollowPath_GetResult_Request__fini(&data[i - 1]);
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
vox_nav_msgs__action__FollowPath_GetResult_Request__Sequence__fini(vox_nav_msgs__action__FollowPath_GetResult_Request__Sequence * array)
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
      vox_nav_msgs__action__FollowPath_GetResult_Request__fini(&array->data[i]);
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

vox_nav_msgs__action__FollowPath_GetResult_Request__Sequence *
vox_nav_msgs__action__FollowPath_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vox_nav_msgs__action__FollowPath_GetResult_Request__Sequence * array = (vox_nav_msgs__action__FollowPath_GetResult_Request__Sequence *)allocator.allocate(sizeof(vox_nav_msgs__action__FollowPath_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = vox_nav_msgs__action__FollowPath_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
vox_nav_msgs__action__FollowPath_GetResult_Request__Sequence__destroy(vox_nav_msgs__action__FollowPath_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    vox_nav_msgs__action__FollowPath_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
vox_nav_msgs__action__FollowPath_GetResult_Request__Sequence__are_equal(const vox_nav_msgs__action__FollowPath_GetResult_Request__Sequence * lhs, const vox_nav_msgs__action__FollowPath_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!vox_nav_msgs__action__FollowPath_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
vox_nav_msgs__action__FollowPath_GetResult_Request__Sequence__copy(
  const vox_nav_msgs__action__FollowPath_GetResult_Request__Sequence * input,
  vox_nav_msgs__action__FollowPath_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(vox_nav_msgs__action__FollowPath_GetResult_Request);
    vox_nav_msgs__action__FollowPath_GetResult_Request * data =
      (vox_nav_msgs__action__FollowPath_GetResult_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!vox_nav_msgs__action__FollowPath_GetResult_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          vox_nav_msgs__action__FollowPath_GetResult_Request__fini(&data[i]);
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
    if (!vox_nav_msgs__action__FollowPath_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "vox_nav_msgs/action/detail/follow_path__functions.h"

bool
vox_nav_msgs__action__FollowPath_GetResult_Response__init(vox_nav_msgs__action__FollowPath_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!vox_nav_msgs__action__FollowPath_Result__init(&msg->result)) {
    vox_nav_msgs__action__FollowPath_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
vox_nav_msgs__action__FollowPath_GetResult_Response__fini(vox_nav_msgs__action__FollowPath_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  vox_nav_msgs__action__FollowPath_Result__fini(&msg->result);
}

bool
vox_nav_msgs__action__FollowPath_GetResult_Response__are_equal(const vox_nav_msgs__action__FollowPath_GetResult_Response * lhs, const vox_nav_msgs__action__FollowPath_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!vox_nav_msgs__action__FollowPath_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
vox_nav_msgs__action__FollowPath_GetResult_Response__copy(
  const vox_nav_msgs__action__FollowPath_GetResult_Response * input,
  vox_nav_msgs__action__FollowPath_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!vox_nav_msgs__action__FollowPath_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

vox_nav_msgs__action__FollowPath_GetResult_Response *
vox_nav_msgs__action__FollowPath_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vox_nav_msgs__action__FollowPath_GetResult_Response * msg = (vox_nav_msgs__action__FollowPath_GetResult_Response *)allocator.allocate(sizeof(vox_nav_msgs__action__FollowPath_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(vox_nav_msgs__action__FollowPath_GetResult_Response));
  bool success = vox_nav_msgs__action__FollowPath_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
vox_nav_msgs__action__FollowPath_GetResult_Response__destroy(vox_nav_msgs__action__FollowPath_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    vox_nav_msgs__action__FollowPath_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
vox_nav_msgs__action__FollowPath_GetResult_Response__Sequence__init(vox_nav_msgs__action__FollowPath_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vox_nav_msgs__action__FollowPath_GetResult_Response * data = NULL;

  if (size) {
    data = (vox_nav_msgs__action__FollowPath_GetResult_Response *)allocator.zero_allocate(size, sizeof(vox_nav_msgs__action__FollowPath_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = vox_nav_msgs__action__FollowPath_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        vox_nav_msgs__action__FollowPath_GetResult_Response__fini(&data[i - 1]);
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
vox_nav_msgs__action__FollowPath_GetResult_Response__Sequence__fini(vox_nav_msgs__action__FollowPath_GetResult_Response__Sequence * array)
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
      vox_nav_msgs__action__FollowPath_GetResult_Response__fini(&array->data[i]);
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

vox_nav_msgs__action__FollowPath_GetResult_Response__Sequence *
vox_nav_msgs__action__FollowPath_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vox_nav_msgs__action__FollowPath_GetResult_Response__Sequence * array = (vox_nav_msgs__action__FollowPath_GetResult_Response__Sequence *)allocator.allocate(sizeof(vox_nav_msgs__action__FollowPath_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = vox_nav_msgs__action__FollowPath_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
vox_nav_msgs__action__FollowPath_GetResult_Response__Sequence__destroy(vox_nav_msgs__action__FollowPath_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    vox_nav_msgs__action__FollowPath_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
vox_nav_msgs__action__FollowPath_GetResult_Response__Sequence__are_equal(const vox_nav_msgs__action__FollowPath_GetResult_Response__Sequence * lhs, const vox_nav_msgs__action__FollowPath_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!vox_nav_msgs__action__FollowPath_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
vox_nav_msgs__action__FollowPath_GetResult_Response__Sequence__copy(
  const vox_nav_msgs__action__FollowPath_GetResult_Response__Sequence * input,
  vox_nav_msgs__action__FollowPath_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(vox_nav_msgs__action__FollowPath_GetResult_Response);
    vox_nav_msgs__action__FollowPath_GetResult_Response * data =
      (vox_nav_msgs__action__FollowPath_GetResult_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!vox_nav_msgs__action__FollowPath_GetResult_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          vox_nav_msgs__action__FollowPath_GetResult_Response__fini(&data[i]);
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
    if (!vox_nav_msgs__action__FollowPath_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "vox_nav_msgs/action/detail/follow_path__functions.h"

bool
vox_nav_msgs__action__FollowPath_FeedbackMessage__init(vox_nav_msgs__action__FollowPath_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    vox_nav_msgs__action__FollowPath_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!vox_nav_msgs__action__FollowPath_Feedback__init(&msg->feedback)) {
    vox_nav_msgs__action__FollowPath_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
vox_nav_msgs__action__FollowPath_FeedbackMessage__fini(vox_nav_msgs__action__FollowPath_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  vox_nav_msgs__action__FollowPath_Feedback__fini(&msg->feedback);
}

bool
vox_nav_msgs__action__FollowPath_FeedbackMessage__are_equal(const vox_nav_msgs__action__FollowPath_FeedbackMessage * lhs, const vox_nav_msgs__action__FollowPath_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!vox_nav_msgs__action__FollowPath_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
vox_nav_msgs__action__FollowPath_FeedbackMessage__copy(
  const vox_nav_msgs__action__FollowPath_FeedbackMessage * input,
  vox_nav_msgs__action__FollowPath_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!vox_nav_msgs__action__FollowPath_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

vox_nav_msgs__action__FollowPath_FeedbackMessage *
vox_nav_msgs__action__FollowPath_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vox_nav_msgs__action__FollowPath_FeedbackMessage * msg = (vox_nav_msgs__action__FollowPath_FeedbackMessage *)allocator.allocate(sizeof(vox_nav_msgs__action__FollowPath_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(vox_nav_msgs__action__FollowPath_FeedbackMessage));
  bool success = vox_nav_msgs__action__FollowPath_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
vox_nav_msgs__action__FollowPath_FeedbackMessage__destroy(vox_nav_msgs__action__FollowPath_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    vox_nav_msgs__action__FollowPath_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
vox_nav_msgs__action__FollowPath_FeedbackMessage__Sequence__init(vox_nav_msgs__action__FollowPath_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vox_nav_msgs__action__FollowPath_FeedbackMessage * data = NULL;

  if (size) {
    data = (vox_nav_msgs__action__FollowPath_FeedbackMessage *)allocator.zero_allocate(size, sizeof(vox_nav_msgs__action__FollowPath_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = vox_nav_msgs__action__FollowPath_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        vox_nav_msgs__action__FollowPath_FeedbackMessage__fini(&data[i - 1]);
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
vox_nav_msgs__action__FollowPath_FeedbackMessage__Sequence__fini(vox_nav_msgs__action__FollowPath_FeedbackMessage__Sequence * array)
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
      vox_nav_msgs__action__FollowPath_FeedbackMessage__fini(&array->data[i]);
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

vox_nav_msgs__action__FollowPath_FeedbackMessage__Sequence *
vox_nav_msgs__action__FollowPath_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vox_nav_msgs__action__FollowPath_FeedbackMessage__Sequence * array = (vox_nav_msgs__action__FollowPath_FeedbackMessage__Sequence *)allocator.allocate(sizeof(vox_nav_msgs__action__FollowPath_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = vox_nav_msgs__action__FollowPath_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
vox_nav_msgs__action__FollowPath_FeedbackMessage__Sequence__destroy(vox_nav_msgs__action__FollowPath_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    vox_nav_msgs__action__FollowPath_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
vox_nav_msgs__action__FollowPath_FeedbackMessage__Sequence__are_equal(const vox_nav_msgs__action__FollowPath_FeedbackMessage__Sequence * lhs, const vox_nav_msgs__action__FollowPath_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!vox_nav_msgs__action__FollowPath_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
vox_nav_msgs__action__FollowPath_FeedbackMessage__Sequence__copy(
  const vox_nav_msgs__action__FollowPath_FeedbackMessage__Sequence * input,
  vox_nav_msgs__action__FollowPath_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(vox_nav_msgs__action__FollowPath_FeedbackMessage);
    vox_nav_msgs__action__FollowPath_FeedbackMessage * data =
      (vox_nav_msgs__action__FollowPath_FeedbackMessage *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!vox_nav_msgs__action__FollowPath_FeedbackMessage__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          vox_nav_msgs__action__FollowPath_FeedbackMessage__fini(&data[i]);
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
    if (!vox_nav_msgs__action__FollowPath_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
