// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from buggy_msgs:msg/BUSParameter.idl
// generated code does not contain a copyright notice

#ifndef BUGGY_MSGS__MSG__DETAIL__BUS_PARAMETER__FUNCTIONS_H_
#define BUGGY_MSGS__MSG__DETAIL__BUS_PARAMETER__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "buggy_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "buggy_msgs/msg/detail/bus_parameter__struct.h"

/// Initialize msg/BUSParameter message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * buggy_msgs__msg__BUSParameter
 * )) before or use
 * buggy_msgs__msg__BUSParameter__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_buggy_msgs
bool
buggy_msgs__msg__BUSParameter__init(buggy_msgs__msg__BUSParameter * msg);

/// Finalize msg/BUSParameter message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_buggy_msgs
void
buggy_msgs__msg__BUSParameter__fini(buggy_msgs__msg__BUSParameter * msg);

/// Create msg/BUSParameter message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * buggy_msgs__msg__BUSParameter__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_buggy_msgs
buggy_msgs__msg__BUSParameter *
buggy_msgs__msg__BUSParameter__create();

/// Destroy msg/BUSParameter message.
/**
 * It calls
 * buggy_msgs__msg__BUSParameter__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_buggy_msgs
void
buggy_msgs__msg__BUSParameter__destroy(buggy_msgs__msg__BUSParameter * msg);

/// Check for msg/BUSParameter message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_buggy_msgs
bool
buggy_msgs__msg__BUSParameter__are_equal(const buggy_msgs__msg__BUSParameter * lhs, const buggy_msgs__msg__BUSParameter * rhs);

/// Copy a msg/BUSParameter message.
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
buggy_msgs__msg__BUSParameter__copy(
  const buggy_msgs__msg__BUSParameter * input,
  buggy_msgs__msg__BUSParameter * output);

/// Initialize array of msg/BUSParameter messages.
/**
 * It allocates the memory for the number of elements and calls
 * buggy_msgs__msg__BUSParameter__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_buggy_msgs
bool
buggy_msgs__msg__BUSParameter__Sequence__init(buggy_msgs__msg__BUSParameter__Sequence * array, size_t size);

/// Finalize array of msg/BUSParameter messages.
/**
 * It calls
 * buggy_msgs__msg__BUSParameter__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_buggy_msgs
void
buggy_msgs__msg__BUSParameter__Sequence__fini(buggy_msgs__msg__BUSParameter__Sequence * array);

/// Create array of msg/BUSParameter messages.
/**
 * It allocates the memory for the array and calls
 * buggy_msgs__msg__BUSParameter__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_buggy_msgs
buggy_msgs__msg__BUSParameter__Sequence *
buggy_msgs__msg__BUSParameter__Sequence__create(size_t size);

/// Destroy array of msg/BUSParameter messages.
/**
 * It calls
 * buggy_msgs__msg__BUSParameter__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_buggy_msgs
void
buggy_msgs__msg__BUSParameter__Sequence__destroy(buggy_msgs__msg__BUSParameter__Sequence * array);

/// Check for msg/BUSParameter message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_buggy_msgs
bool
buggy_msgs__msg__BUSParameter__Sequence__are_equal(const buggy_msgs__msg__BUSParameter__Sequence * lhs, const buggy_msgs__msg__BUSParameter__Sequence * rhs);

/// Copy an array of msg/BUSParameter messages.
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
buggy_msgs__msg__BUSParameter__Sequence__copy(
  const buggy_msgs__msg__BUSParameter__Sequence * input,
  buggy_msgs__msg__BUSParameter__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // BUGGY_MSGS__MSG__DETAIL__BUS_PARAMETER__FUNCTIONS_H_
