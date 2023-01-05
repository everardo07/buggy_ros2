// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from vox_nav_msgs:action/NavigateToPose.idl
// generated code does not contain a copyright notice

#ifndef VOX_NAV_MSGS__ACTION__DETAIL__NAVIGATE_TO_POSE__FUNCTIONS_H_
#define VOX_NAV_MSGS__ACTION__DETAIL__NAVIGATE_TO_POSE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "vox_nav_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "vox_nav_msgs/action/detail/navigate_to_pose__struct.h"

/// Initialize action/NavigateToPose message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * vox_nav_msgs__action__NavigateToPose_Goal
 * )) before or use
 * vox_nav_msgs__action__NavigateToPose_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_vox_nav_msgs
bool
vox_nav_msgs__action__NavigateToPose_Goal__init(vox_nav_msgs__action__NavigateToPose_Goal * msg);

/// Finalize action/NavigateToPose message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vox_nav_msgs
void
vox_nav_msgs__action__NavigateToPose_Goal__fini(vox_nav_msgs__action__NavigateToPose_Goal * msg);

/// Create action/NavigateToPose message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * vox_nav_msgs__action__NavigateToPose_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_vox_nav_msgs
vox_nav_msgs__action__NavigateToPose_Goal *
vox_nav_msgs__action__NavigateToPose_Goal__create();

