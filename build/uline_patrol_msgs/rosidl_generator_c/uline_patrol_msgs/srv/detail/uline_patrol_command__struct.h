// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from uline_patrol_msgs:srv/UlinePatrolCommand.idl
// generated code does not contain a copyright notice

#ifndef ULINE_PATROL_MSGS__SRV__DETAIL__ULINE_PATROL_COMMAND__STRUCT_H_
#define ULINE_PATROL_MSGS__SRV__DETAIL__ULINE_PATROL_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'command'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/UlinePatrolCommand in the package uline_patrol_msgs.
typedef struct uline_patrol_msgs__srv__UlinePatrolCommand_Request
{
  rosidl_runtime_c__String command;
  int64_t initial_dis;
  double velocity;
  double duration;
} uline_patrol_msgs__srv__UlinePatrolCommand_Request;

// Struct for a sequence of uline_patrol_msgs__srv__UlinePatrolCommand_Request.
typedef struct uline_patrol_msgs__srv__UlinePatrolCommand_Request__Sequence
{
  uline_patrol_msgs__srv__UlinePatrolCommand_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} uline_patrol_msgs__srv__UlinePatrolCommand_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/UlinePatrolCommand in the package uline_patrol_msgs.
typedef struct uline_patrol_msgs__srv__UlinePatrolCommand_Response
{
  bool success;
  rosidl_runtime_c__String message;
} uline_patrol_msgs__srv__UlinePatrolCommand_Response;

// Struct for a sequence of uline_patrol_msgs__srv__UlinePatrolCommand_Response.
typedef struct uline_patrol_msgs__srv__UlinePatrolCommand_Response__Sequence
{
  uline_patrol_msgs__srv__UlinePatrolCommand_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} uline_patrol_msgs__srv__UlinePatrolCommand_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ULINE_PATROL_MSGS__SRV__DETAIL__ULINE_PATROL_COMMAND__STRUCT_H_
