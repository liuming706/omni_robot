// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from uline_patrol_msgs:action/UlinePatrolCommand.idl
// generated code does not contain a copyright notice

#ifndef ULINE_PATROL_MSGS__ACTION__DETAIL__ULINE_PATROL_COMMAND__FUNCTIONS_H_
#define ULINE_PATROL_MSGS__ACTION__DETAIL__ULINE_PATROL_COMMAND__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "uline_patrol_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "uline_patrol_msgs/action/detail/uline_patrol_command__struct.h"

/// Initialize action/UlinePatrolCommand message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * uline_patrol_msgs__action__UlinePatrolCommand_Goal
 * )) before or use
 * uline_patrol_msgs__action__UlinePatrolCommand_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
bool
uline_patrol_msgs__action__UlinePatrolCommand_Goal__init(uline_patrol_msgs__action__UlinePatrolCommand_Goal * msg);

/// Finalize action/UlinePatrolCommand message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
void
uline_patrol_msgs__action__UlinePatrolCommand_Goal__fini(uline_patrol_msgs__action__UlinePatrolCommand_Goal * msg);

/// Create action/UlinePatrolCommand message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * uline_patrol_msgs__action__UlinePatrolCommand_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
uline_patrol_msgs__action__UlinePatrolCommand_Goal *
uline_patrol_msgs__action__UlinePatrolCommand_Goal__create();

