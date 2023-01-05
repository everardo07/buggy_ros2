// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from buggy_msgs:msg/VehicleStateStamped.idl
// generated code does not contain a copyright notice

#ifndef BUGGY_MSGS__MSG__DETAIL__VEHICLE_STATE_STAMPED__FUNCTIONS_H_
#define BUGGY_MSGS__MSG__DETAIL__VEHICLE_STATE_STAMPED__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "buggy_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "buggy_msgs/msg/detail/vehicle_state_stamped__struct.h"

/// Initialize msg/VehicleStateStamped message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * buggy_msgs__msg__VehicleStateStamped
 * )) before or use
 * buggy_msgs__msg__VehicleStateStamped__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_buggy_msgs
bool
buggy_msgs__msg__VehicleStateStamped__init(buggy_msgs__msg__VehicleStateStamped * msg);

/// Finalize msg/VehicleStateStamped message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_buggy_msgs
void
buggy_msgs__msg__VehicleStateStamped__fini(buggy_msgs__msg__VehicleStateStamped * msg);

/// Create msg/VehicleStateStamped message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * buggy_msgs__msg__VehicleStateStamped__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_buggy_msgs
buggy_msgs__msg__VehicleStateStamped *
buggy_msgs__msg__VehicleStateStamped__create();

/// Destroy msg/VehicleStateStamped message.
/**
 * It calls
 * buggy_msgs__msg__VehicleStateStamped__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_buggy_msgs
void
buggy_msgs__msg__VehicleStateStamped__destroy(buggy_msgs__msg__VehicleStateStamped * msg);

/// Check for msg/VehicleStateStamped message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_buggy_msgs
bool
buggy_msgs__msg__VehicleStateStamped__are_equal(const buggy_msgs__msg__VehicleStateStamped * lhs, const buggy_msgs__msg__VehicleStateStamped * rhs);

/// Copy a msg/VehicleStateStamped message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_buggy_msgs
bool
buggy_msgs__msg__VehicleStateStamped__copy(
  const buggy_msgs__msg__VehicleStateStamped * input,
  buggy_msgs__msg__VehicleStateStamped * output);

/// Initialize array of msg/VehicleStateStamped messages.
/**
 * It allocates the memory for the number of elements and calls
 * buggy_msgs__msg__VehicleStateStamped__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_buggy_msgs
bool
buggy_msgs__msg__VehicleStateStamped__Sequence__init(buggy_msgs__msg__VehicleStateStamped__Sequence * array, size_t size);

/// Finalize array of msg/VehicleStateStamped messages.
/**
 * It calls
 * buggy_msgs__msg__VehicleStateStamped__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_buggy_msgs
void
buggy_msgs__msg__VehicleStateStamped__Sequence__fini(buggy_msgs__msg__VehicleStateStamped__Sequence * array);

/// Create array of msg/VehicleStateStamped messages.
/**
 * It allocates the memory for the array and calls
 * buggy_msgs__msg__VehicleStateStamped__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_buggy_msgs
buggy_msgs__msg__VehicleStateStamped__Sequence *
buggy_msgs__msg__VehicleStateStamped__Sequence__create(size_t size);

/// Destroy array of msg/VehicleStateStamped messages.
/**
 * It calls
 * buggy_msgs__msg__VehicleStateStamped__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_buggy_msgs
void
buggy_msgs__msg__VehicleStateStamped__Sequence__destroy(buggy_msgs__msg__VehicleStateStamped__Sequence * array);

/// Check for msg/VehicleStateStamped message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_buggy_msgs
bool
buggy_msgs__msg__VehicleStateStamped__Sequence__are_equal(const buggy_msgs__msg__VehicleStateStamped__Sequence * lhs, const buggy_msgs__msg__VehicleStateStamped__Sequence * rhs);

/// Copy an array of msg/VehicleStateStamped messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_buggy_msgs
bool
buggy_msgs__msg__VehicleStateStamped__Sequence__copy(
  const buggy_msgs__msg__VehicleStateStamped__Sequence * input,
  buggy_msgs__msg__VehicleStateStamped__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // BUGGY_MSGS__MSG__DETAIL__VEHICLE_STATE_STAMPED__FUNCTIONS_H_
