// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from uline_patrol_msgs:srv/UlinePatrolCommand.idl
// generated code does not contain a copyright notice

#ifndef ULINE_PATROL_MSGS__SRV__DETAIL__ULINE_PATROL_COMMAND__FUNCTIONS_H_
#define ULINE_PATROL_MSGS__SRV__DETAIL__ULINE_PATROL_COMMAND__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "uline_patrol_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "uline_patrol_msgs/srv/detail/uline_patrol_command__struct.h"

/// Initialize srv/UlinePatrolCommand message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * uline_patrol_msgs__srv__UlinePatrolCommand_Request
 * )) before or use
 * uline_patrol_msgs__srv__UlinePatrolCommand_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
bool
uline_patrol_msgs__srv__UlinePatrolCommand_Request__init(uline_patrol_msgs__srv__UlinePatrolCommand_Request * msg);

/// Finalize srv/UlinePatrolCommand message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
void
uline_patrol_msgs__srv__UlinePatrolCommand_Request__fini(uline_patrol_msgs__srv__UlinePatrolCommand_Request * msg);

/// Create srv/UlinePatrolCommand message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * uline_patrol_msgs__srv__UlinePatrolCommand_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
uline_patrol_msgs__srv__UlinePatrolCommand_Request *
uline_patrol_msgs__srv__UlinePatrolCommand_Request__create();