/// Destroy action/UlinePatrolCommand message.
/**
 * It calls
 * uline_patrol_msgs__action__UlinePatrolCommand_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
void
uline_patrol_msgs__action__UlinePatrolCommand_Goal__destroy(uline_patrol_msgs__action__UlinePatrolCommand_Goal * msg);

/// Check for action/UlinePatrolCommand message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
bool
uline_patrol_msgs__action__UlinePatrolCommand_Goal__are_equal(const uline_patrol_msgs__action__UlinePatrolCommand_Goal * lhs, const uline_patrol_msgs__action__UlinePatrolCommand_Goal * rhs);

/// Copy a action/UlinePatrolCommand message.
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
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
bool
uline_patrol_msgs__action__UlinePatrolCommand_Goal__copy(
  const uline_patrol_msgs__action__UlinePatrolCommand_Goal * input,
  uline_patrol_msgs__action__UlinePatrolCommand_Goal * output);

/// Initialize array of action/UlinePatrolCommand messages.
/**
 * It allocates the memory for the number of elements and calls
 * uline_patrol_msgs__action__UlinePatrolCommand_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
bool
uline_patrol_msgs__action__UlinePatrolCommand_Goal__Sequence__init(uline_patrol_msgs__action__UlinePatrolCommand_Goal__Sequence * array, size_t size);

/// Finalize array of action/UlinePatrolCommand messages.
/**
 * It calls
 * uline_patrol_msgs__action__UlinePatrolCommand_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
void
uline_patrol_msgs__action__UlinePatrolCommand_Goal__Sequence__fini(uline_patrol_msgs__action__UlinePatrolCommand_Goal__Sequence * array);

/// Create array of action/UlinePatrolCommand messages.
/**
 * It allocates the memory for the array and calls
 * uline_patrol_msgs__action__UlinePatrolCommand_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
uline_patrol_msgs__action__UlinePatrolCommand_Goal__Sequence *
uline_patrol_msgs__action__UlinePatrolCommand_Goal__Sequence__create(size_t size);

/// Destroy array of action/UlinePatrolCommand messages.
/**
 * It calls
 * uline_patrol_msgs__action__UlinePatrolCommand_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
void
uline_patrol_msgs__action__UlinePatrolCommand_Goal__Sequence__destroy(uline_patrol_msgs__action__UlinePatrolCommand_Goal__Sequence * array);

/// Check for action/UlinePatrolCommand message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
bool
uline_patrol_msgs__action__UlinePatrolCommand_Goal__Sequence__are_equal(const uline_patrol_msgs__action__UlinePatrolCommand_Goal__Sequence * lhs, const uline_patrol_msgs__action__UlinePatrolCommand_Goal__Sequence * rhs);

/// Copy an array of action/UlinePatrolCommand messages.
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
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
bool
uline_patrol_msgs__action__UlinePatrolCommand_Goal__Sequence__copy(
  const uline_patrol_msgs__action__UlinePatrolCommand_Goal__Sequence * input,
  uline_patrol_msgs__action__UlinePatrolCommand_Goal__Sequence * output);

/// Initialize action/UlinePatrolCommand message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * uline_patrol_msgs__action__UlinePatrolCommand_Result
 * )) before or use
 * uline_patrol_msgs__action__UlinePatrolCommand_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
bool
uline_patrol_msgs__action__UlinePatrolCommand_Result__init(uline_patrol_msgs__action__UlinePatrolCommand_Result * msg);

/// Finalize action/UlinePatrolCommand message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
void
uline_patrol_msgs__action__UlinePatrolCommand_Result__fini(uline_patrol_msgs__action__UlinePatrolCommand_Result * msg);

/// Create action/UlinePatrolCommand message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * uline_patrol_msgs__action__UlinePatrolCommand_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
uline_patrol_msgs__action__UlinePatrolCommand_Result *
uline_patrol_msgs__action__UlinePatrolCommand_Result__create();

/// Destroy action/UlinePatrolCommand message.
/**
 * It calls
 * uline_patrol_msgs__action__UlinePatrolCommand_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
void
uline_patrol_msgs__action__UlinePatrolCommand_Result__destroy(uline_patrol_msgs__action__UlinePatrolCommand_Result * msg);

/// Check for action/UlinePatrolCommand message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
bool
uline_patrol_msgs__action__UlinePatrolCommand_Result__are_equal(const uline_patrol_msgs__action__UlinePatrolCommand_Result * lhs, const uline_patrol_msgs__action__UlinePatrolCommand_Result * rhs);

/// Copy a action/UlinePatrolCommand message.
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
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
bool
uline_patrol_msgs__action__UlinePatrolCommand_Result__copy(
  const uline_patrol_msgs__action__UlinePatrolCommand_Result * input,
  uline_patrol_msgs__action__UlinePatrolCommand_Result * output);

/// Initialize array of action/UlinePatrolCommand messages.
/**
 * It allocates the memory for the number of elements and calls
 * uline_patrol_msgs__action__UlinePatrolCommand_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
bool
uline_patrol_msgs__action__UlinePatrolCommand_Result__Sequence__init(uline_patrol_msgs__action__UlinePatrolCommand_Result__Sequence * array, size_t size);

/// Finalize array of action/UlinePatrolCommand messages.
/**
 * It calls
 * uline_patrol_msgs__action__UlinePatrolCommand_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
void
uline_patrol_msgs__action__UlinePatrolCommand_Result__Sequence__fini(uline_patrol_msgs__action__UlinePatrolCommand_Result__Sequence * array);

/// Create array of action/UlinePatrolCommand messages.
/**
 * It allocates the memory for the array and calls
 * uline_patrol_msgs__action__UlinePatrolCommand_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
uline_patrol_msgs__action__UlinePatrolCommand_Result__Sequence *
uline_patrol_msgs__action__UlinePatrolCommand_Result__Sequence__create(size_t size);

/// Destroy array of action/UlinePatrolCommand messages.
/**
 * It calls
 * uline_patrol_msgs__action__UlinePatrolCommand_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
void
uline_patrol_msgs__action__UlinePatrolCommand_Result__Sequence__destroy(uline_patrol_msgs__action__UlinePatrolCommand_Result__Sequence * array);

/// Check for action/UlinePatrolCommand message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
bool
uline_patrol_msgs__action__UlinePatrolCommand_Result__Sequence__are_equal(const uline_patrol_msgs__action__UlinePatrolCommand_Result__Sequence * lhs, const uline_patrol_msgs__action__UlinePatrolCommand_Result__Sequence * rhs);

/// Copy an array of action/UlinePatrolCommand messages.
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
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
bool
uline_patrol_msgs__action__UlinePatrolCommand_Result__Sequence__copy(
  const uline_patrol_msgs__action__UlinePatrolCommand_Result__Sequence * input,
  uline_patrol_msgs__action__UlinePatrolCommand_Result__Sequence * output);

/// Initialize action/UlinePatrolCommand message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * uline_patrol_msgs__action__UlinePatrolCommand_Feedback
 * )) before or use
 * uline_patrol_msgs__action__UlinePatrolCommand_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
bool
uline_patrol_msgs__action__UlinePatrolCommand_Feedback__init(uline_patrol_msgs__action__UlinePatrolCommand_Feedback * msg);

/// Finalize action/UlinePatrolCommand message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
void
uline_patrol_msgs__action__UlinePatrolCommand_Feedback__fini(uline_patrol_msgs__action__UlinePatrolCommand_Feedback * msg);

/// Create action/UlinePatrolCommand message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * uline_patrol_msgs__action__UlinePatrolCommand_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
uline_patrol_msgs__action__UlinePatrolCommand_Feedback *
uline_patrol_msgs__action__UlinePatrolCommand_Feedback__create();

/// Destroy action/UlinePatrolCommand message.
/**
 * It calls
 * uline_patrol_msgs__action__UlinePatrolCommand_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
void
uline_patrol_msgs__action__UlinePatrolCommand_Feedback__destroy(uline_patrol_msgs__action__UlinePatrolCommand_Feedback * msg);

/// Check for action/UlinePatrolCommand message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
bool
uline_patrol_msgs__action__UlinePatrolCommand_Feedback__are_equal(const uline_patrol_msgs__action__UlinePatrolCommand_Feedback * lhs, const uline_patrol_msgs__action__UlinePatrolCommand_Feedback * rhs);

/// Copy a action/UlinePatrolCommand message.
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
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
bool
uline_patrol_msgs__action__UlinePatrolCommand_Feedback__copy(
  const uline_patrol_msgs__action__UlinePatrolCommand_Feedback * input,
  uline_patrol_msgs__action__UlinePatrolCommand_Feedback * output);

/// Initialize array of action/UlinePatrolCommand messages.
/**
 * It allocates the memory for the number of elements and calls
 * uline_patrol_msgs__action__UlinePatrolCommand_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
bool
uline_patrol_msgs__action__UlinePatrolCommand_Feedback__Sequence__init(uline_patrol_msgs__action__UlinePatrolCommand_Feedback__Sequence * array, size_t size);

/// Finalize array of action/UlinePatrolCommand messages.
/**
 * It calls
 * uline_patrol_msgs__action__UlinePatrolCommand_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
void
uline_patrol_msgs__action__UlinePatrolCommand_Feedback__Sequence__fini(uline_patrol_msgs__action__UlinePatrolCommand_Feedback__Sequence * array);

/// Create array of action/UlinePatrolCommand messages.
/**
 * It allocates the memory for the array and calls
 * uline_patrol_msgs__action__UlinePatrolCommand_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
uline_patrol_msgs__action__UlinePatrolCommand_Feedback__Sequence *
uline_patrol_msgs__action__UlinePatrolCommand_Feedback__Sequence__create(size_t size);

/// Destroy array of action/UlinePatrolCommand messages.
/**
 * It calls
 * uline_patrol_msgs__action__UlinePatrolCommand_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
void
uline_patrol_msgs__action__UlinePatrolCommand_Feedback__Sequence__destroy(uline_patrol_msgs__action__UlinePatrolCommand_Feedback__Sequence * array);

/// Check for action/UlinePatrolCommand message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
bool
uline_patrol_msgs__action__UlinePatrolCommand_Feedback__Sequence__are_equal(const uline_patrol_msgs__action__UlinePatrolCommand_Feedback__Sequence * lhs, const uline_patrol_msgs__action__UlinePatrolCommand_Feedback__Sequence * rhs);

/// Copy an array of action/UlinePatrolCommand messages.
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
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
bool
uline_patrol_msgs__action__UlinePatrolCommand_Feedback__Sequence__copy(
  const uline_patrol_msgs__action__UlinePatrolCommand_Feedback__Sequence * input,
  uline_patrol_msgs__action__UlinePatrolCommand_Feedback__Sequence * output);

/// Initialize action/UlinePatrolCommand message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Request
 * )) before or use
 * uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
bool
uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Request__init(uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Request * msg);

/// Finalize action/UlinePatrolCommand message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
void
uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Request__fini(uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Request * msg);

/// Create action/UlinePatrolCommand message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Request *
uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Request__create();

/// Destroy action/UlinePatrolCommand message.
/**
 * It calls
 * uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
void
uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Request__destroy(uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Request * msg);

/// Check for action/UlinePatrolCommand message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
bool
uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Request__are_equal(const uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Request * lhs, const uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Request * rhs);

/// Copy a action/UlinePatrolCommand message.
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
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
bool
uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Request__copy(
  const uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Request * input,
  uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Request * output);

/// Initialize array of action/UlinePatrolCommand messages.
/**
 * It allocates the memory for the number of elements and calls
 * uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
bool
uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Request__Sequence__init(uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/UlinePatrolCommand messages.
/**
 * It calls
 * uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
void
uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Request__Sequence__fini(uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Request__Sequence * array);

/// Create array of action/UlinePatrolCommand messages.
/**
 * It allocates the memory for the array and calls
 * uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Request__Sequence *
uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/UlinePatrolCommand messages.
/**
 * It calls
 * uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
void
uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Request__Sequence__destroy(uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Request__Sequence * array);

/// Check for action/UlinePatrolCommand message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
bool
uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Request__Sequence__are_equal(const uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Request__Sequence * lhs, const uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/UlinePatrolCommand messages.
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
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
bool
uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Request__Sequence__copy(
  const uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Request__Sequence * input,
  uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Request__Sequence * output);

/// Initialize action/UlinePatrolCommand message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Response
 * )) before or use
 * uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
bool
uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Response__init(uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Response * msg);

/// Finalize action/UlinePatrolCommand message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
void
uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Response__fini(uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Response * msg);

/// Create action/UlinePatrolCommand message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Response *
uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Response__create();

/// Destroy action/UlinePatrolCommand message.
/**
 * It calls
 * uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
void
uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Response__destroy(uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Response * msg);

/// Check for action/UlinePatrolCommand message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
bool
uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Response__are_equal(const uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Response * lhs, const uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Response * rhs);

/// Copy a action/UlinePatrolCommand message.
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
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
bool
uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Response__copy(
  const uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Response * input,
  uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Response * output);

/// Initialize array of action/UlinePatrolCommand messages.
/**
 * It allocates the memory for the number of elements and calls
 * uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
bool
uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Response__Sequence__init(uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/UlinePatrolCommand messages.
/**
 * It calls
 * uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
void
uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Response__Sequence__fini(uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Response__Sequence * array);

/// Create array of action/UlinePatrolCommand messages.
/**
 * It allocates the memory for the array and calls
 * uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Response__Sequence *
uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/UlinePatrolCommand messages.
/**
 * It calls
 * uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
void
uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Response__Sequence__destroy(uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Response__Sequence * array);

/// Check for action/UlinePatrolCommand message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
bool
uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Response__Sequence__are_equal(const uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Response__Sequence * lhs, const uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/UlinePatrolCommand messages.
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
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
bool
uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Response__Sequence__copy(
  const uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Response__Sequence * input,
  uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Response__Sequence * output);

/// Initialize action/UlinePatrolCommand message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Request
 * )) before or use
 * uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
bool
uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Request__init(uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Request * msg);

/// Finalize action/UlinePatrolCommand message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
void
uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Request__fini(uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Request * msg);

/// Create action/UlinePatrolCommand message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Request *
uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Request__create();

/// Destroy action/UlinePatrolCommand message.
/**
 * It calls
 * uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
void
uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Request__destroy(uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Request * msg);

/// Check for action/UlinePatrolCommand message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
bool
uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Request__are_equal(const uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Request * lhs, const uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Request * rhs);

/// Copy a action/UlinePatrolCommand message.
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
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
bool
uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Request__copy(
  const uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Request * input,
  uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Request * output);

/// Initialize array of action/UlinePatrolCommand messages.
/**
 * It allocates the memory for the number of elements and calls
 * uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
bool
uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Request__Sequence__init(uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/UlinePatrolCommand messages.
/**
 * It calls
 * uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
void
uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Request__Sequence__fini(uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Request__Sequence * array);

/// Create array of action/UlinePatrolCommand messages.
/**
 * It allocates the memory for the array and calls
 * uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Request__Sequence *
uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/UlinePatrolCommand messages.
/**
 * It calls
 * uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
void
uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Request__Sequence__destroy(uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Request__Sequence * array);

/// Check for action/UlinePatrolCommand message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
bool
uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Request__Sequence__are_equal(const uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Request__Sequence * lhs, const uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Request__Sequence * rhs);

/// Copy an array of action/UlinePatrolCommand messages.
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
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
bool
uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Request__Sequence__copy(
  const uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Request__Sequence * input,
  uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Request__Sequence * output);

/// Initialize action/UlinePatrolCommand message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Response
 * )) before or use
 * uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
bool
uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Response__init(uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Response * msg);

/// Finalize action/UlinePatrolCommand message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
void
uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Response__fini(uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Response * msg);

/// Create action/UlinePatrolCommand message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Response *
uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Response__create();

/// Destroy action/UlinePatrolCommand message.
/**
 * It calls
 * uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
void
uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Response__destroy(uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Response * msg);

/// Check for action/UlinePatrolCommand message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
bool
uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Response__are_equal(const uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Response * lhs, const uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Response * rhs);

/// Copy a action/UlinePatrolCommand message.
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
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
bool
uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Response__copy(
  const uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Response * input,
  uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Response * output);

/// Initialize array of action/UlinePatrolCommand messages.
/**
 * It allocates the memory for the number of elements and calls
 * uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
bool
uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Response__Sequence__init(uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/UlinePatrolCommand messages.
/**
 * It calls
 * uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
void
uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Response__Sequence__fini(uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Response__Sequence * array);

/// Create array of action/UlinePatrolCommand messages.
/**
 * It allocates the memory for the array and calls
 * uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Response__Sequence *
uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/UlinePatrolCommand messages.
/**
 * It calls
 * uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
void
uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Response__Sequence__destroy(uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Response__Sequence * array);

/// Check for action/UlinePatrolCommand message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
bool
uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Response__Sequence__are_equal(const uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Response__Sequence * lhs, const uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Response__Sequence * rhs);

/// Copy an array of action/UlinePatrolCommand messages.
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
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
bool
uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Response__Sequence__copy(
  const uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Response__Sequence * input,
  uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Response__Sequence * output);

/// Initialize action/UlinePatrolCommand message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * uline_patrol_msgs__action__UlinePatrolCommand_FeedbackMessage
 * )) before or use
 * uline_patrol_msgs__action__UlinePatrolCommand_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
bool
uline_patrol_msgs__action__UlinePatrolCommand_FeedbackMessage__init(uline_patrol_msgs__action__UlinePatrolCommand_FeedbackMessage * msg);

/// Finalize action/UlinePatrolCommand message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
void
uline_patrol_msgs__action__UlinePatrolCommand_FeedbackMessage__fini(uline_patrol_msgs__action__UlinePatrolCommand_FeedbackMessage * msg);

/// Create action/UlinePatrolCommand message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * uline_patrol_msgs__action__UlinePatrolCommand_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
uline_patrol_msgs__action__UlinePatrolCommand_FeedbackMessage *
uline_patrol_msgs__action__UlinePatrolCommand_FeedbackMessage__create();

/// Destroy action/UlinePatrolCommand message.
/**
 * It calls
 * uline_patrol_msgs__action__UlinePatrolCommand_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
void
uline_patrol_msgs__action__UlinePatrolCommand_FeedbackMessage__destroy(uline_patrol_msgs__action__UlinePatrolCommand_FeedbackMessage * msg);

/// Check for action/UlinePatrolCommand message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
bool
uline_patrol_msgs__action__UlinePatrolCommand_FeedbackMessage__are_equal(const uline_patrol_msgs__action__UlinePatrolCommand_FeedbackMessage * lhs, const uline_patrol_msgs__action__UlinePatrolCommand_FeedbackMessage * rhs);

/// Copy a action/UlinePatrolCommand message.
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
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
bool
uline_patrol_msgs__action__UlinePatrolCommand_FeedbackMessage__copy(
  const uline_patrol_msgs__action__UlinePatrolCommand_FeedbackMessage * input,
  uline_patrol_msgs__action__UlinePatrolCommand_FeedbackMessage * output);

/// Initialize array of action/UlinePatrolCommand messages.
/**
 * It allocates the memory for the number of elements and calls
 * uline_patrol_msgs__action__UlinePatrolCommand_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
bool
uline_patrol_msgs__action__UlinePatrolCommand_FeedbackMessage__Sequence__init(uline_patrol_msgs__action__UlinePatrolCommand_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/UlinePatrolCommand messages.
/**
 * It calls
 * uline_patrol_msgs__action__UlinePatrolCommand_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
void
uline_patrol_msgs__action__UlinePatrolCommand_FeedbackMessage__Sequence__fini(uline_patrol_msgs__action__UlinePatrolCommand_FeedbackMessage__Sequence * array);

/// Create array of action/UlinePatrolCommand messages.
/**
 * It allocates the memory for the array and calls
 * uline_patrol_msgs__action__UlinePatrolCommand_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
uline_patrol_msgs__action__UlinePatrolCommand_FeedbackMessage__Sequence *
uline_patrol_msgs__action__UlinePatrolCommand_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/UlinePatrolCommand messages.
/**
 * It calls
 * uline_patrol_msgs__action__UlinePatrolCommand_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
void
uline_patrol_msgs__action__UlinePatrolCommand_FeedbackMessage__Sequence__destroy(uline_patrol_msgs__action__UlinePatrolCommand_FeedbackMessage__Sequence * array);

/// Check for action/UlinePatrolCommand message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
bool
uline_patrol_msgs__action__UlinePatrolCommand_FeedbackMessage__Sequence__are_equal(const uline_patrol_msgs__action__UlinePatrolCommand_FeedbackMessage__Sequence * lhs, const uline_patrol_msgs__action__UlinePatrolCommand_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/UlinePatrolCommand messages.
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
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
bool
uline_patrol_msgs__action__UlinePatrolCommand_FeedbackMessage__Sequence__copy(
  const uline_patrol_msgs__action__UlinePatrolCommand_FeedbackMessage__Sequence * input,
  uline_patrol_msgs__action__UlinePatrolCommand_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ULINE_PATROL_MSGS__ACTION__DETAIL__ULINE_PATROL_COMMAND__FUNCTIONS_H_
