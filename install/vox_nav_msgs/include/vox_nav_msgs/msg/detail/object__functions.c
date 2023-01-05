// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from vox_nav_msgs:msg/Object.idl
// generated code does not contain a copyright notice
#include "vox_nav_msgs/msg/detail/object__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `velo_pose`
// Member `world_pose`
// Member `cam_pose`
#include "geometry_msgs/msg/detail/point_stamped__functions.h"
// Member `semantic_name`
#include "rosidl_runtime_c/string_functions.h"

bool
vox_nav_msgs__msg__Object__init(vox_nav_msgs__msg__Object * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // velo_pose
  if (!geometry_msgs__msg__PointStamped__init(&msg->velo_pose)) {
    vox_nav_msgs__msg__Object__fini(msg);
    return false;
  }
  // world_pose
  if (!geometry_msgs__msg__PointStamped__init(&msg->world_pose)) {
    vox_nav_msgs__msg__Object__fini(msg);
    return false;
  }
  // cam_pose
  if (!geometry_msgs__msg__PointStamped__init(&msg->cam_pose)) {
    vox_nav_msgs__msg__Object__fini(msg);
    return false;
  }
  // heading
  // velocity
  // width
  // length
  // height
  // orientation
  // semantic_confidence
  // semantic_name
  if (!rosidl_runtime_c__String__init(&msg->semantic_name)) {
    vox_nav_msgs__msg__Object__fini(msg);
    return false;
  }
  // semantic_id
  // r
  // g
  // b
  // a
  // is_new_track
  // is_dynamic
  return true;
}

void
vox_nav_msgs__msg__Object__fini(vox_nav_msgs__msg__Object * msg)
{
  if (!msg) {
    return;
  }
  // id
  // velo_pose
  geometry_msgs__msg__PointStamped__fini(&msg->velo_pose);
  // world_pose
  geometry_msgs__msg__PointStamped__fini(&msg->world_pose);
  // cam_pose
  geometry_msgs__msg__PointStamped__fini(&msg->cam_pose);
  // heading
  // velocity
  // width
  // length
  // height
  // orientation
  // semantic_confidence
  // semantic_name
  rosidl_runtime_c__String__fini(&msg->semantic_name);
  // semantic_id
  // r
  // g
  // b
  // a
  // is_new_track
  // is_dynamic
}

bool
vox_nav_msgs__msg__Object__are_equal(const vox_nav_msgs__msg__Object * lhs, const vox_nav_msgs__msg__Object * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // velo_pose
  if (!geometry_msgs__msg__PointStamped__are_equal(
      &(lhs->velo_pose), &(rhs->velo_pose)))
  {
    return false;
  }
  // world_pose
  if (!geometry_msgs__msg__PointStamped__are_equal(
      &(lhs->world_pose), &(rhs->world_pose)))
  {
    return false;
  }
  // cam_pose
  if (!geometry_msgs__msg__PointStamped__are_equal(
      &(lhs->cam_pose), &(rhs->cam_pose)))
  {
    return false;
  }
  // heading
  if (lhs->heading != rhs->heading) {
    return false;
  }
  // velocity
  if (lhs->velocity != rhs->velocity) {
    return false;
  }
  // width
  if (lhs->width != rhs->width) {
    return false;
  }
  // length
  if (lhs->length != rhs->length) {
    return false;
  }
  // height
  if (lhs->height != rhs->height) {
    return false;
  }
  // orientation
  if (lhs->orientation != rhs->orientation) {
    return false;
  }
  // semantic_confidence
  if (lhs->semantic_confidence != rhs->semantic_confidence) {
    return false;
  }
  // semantic_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->semantic_name), &(rhs->semantic_name)))
  {
    return false;
  }
  // semantic_id
  if (lhs->semantic_id != rhs->semantic_id) {
    return false;
  }
  // r
  if (lhs->r != rhs->r) {
    return false;
  }
  // g
  if (lhs->g != rhs->g) {
    return false;
  }
  // b
  if (lhs->b != rhs->b) {
    return false;
  }
  // a
  if (lhs->a != rhs->a) {
    return false;
  }
  // is_new_track
  if (lhs->is_new_track != rhs->is_new_track) {
    return false;
  }
  // is_dynamic
  if (lhs->is_dynamic != rhs->is_dynamic) {
    return false;
  }
  return true;
}