/// Destroy action/NavigateToPose message.
/**
 * It calls
 * vox_nav_msgs__action__NavigateToPose_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vox_nav_msgs
void
vox_nav_msgs__action__NavigateToPose_Goal__destroy(vox_nav_msgs__action__NavigateToPose_Goal * msg);

/// Check for action/NavigateToPose message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_vox_nav_msgs
bool
vox_nav_msgs__action__NavigateToPose_Goal__are_equal(const vox_nav_msgs__action__NavigateToPose_Goal * lhs, const vox_nav_msgs__action__NavigateToPose_Goal * rhs);

/// Copy a action/NavigateToPose message.
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
ROSIDL_GENERATOR_C_PUBLIC_vox_nav_msgs
bool
vox_nav_msgs__action__NavigateToPose_Goal__copy(
  const vox_nav_msgs__action__NavigateToPose_Goal * input,
  vox_nav_msgs__action__NavigateToPose_Goal * output);

/// Initialize array of action/NavigateToPose messages.
/**
 * It allocates the memory for the number of elements and calls
 * vox_nav_msgs__action__NavigateToPose_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_vox_nav_msgs
bool
vox_nav_msgs__action__NavigateToPose_Goal__Sequence__init(vox_nav_msgs__action__NavigateToPose_Goal__Sequence * array, size_t size);

/// Finalize array of action/NavigateToPose messages.
/**
 * It calls
 * vox_nav_msgs__action__NavigateToPose_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vox_nav_msgs
void
vox_nav_msgs__action__NavigateToPose_Goal__Sequence__fini(vox_nav_msgs__action__NavigateToPose_Goal__Sequence * array);

/// Create array of action/NavigateToPose messages.
/**
 * It allocates the memory for the array and calls
 * vox_nav_msgs__action__NavigateToPose_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_vox_nav_msgs
vox_nav_msgs__action__NavigateToPose_Goal__Sequence *
vox_nav_msgs__action__NavigateToPose_Goal__Sequence__create(size_t size);

/// Destroy array of action/NavigateToPose messages.
/**
 * It calls
 * vox_nav_msgs__action__NavigateToPose_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vox_nav_msgs
void
vox_nav_msgs__action__NavigateToPose_Goal__Sequence__destroy(vox_nav_msgs__action__NavigateToPose_Goal__Sequence * array);

/// Check for action/NavigateToPose message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_vox_nav_msgs
bool
vox_nav_msgs__action__NavigateToPose_Goal__Sequence__are_equal(const vox_nav_msgs__action__NavigateToPose_Goal__Sequence * lhs, const vox_nav_msgs__action__NavigateToPose_Goal__Sequence * rhs);

/// Copy an array of action/NavigateToPose messages.
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
ROSIDL_GENERATOR_C_PUBLIC_vox_nav_msgs
bool
vox_nav_msgs__action__NavigateToPose_Goal__Sequence__copy(
  const vox_nav_msgs__action__NavigateToPose_Goal__Sequence * input,
  vox_nav_msgs__action__NavigateToPose_Goal__Sequence * output);

/// Initialize action/NavigateToPose message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * vox_nav_msgs__action__NavigateToPose_Result
 * )) before or use
 * vox_nav_msgs__action__NavigateToPose_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_vox_nav_msgs
bool
vox_nav_msgs__action__NavigateToPose_Result__init(vox_nav_msgs__action__NavigateToPose_Result * msg);

/// Finalize action/NavigateToPose message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vox_nav_msgs
void
vox_nav_msgs__action__NavigateToPose_Result__fini(vox_nav_msgs__action__NavigateToPose_Result * msg);

/// Create action/NavigateToPose message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * vox_nav_msgs__action__NavigateToPose_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_vox_nav_msgs
vox_nav_msgs__action__NavigateToPose_Result *
vox_nav_msgs__action__NavigateToPose_Result__create();

/// Destroy action/NavigateToPose message.
/**
 * It calls
 * vox_nav_msgs__action__NavigateToPose_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vox_nav_msgs
void
vox_nav_msgs__action__NavigateToPose_Result__destroy(vox_nav_msgs__action__NavigateToPose_Result * msg);

/// Check for action/NavigateToPose message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_vox_nav_msgs
bool
vox_nav_msgs__action__NavigateToPose_Result__are_equal(const vox_nav_msgs__action__NavigateToPose_Result * lhs, const vox_nav_msgs__action__NavigateToPose_Result * rhs);

/// Copy a action/NavigateToPose message.
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
ROSIDL_GENERATOR_C_PUBLIC_vox_nav_msgs
bool
vox_nav_msgs__action__NavigateToPose_Result__copy(
  const vox_nav_msgs__action__NavigateToPose_Result * input,
  vox_nav_msgs__action__NavigateToPose_Result * output);

/// Initialize array of action/NavigateToPose messages.
/**
 * It allocates the memory for the number of elements and calls
 * vox_nav_msgs__action__NavigateToPose_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_vox_nav_msgs
bool
vox_nav_msgs__action__NavigateToPose_Result__Sequence__init(vox_nav_msgs__action__NavigateToPose_Result__Sequence * array, size_t size);

/// Finalize array of action/NavigateToPose messages.
/**
 * It calls
 * vox_nav_msgs__action__NavigateToPose_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vox_nav_msgs
void
vox_nav_msgs__action__NavigateToPose_Result__Sequence__fini(vox_nav_msgs__action__NavigateToPose_Result__Sequence * array);

/// Create array of action/NavigateToPose messages.
/**
 * It allocates the memory for the array and calls
 * vox_nav_msgs__action__NavigateToPose_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_vox_nav_msgs
vox_nav_msgs__action__NavigateToPose_Result__Sequence *
vox_nav_msgs__action__NavigateToPose_Result__Sequence__create(size_t size);

/// Destroy array of action/NavigateToPose messages.
/**
 * It calls
 * vox_nav_msgs__action__NavigateToPose_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vox_nav_msgs
void
vox_nav_msgs__action__NavigateToPose_Result__Sequence__destroy(vox_nav_msgs__action__NavigateToPose_Result__Sequence * array);

/// Check for action/NavigateToPose message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_vox_nav_msgs
bool
vox_nav_msgs__action__NavigateToPose_Result__Sequence__are_equal(const vox_nav_msgs__action__NavigateToPose_Result__Sequence * lhs, const vox_nav_msgs__action__NavigateToPose_Result__Sequence * rhs);

/// Copy an array of action/NavigateToPose messages.
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
ROSIDL_GENERATOR_C_PUBLIC_vox_nav_msgs
bool
vox_nav_msgs__action__NavigateToPose_Result__Sequence__copy(
  const vox_nav_msgs__action__NavigateToPose_Result__Sequence * input,
  vox_nav_msgs__action__NavigateToPose_Result__Sequence * output);

/// Initialize action/NavigateToPose message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * vox_nav_msgs__action__NavigateToPose_Feedback
 * )) before or use
 * vox_nav_msgs__action__NavigateToPose_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_vox_nav_msgs
bool
vox_nav_msgs__action__NavigateToPose_Feedback__init(vox_nav_msgs__action__NavigateToPose_Feedback * msg);

/// Finalize action/NavigateToPose message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vox_nav_msgs
void
vox_nav_msgs__action__NavigateToPose_Feedback__fini(vox_nav_msgs__action__NavigateToPose_Feedback * msg);

/// Create action/NavigateToPose message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * vox_nav_msgs__action__NavigateToPose_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_vox_nav_msgs
vox_nav_msgs__action__NavigateToPose_Feedback *
vox_nav_msgs__action__NavigateToPose_Feedback__create();

/// Destroy action/NavigateToPose message.
/**
 * It calls
 * vox_nav_msgs__action__NavigateToPose_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vox_nav_msgs
void
vox_nav_msgs__action__NavigateToPose_Feedback__destroy(vox_nav_msgs__action__NavigateToPose_Feedback * msg);

/// Check for action/NavigateToPose message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_vox_nav_msgs
bool
vox_nav_msgs__action__NavigateToPose_Feedback__are_equal(const vox_nav_msgs__action__NavigateToPose_Feedback * lhs, const vox_nav_msgs__action__NavigateToPose_Feedback * rhs);

/// Copy a action/NavigateToPose message.
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
ROSIDL_GENERATOR_C_PUBLIC_vox_nav_msgs
bool
vox_nav_msgs__action__NavigateToPose_Feedback__copy(
  const vox_nav_msgs__action__NavigateToPose_Feedback * input,
  vox_nav_msgs__action__NavigateToPose_Feedback * output);

/// Initialize array of action/NavigateToPose messages.
/**
 * It allocates the memory for the number of elements and calls
 * vox_nav_msgs__action__NavigateToPose_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_vox_nav_msgs
bool
vox_nav_msgs__action__NavigateToPose_Feedback__Sequence__init(vox_nav_msgs__action__NavigateToPose_Feedback__Sequence * array, size_t size);

/// Finalize array of action/NavigateToPose messages.
/**
 * It calls
 * vox_nav_msgs__action__NavigateToPose_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vox_nav_msgs
void
vox_nav_msgs__action__NavigateToPose_Feedback__Sequence__fini(vox_nav_msgs__action__NavigateToPose_Feedback__Sequence * array);

/// Create array of action/NavigateToPose messages.
/**
 * It allocates the memory for the array and calls
 * vox_nav_msgs__action__NavigateToPose_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_vox_nav_msgs
vox_nav_msgs__action__NavigateToPose_Feedback__Sequence *
vox_nav_msgs__action__NavigateToPose_Feedback__Sequence__create(size_t size);

/// Destroy array of action/NavigateToPose messages.
/**
 * It calls
 * vox_nav_msgs__action__NavigateToPose_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vox_nav_msgs
void
vox_nav_msgs__action__NavigateToPose_Feedback__Sequence__destroy(vox_nav_msgs__action__NavigateToPose_Feedback__Sequence * array);

/// Check for action/NavigateToPose message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_vox_nav_msgs
bool
vox_nav_msgs__action__NavigateToPose_Feedback__Sequence__are_equal(const vox_nav_msgs__action__NavigateToPose_Feedback__Sequence * lhs, const vox_nav_msgs__action__NavigateToPose_Feedback__Sequence * rhs);

/// Copy an array of action/NavigateToPose messages.
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
ROSIDL_GENERATOR_C_PUBLIC_vox_nav_msgs
bool
vox_nav_msgs__action__NavigateToPose_Feedback__Sequence__copy(
  const vox_nav_msgs__action__NavigateToPose_Feedback__Sequence * input,
  vox_nav_msgs__action__NavigateToPose_Feedback__Sequence * output);

/// Initialize action/NavigateToPose message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * vox_nav_msgs__action__NavigateToPose_SendGoal_Request
 * )) before or use
 * vox_nav_msgs__action__NavigateToPose_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_vox_nav_msgs
bool
vox_nav_msgs__action__NavigateToPose_SendGoal_Request__init(vox_nav_msgs__action__NavigateToPose_SendGoal_Request * msg);

/// Finalize action/NavigateToPose message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vox_nav_msgs
void
vox_nav_msgs__action__NavigateToPose_SendGoal_Request__fini(vox_nav_msgs__action__NavigateToPose_SendGoal_Request * msg);

/// Create action/NavigateToPose message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * vox_nav_msgs__action__NavigateToPose_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_vox_nav_msgs
vox_nav_msgs__action__NavigateToPose_SendGoal_Request *
vox_nav_msgs__action__NavigateToPose_SendGoal_Request__create();

/// Destroy action/NavigateToPose message.
/**
 * It calls
 * vox_nav_msgs__action__NavigateToPose_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vox_nav_msgs
void
vox_nav_msgs__action__NavigateToPose_SendGoal_Request__destroy(vox_nav_msgs__action__NavigateToPose_SendGoal_Request * msg);

/// Check for action/NavigateToPose message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_vox_nav_msgs
bool
vox_nav_msgs__action__NavigateToPose_SendGoal_Request__are_equal(const vox_nav_msgs__action__NavigateToPose_SendGoal_Request * lhs, const vox_nav_msgs__action__NavigateToPose_SendGoal_Request * rhs);

/// Copy a action/NavigateToPose message.
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
ROSIDL_GENERATOR_C_PUBLIC_vox_nav_msgs
bool
vox_nav_msgs__action__NavigateToPose_SendGoal_Request__copy(
  const vox_nav_msgs__action__NavigateToPose_SendGoal_Request * input,
  vox_nav_msgs__action__NavigateToPose_SendGoal_Request * output);

/// Initialize array of action/NavigateToPose messages.
/**
 * It allocates the memory for the number of elements and calls
 * vox_nav_msgs__action__NavigateToPose_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_vox_nav_msgs
bool
vox_nav_msgs__action__NavigateToPose_SendGoal_Request__Sequence__init(vox_nav_msgs__action__NavigateToPose_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/NavigateToPose messages.
/**
 * It calls
 * vox_nav_msgs__action__NavigateToPose_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vox_nav_msgs
void
vox_nav_msgs__action__NavigateToPose_SendGoal_Request__Sequence__fini(vox_nav_msgs__action__NavigateToPose_SendGoal_Request__Sequence * array);

/// Create array of action/NavigateToPose messages.
/**
 * It allocates the memory for the array and calls
 * vox_nav_msgs__action__NavigateToPose_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_vox_nav_msgs
vox_nav_msgs__action__NavigateToPose_SendGoal_Request__Sequence *
vox_nav_msgs__action__NavigateToPose_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/NavigateToPose messages.
/**
 * It calls
 * vox_nav_msgs__action__NavigateToPose_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vox_nav_msgs
void
vox_nav_msgs__action__NavigateToPose_SendGoal_Request__Sequence__destroy(vox_nav_msgs__action__NavigateToPose_SendGoal_Request__Sequence * array);

/// Check for action/NavigateToPose message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_vox_nav_msgs
bool
vox_nav_msgs__action__NavigateToPose_SendGoal_Request__Sequence__are_equal(const vox_nav_msgs__action__NavigateToPose_SendGoal_Request__Sequence * lhs, const vox_nav_msgs__action__NavigateToPose_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/NavigateToPose messages.
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
ROSIDL_GENERATOR_C_PUBLIC_vox_nav_msgs
bool
vox_nav_msgs__action__NavigateToPose_SendGoal_Request__Sequence__copy(
  const vox_nav_msgs__action__NavigateToPose_SendGoal_Request__Sequence * input,
  vox_nav_msgs__action__NavigateToPose_SendGoal_Request__Sequence * output);

/// Initialize action/NavigateToPose message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * vox_nav_msgs__action__NavigateToPose_SendGoal_Response
 * )) before or use
 * vox_nav_msgs__action__NavigateToPose_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_vox_nav_msgs
bool
vox_nav_msgs__action__NavigateToPose_SendGoal_Response__init(vox_nav_msgs__action__NavigateToPose_SendGoal_Response * msg);

/// Finalize action/NavigateToPose message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vox_nav_msgs
void
vox_nav_msgs__action__NavigateToPose_SendGoal_Response__fini(vox_nav_msgs__action__NavigateToPose_SendGoal_Response * msg);

/// Create action/NavigateToPose message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * vox_nav_msgs__action__NavigateToPose_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_vox_nav_msgs
vox_nav_msgs__action__NavigateToPose_SendGoal_Response *
vox_nav_msgs__action__NavigateToPose_SendGoal_Response__create();

/// Destroy action/NavigateToPose message.
/**
 * It calls
 * vox_nav_msgs__action__NavigateToPose_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vox_nav_msgs
void
vox_nav_msgs__action__NavigateToPose_SendGoal_Response__destroy(vox_nav_msgs__action__NavigateToPose_SendGoal_Response * msg);

/// Check for action/NavigateToPose message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_vox_nav_msgs
bool
vox_nav_msgs__action__NavigateToPose_SendGoal_Response__are_equal(const vox_nav_msgs__action__NavigateToPose_SendGoal_Response * lhs, const vox_nav_msgs__action__NavigateToPose_SendGoal_Response * rhs);

/// Copy a action/NavigateToPose message.
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
ROSIDL_GENERATOR_C_PUBLIC_vox_nav_msgs
bool
vox_nav_msgs__action__NavigateToPose_SendGoal_Response__copy(
  const vox_nav_msgs__action__NavigateToPose_SendGoal_Response * input,
  vox_nav_msgs__action__NavigateToPose_SendGoal_Response * output);

/// Initialize array of action/NavigateToPose messages.
/**
 * It allocates the memory for the number of elements and calls
 * vox_nav_msgs__action__NavigateToPose_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_vox_nav_msgs
bool
vox_nav_msgs__action__NavigateToPose_SendGoal_Response__Sequence__init(vox_nav_msgs__action__NavigateToPose_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/NavigateToPose messages.
/**
 * It calls
 * vox_nav_msgs__action__NavigateToPose_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vox_nav_msgs
void
vox_nav_msgs__action__NavigateToPose_SendGoal_Response__Sequence__fini(vox_nav_msgs__action__NavigateToPose_SendGoal_Response__Sequence * array);

/// Create array of action/NavigateToPose messages.
/**
 * It allocates the memory for the array and calls
 * vox_nav_msgs__action__NavigateToPose_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_vox_nav_msgs
vox_nav_msgs__action__NavigateToPose_SendGoal_Response__Sequence *
vox_nav_msgs__action__NavigateToPose_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/NavigateToPose messages.
/**
 * It calls
 * vox_nav_msgs__action__NavigateToPose_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vox_nav_msgs
void
vox_nav_msgs__action__NavigateToPose_SendGoal_Response__Sequence__destroy(vox_nav_msgs__action__NavigateToPose_SendGoal_Response__Sequence * array);

/// Check for action/NavigateToPose message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_vox_nav_msgs
bool
vox_nav_msgs__action__NavigateToPose_SendGoal_Response__Sequence__are_equal(const vox_nav_msgs__action__NavigateToPose_SendGoal_Response__Sequence * lhs, const vox_nav_msgs__action__NavigateToPose_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/NavigateToPose messages.
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
ROSIDL_GENERATOR_C_PUBLIC_vox_nav_msgs
bool
vox_nav_msgs__action__NavigateToPose_SendGoal_Response__Sequence__copy(
  const vox_nav_msgs__action__NavigateToPose_SendGoal_Response__Sequence * input,
  vox_nav_msgs__action__NavigateToPose_SendGoal_Response__Sequence * output);

/// Initialize action/NavigateToPose message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * vox_nav_msgs__action__NavigateToPose_GetResult_Request
 * )) before or use
 * vox_nav_msgs__action__NavigateToPose_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_vox_nav_msgs
bool
vox_nav_msgs__action__NavigateToPose_GetResult_Request__init(vox_nav_msgs__action__NavigateToPose_GetResult_Request * msg);

/// Finalize action/NavigateToPose message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vox_nav_msgs
void
vox_nav_msgs__action__NavigateToPose_GetResult_Request__fini(vox_nav_msgs__action__NavigateToPose_GetResult_Request * msg);

/// Create action/NavigateToPose message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * vox_nav_msgs__action__NavigateToPose_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_vox_nav_msgs
vox_nav_msgs__action__NavigateToPose_GetResult_Request *
vox_nav_msgs__action__NavigateToPose_GetResult_Request__create();

/// Destroy action/NavigateToPose message.
/**
 * It calls
 * vox_nav_msgs__action__NavigateToPose_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vox_nav_msgs
void
vox_nav_msgs__action__NavigateToPose_GetResult_Request__destroy(vox_nav_msgs__action__NavigateToPose_GetResult_Request * msg);

/// Check for action/NavigateToPose message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_vox_nav_msgs
bool
vox_nav_msgs__action__NavigateToPose_GetResult_Request__are_equal(const vox_nav_msgs__action__NavigateToPose_GetResult_Request * lhs, const vox_nav_msgs__action__NavigateToPose_GetResult_Request * rhs);

/// Copy a action/NavigateToPose message.
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
ROSIDL_GENERATOR_C_PUBLIC_vox_nav_msgs
bool
vox_nav_msgs__action__NavigateToPose_GetResult_Request__copy(
  const vox_nav_msgs__action__NavigateToPose_GetResult_Request * input,
  vox_nav_msgs__action__NavigateToPose_GetResult_Request * output);

/// Initialize array of action/NavigateToPose messages.
/**
 * It allocates the memory for the number of elements and calls
 * vox_nav_msgs__action__NavigateToPose_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_vox_nav_msgs
bool
vox_nav_msgs__action__NavigateToPose_GetResult_Request__Sequence__init(vox_nav_msgs__action__NavigateToPose_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/NavigateToPose messages.
/**
 * It calls
 * vox_nav_msgs__action__NavigateToPose_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vox_nav_msgs
void
vox_nav_msgs__action__NavigateToPose_GetResult_Request__Sequence__fini(vox_nav_msgs__action__NavigateToPose_GetResult_Request__Sequence * array);

/// Create array of action/NavigateToPose messages.
/**
 * It allocates the memory for the array and calls
 * vox_nav_msgs__action__NavigateToPose_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_vox_nav_msgs
vox_nav_msgs__action__NavigateToPose_GetResult_Request__Sequence *
vox_nav_msgs__action__NavigateToPose_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/NavigateToPose messages.
/**
 * It calls
 * vox_nav_msgs__action__NavigateToPose_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vox_nav_msgs
void
vox_nav_msgs__action__NavigateToPose_GetResult_Request__Sequence__destroy(vox_nav_msgs__action__NavigateToPose_GetResult_Request__Sequence * array);

/// Check for action/NavigateToPose message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_vox_nav_msgs
bool
vox_nav_msgs__action__NavigateToPose_GetResult_Request__Sequence__are_equal(const vox_nav_msgs__action__NavigateToPose_GetResult_Request__Sequence * lhs, const vox_nav_msgs__action__NavigateToPose_GetResult_Request__Sequence * rhs);

/// Copy an array of action/NavigateToPose messages.
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
ROSIDL_GENERATOR_C_PUBLIC_vox_nav_msgs
bool
vox_nav_msgs__action__NavigateToPose_GetResult_Request__Sequence__copy(
  const vox_nav_msgs__action__NavigateToPose_GetResult_Request__Sequence * input,
  vox_nav_msgs__action__NavigateToPose_GetResult_Request__Sequence * output);

/// Initialize action/NavigateToPose message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * vox_nav_msgs__action__NavigateToPose_GetResult_Response
 * )) before or use
 * vox_nav_msgs__action__NavigateToPose_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_vox_nav_msgs
bool
vox_nav_msgs__action__NavigateToPose_GetResult_Response__init(vox_nav_msgs__action__NavigateToPose_GetResult_Response * msg);

/// Finalize action/NavigateToPose message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vox_nav_msgs
void
vox_nav_msgs__action__NavigateToPose_GetResult_Response__fini(vox_nav_msgs__action__NavigateToPose_GetResult_Response * msg);

/// Create action/NavigateToPose message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * vox_nav_msgs__action__NavigateToPose_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_vox_nav_msgs
vox_nav_msgs__action__NavigateToPose_GetResult_Response *
vox_nav_msgs__action__NavigateToPose_GetResult_Response__create();

/// Destroy action/NavigateToPose message.
/**
 * It calls
 * vox_nav_msgs__action__NavigateToPose_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vox_nav_msgs
void
vox_nav_msgs__action__NavigateToPose_GetResult_Response__destroy(vox_nav_msgs__action__NavigateToPose_GetResult_Response * msg);

/// Check for action/NavigateToPose message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_vox_nav_msgs
bool
vox_nav_msgs__action__NavigateToPose_GetResult_Response__are_equal(const vox_nav_msgs__action__NavigateToPose_GetResult_Response * lhs, const vox_nav_msgs__action__NavigateToPose_GetResult_Response * rhs);

/// Copy a action/NavigateToPose message.
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
ROSIDL_GENERATOR_C_PUBLIC_vox_nav_msgs
bool
vox_nav_msgs__action__NavigateToPose_GetResult_Response__copy(
  const vox_nav_msgs__action__NavigateToPose_GetResult_Response * input,
  vox_nav_msgs__action__NavigateToPose_GetResult_Response * output);

/// Initialize array of action/NavigateToPose messages.
/**
 * It allocates the memory for the number of elements and calls
 * vox_nav_msgs__action__NavigateToPose_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_vox_nav_msgs
bool
vox_nav_msgs__action__NavigateToPose_GetResult_Response__Sequence__init(vox_nav_msgs__action__NavigateToPose_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/NavigateToPose messages.
/**
 * It calls
 * vox_nav_msgs__action__NavigateToPose_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vox_nav_msgs
void
vox_nav_msgs__action__NavigateToPose_GetResult_Response__Sequence__fini(vox_nav_msgs__action__NavigateToPose_GetResult_Response__Sequence * array);

/// Create array of action/NavigateToPose messages.
/**
 * It allocates the memory for the array and calls
 * vox_nav_msgs__action__NavigateToPose_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_vox_nav_msgs
vox_nav_msgs__action__NavigateToPose_GetResult_Response__Sequence *
vox_nav_msgs__action__NavigateToPose_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/NavigateToPose messages.
/**
 * It calls
 * vox_nav_msgs__action__NavigateToPose_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vox_nav_msgs
void
vox_nav_msgs__action__NavigateToPose_GetResult_Response__Sequence__destroy(vox_nav_msgs__action__NavigateToPose_GetResult_Response__Sequence * array);

/// Check for action/NavigateToPose message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_vox_nav_msgs
bool
vox_nav_msgs__action__NavigateToPose_GetResult_Response__Sequence__are_equal(const vox_nav_msgs__action__NavigateToPose_GetResult_Response__Sequence * lhs, const vox_nav_msgs__action__NavigateToPose_GetResult_Response__Sequence * rhs);

/// Copy an array of action/NavigateToPose messages.
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
ROSIDL_GENERATOR_C_PUBLIC_vox_nav_msgs
bool
vox_nav_msgs__action__NavigateToPose_GetResult_Response__Sequence__copy(
  const vox_nav_msgs__action__NavigateToPose_GetResult_Response__Sequence * input,
  vox_nav_msgs__action__NavigateToPose_GetResult_Response__Sequence * output);

/// Initialize action/NavigateToPose message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * vox_nav_msgs__action__NavigateToPose_FeedbackMessage
 * )) before or use
 * vox_nav_msgs__action__NavigateToPose_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_vox_nav_msgs
bool
vox_nav_msgs__action__NavigateToPose_FeedbackMessage__init(vox_nav_msgs__action__NavigateToPose_FeedbackMessage * msg);

/// Finalize action/NavigateToPose message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vox_nav_msgs
void
vox_nav_msgs__action__NavigateToPose_FeedbackMessage__fini(vox_nav_msgs__action__NavigateToPose_FeedbackMessage * msg);

/// Create action/NavigateToPose message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * vox_nav_msgs__action__NavigateToPose_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_vox_nav_msgs
vox_nav_msgs__action__NavigateToPose_FeedbackMessage *
vox_nav_msgs__action__NavigateToPose_FeedbackMessage__create();

/// Destroy action/NavigateToPose message.
/**
 * It calls
 * vox_nav_msgs__action__NavigateToPose_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vox_nav_msgs
void
vox_nav_msgs__action__NavigateToPose_FeedbackMessage__destroy(vox_nav_msgs__action__NavigateToPose_FeedbackMessage * msg);

/// Check for action/NavigateToPose message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_vox_nav_msgs
bool
vox_nav_msgs__action__NavigateToPose_FeedbackMessage__are_equal(const vox_nav_msgs__action__NavigateToPose_FeedbackMessage * lhs, const vox_nav_msgs__action__NavigateToPose_FeedbackMessage * rhs);

/// Copy a action/NavigateToPose message.
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
ROSIDL_GENERATOR_C_PUBLIC_vox_nav_msgs
bool
vox_nav_msgs__action__NavigateToPose_FeedbackMessage__copy(
  const vox_nav_msgs__action__NavigateToPose_FeedbackMessage * input,
  vox_nav_msgs__action__NavigateToPose_FeedbackMessage * output);

/// Initialize array of action/NavigateToPose messages.
/**
 * It allocates the memory for the number of elements and calls
 * vox_nav_msgs__action__NavigateToPose_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_vox_nav_msgs
bool
vox_nav_msgs__action__NavigateToPose_FeedbackMessage__Sequence__init(vox_nav_msgs__action__NavigateToPose_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/NavigateToPose messages.
/**
 * It calls
 * vox_nav_msgs__action__NavigateToPose_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vox_nav_msgs
void
vox_nav_msgs__action__NavigateToPose_FeedbackMessage__Sequence__fini(vox_nav_msgs__action__NavigateToPose_FeedbackMessage__Sequence * array);

/// Create array of action/NavigateToPose messages.
/**
 * It allocates the memory for the array and calls
 * vox_nav_msgs__action__NavigateToPose_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_vox_nav_msgs
vox_nav_msgs__action__NavigateToPose_FeedbackMessage__Sequence *
vox_nav_msgs__action__NavigateToPose_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/NavigateToPose messages.
/**
 * It calls
 * vox_nav_msgs__action__NavigateToPose_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vox_nav_msgs
void
vox_nav_msgs__action__NavigateToPose_FeedbackMessage__Sequence__destroy(vox_nav_msgs__action__NavigateToPose_FeedbackMessage__Sequence * array);

/// Check for action/NavigateToPose message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_vox_nav_msgs
bool
vox_nav_msgs__action__NavigateToPose_FeedbackMessage__Sequence__are_equal(const vox_nav_msgs__action__NavigateToPose_FeedbackMessage__Sequence * lhs, const vox_nav_msgs__action__NavigateToPose_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/NavigateToPose messages.
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
ROSIDL_GENERATOR_C_PUBLIC_vox_nav_msgs
bool
vox_nav_msgs__action__NavigateToPose_FeedbackMessage__Sequence__copy(
  const vox_nav_msgs__action__NavigateToPose_FeedbackMessage__Sequence * input,
  vox_nav_msgs__action__NavigateToPose_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // VOX_NAV_MSGS__ACTION__DETAIL__NAVIGATE_TO_POSE__FUNCTIONS_H_