/// Destroy srv/UlinePatrolCommand message.
/**
 * It calls
 * uline_patrol_msgs__srv__UlinePatrolCommand_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
void
uline_patrol_msgs__srv__UlinePatrolCommand_Request__destroy(uline_patrol_msgs__srv__UlinePatrolCommand_Request * msg);

/// Check for srv/UlinePatrolCommand message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
bool
uline_patrol_msgs__srv__UlinePatrolCommand_Request__are_equal(const uline_patrol_msgs__srv__UlinePatrolCommand_Request * lhs, const uline_patrol_msgs__srv__UlinePatrolCommand_Request * rhs);

/// Copy a srv/UlinePatrolCommand message.
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
uline_patrol_msgs__srv__UlinePatrolCommand_Request__copy(
  const uline_patrol_msgs__srv__UlinePatrolCommand_Request * input,
  uline_patrol_msgs__srv__UlinePatrolCommand_Request * output);

/// Initialize array of srv/UlinePatrolCommand messages.
/**
 * It allocates the memory for the number of elements and calls
 * uline_patrol_msgs__srv__UlinePatrolCommand_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
bool
uline_patrol_msgs__srv__UlinePatrolCommand_Request__Sequence__init(uline_patrol_msgs__srv__UlinePatrolCommand_Request__Sequence * array, size_t size);

/// Finalize array of srv/UlinePatrolCommand messages.
/**
 * It calls
 * uline_patrol_msgs__srv__UlinePatrolCommand_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
void
uline_patrol_msgs__srv__UlinePatrolCommand_Request__Sequence__fini(uline_patrol_msgs__srv__UlinePatrolCommand_Request__Sequence * array);

/// Create array of srv/UlinePatrolCommand messages.
/**
 * It allocates the memory for the array and calls
 * uline_patrol_msgs__srv__UlinePatrolCommand_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
uline_patrol_msgs__srv__UlinePatrolCommand_Request__Sequence *
uline_patrol_msgs__srv__UlinePatrolCommand_Request__Sequence__create(size_t size);

/// Destroy array of srv/UlinePatrolCommand messages.
/**
 * It calls
 * uline_patrol_msgs__srv__UlinePatrolCommand_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
void
uline_patrol_msgs__srv__UlinePatrolCommand_Request__Sequence__destroy(uline_patrol_msgs__srv__UlinePatrolCommand_Request__Sequence * array);

/// Check for srv/UlinePatrolCommand message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
bool
uline_patrol_msgs__srv__UlinePatrolCommand_Request__Sequence__are_equal(const uline_patrol_msgs__srv__UlinePatrolCommand_Request__Sequence * lhs, const uline_patrol_msgs__srv__UlinePatrolCommand_Request__Sequence * rhs);

/// Copy an array of srv/UlinePatrolCommand messages.
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
uline_patrol_msgs__srv__UlinePatrolCommand_Request__Sequence__copy(
  const uline_patrol_msgs__srv__UlinePatrolCommand_Request__Sequence * input,
  uline_patrol_msgs__srv__UlinePatrolCommand_Request__Sequence * output);

/// Initialize srv/UlinePatrolCommand message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * uline_patrol_msgs__srv__UlinePatrolCommand_Response
 * )) before or use
 * uline_patrol_msgs__srv__UlinePatrolCommand_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
bool
uline_patrol_msgs__srv__UlinePatrolCommand_Response__init(uline_patrol_msgs__srv__UlinePatrolCommand_Response * msg);

/// Finalize srv/UlinePatrolCommand message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
void
uline_patrol_msgs__srv__UlinePatrolCommand_Response__fini(uline_patrol_msgs__srv__UlinePatrolCommand_Response * msg);

/// Create srv/UlinePatrolCommand message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * uline_patrol_msgs__srv__UlinePatrolCommand_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
uline_patrol_msgs__srv__UlinePatrolCommand_Response *
uline_patrol_msgs__srv__UlinePatrolCommand_Response__create();

/// Destroy srv/UlinePatrolCommand message.
/**
 * It calls
 * uline_patrol_msgs__srv__UlinePatrolCommand_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
void
uline_patrol_msgs__srv__UlinePatrolCommand_Response__destroy(uline_patrol_msgs__srv__UlinePatrolCommand_Response * msg);

/// Check for srv/UlinePatrolCommand message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
bool
uline_patrol_msgs__srv__UlinePatrolCommand_Response__are_equal(const uline_patrol_msgs__srv__UlinePatrolCommand_Response * lhs, const uline_patrol_msgs__srv__UlinePatrolCommand_Response * rhs);

/// Copy a srv/UlinePatrolCommand message.
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
uline_patrol_msgs__srv__UlinePatrolCommand_Response__copy(
  const uline_patrol_msgs__srv__UlinePatrolCommand_Response * input,
  uline_patrol_msgs__srv__UlinePatrolCommand_Response * output);

/// Initialize array of srv/UlinePatrolCommand messages.
/**
 * It allocates the memory for the number of elements and calls
 * uline_patrol_msgs__srv__UlinePatrolCommand_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
bool
uline_patrol_msgs__srv__UlinePatrolCommand_Response__Sequence__init(uline_patrol_msgs__srv__UlinePatrolCommand_Response__Sequence * array, size_t size);

/// Finalize array of srv/UlinePatrolCommand messages.
/**
 * It calls
 * uline_patrol_msgs__srv__UlinePatrolCommand_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
void
uline_patrol_msgs__srv__UlinePatrolCommand_Response__Sequence__fini(uline_patrol_msgs__srv__UlinePatrolCommand_Response__Sequence * array);

/// Create array of srv/UlinePatrolCommand messages.
/**
 * It allocates the memory for the array and calls
 * uline_patrol_msgs__srv__UlinePatrolCommand_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
uline_patrol_msgs__srv__UlinePatrolCommand_Response__Sequence *
uline_patrol_msgs__srv__UlinePatrolCommand_Response__Sequence__create(size_t size);

/// Destroy array of srv/UlinePatrolCommand messages.
/**
 * It calls
 * uline_patrol_msgs__srv__UlinePatrolCommand_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
void
uline_patrol_msgs__srv__UlinePatrolCommand_Response__Sequence__destroy(uline_patrol_msgs__srv__UlinePatrolCommand_Response__Sequence * array);

/// Check for srv/UlinePatrolCommand message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_uline_patrol_msgs
bool
uline_patrol_msgs__srv__UlinePatrolCommand_Response__Sequence__are_equal(const uline_patrol_msgs__srv__UlinePatrolCommand_Response__Sequence * lhs, const uline_patrol_msgs__srv__UlinePatrolCommand_Response__Sequence * rhs);

/// Copy an array of srv/UlinePatrolCommand messages.
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
uline_patrol_msgs__srv__UlinePatrolCommand_Response__Sequence__copy(
  const uline_patrol_msgs__srv__UlinePatrolCommand_Response__Sequence * input,
  uline_patrol_msgs__srv__UlinePatrolCommand_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ULINE_PATROL_MSGS__SRV__DETAIL__ULINE_PATROL_COMMAND__FUNCTIONS_H_