bool
vox_nav_msgs__msg__Object__copy(
  const vox_nav_msgs__msg__Object * input,
  vox_nav_msgs__msg__Object * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // velo_pose
  if (!geometry_msgs__msg__PointStamped__copy(
      &(input->velo_pose), &(output->velo_pose)))
  {
    return false;
  }
  // world_pose
  if (!geometry_msgs__msg__PointStamped__copy(
      &(input->world_pose), &(output->world_pose)))
  {
    return false;
  }
  // cam_pose
  if (!geometry_msgs__msg__PointStamped__copy(
      &(input->cam_pose), &(output->cam_pose)))
  {
    return false;
  }
  // heading
  output->heading = input->heading;
  // velocity
  output->velocity = input->velocity;
  // width
  output->width = input->width;
  // length
  output->length = input->length;
  // height
  output->height = input->height;
  // orientation
  output->orientation = input->orientation;
  // semantic_confidence
  output->semantic_confidence = input->semantic_confidence;
  // semantic_name
  if (!rosidl_runtime_c__String__copy(
      &(input->semantic_name), &(output->semantic_name)))
  {
    return false;
  }
  // semantic_id
  output->semantic_id = input->semantic_id;
  // r
  output->r = input->r;
  // g
  output->g = input->g;
  // b
  output->b = input->b;
  // a
  output->a = input->a;
  // is_new_track
  output->is_new_track = input->is_new_track;
  // is_dynamic
  output->is_dynamic = input->is_dynamic;
  return true;
}

vox_nav_msgs__msg__Object *
vox_nav_msgs__msg__Object__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vox_nav_msgs__msg__Object * msg = (vox_nav_msgs__msg__Object *)allocator.allocate(sizeof(vox_nav_msgs__msg__Object), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(vox_nav_msgs__msg__Object));
  bool success = vox_nav_msgs__msg__Object__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
vox_nav_msgs__msg__Object__destroy(vox_nav_msgs__msg__Object * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    vox_nav_msgs__msg__Object__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
vox_nav_msgs__msg__Object__Sequence__init(vox_nav_msgs__msg__Object__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vox_nav_msgs__msg__Object * data = NULL;

  if (size) {
    data = (vox_nav_msgs__msg__Object *)allocator.zero_allocate(size, sizeof(vox_nav_msgs__msg__Object), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = vox_nav_msgs__msg__Object__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        vox_nav_msgs__msg__Object__fini(&data[i - 1]);
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
vox_nav_msgs__msg__Object__Sequence__fini(vox_nav_msgs__msg__Object__Sequence * array)
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
      vox_nav_msgs__msg__Object__fini(&array->data[i]);
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

vox_nav_msgs__msg__Object__Sequence *
vox_nav_msgs__msg__Object__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vox_nav_msgs__msg__Object__Sequence * array = (vox_nav_msgs__msg__Object__Sequence *)allocator.allocate(sizeof(vox_nav_msgs__msg__Object__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = vox_nav_msgs__msg__Object__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
vox_nav_msgs__msg__Object__Sequence__destroy(vox_nav_msgs__msg__Object__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    vox_nav_msgs__msg__Object__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
vox_nav_msgs__msg__Object__Sequence__are_equal(const vox_nav_msgs__msg__Object__Sequence * lhs, const vox_nav_msgs__msg__Object__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!vox_nav_msgs__msg__Object__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
vox_nav_msgs__msg__Object__Sequence__copy(
  const vox_nav_msgs__msg__Object__Sequence * input,
  vox_nav_msgs__msg__Object__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(vox_nav_msgs__msg__Object);
    vox_nav_msgs__msg__Object * data =
      (vox_nav_msgs__msg__Object *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!vox_nav_msgs__msg__Object__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          vox_nav_msgs__msg__Object__fini(&data[i]);
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
    if (!vox_nav_msgs__msg__Object__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
