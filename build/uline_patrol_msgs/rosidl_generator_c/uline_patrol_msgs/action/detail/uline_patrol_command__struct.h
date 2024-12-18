// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from uline_patrol_msgs:action/UlinePatrolCommand.idl
// generated code does not contain a copyright notice

#ifndef ULINE_PATROL_MSGS__ACTION__DETAIL__ULINE_PATROL_COMMAND__STRUCT_H_
#define ULINE_PATROL_MSGS__ACTION__DETAIL__ULINE_PATROL_COMMAND__STRUCT_H_

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

/// Struct defined in action/UlinePatrolCommand in the package uline_patrol_msgs.
typedef struct uline_patrol_msgs__action__UlinePatrolCommand_Goal
{
  rosidl_runtime_c__String command;
  int64_t initial_dis;
  double velocity;
  double duration;
  double obstacle_stop_time;
  double apriltag_stop_distance;
} uline_patrol_msgs__action__UlinePatrolCommand_Goal;

// Struct for a sequence of uline_patrol_msgs__action__UlinePatrolCommand_Goal.
typedef struct uline_patrol_msgs__action__UlinePatrolCommand_Goal__Sequence
{
  uline_patrol_msgs__action__UlinePatrolCommand_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} uline_patrol_msgs__action__UlinePatrolCommand_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'state'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/UlinePatrolCommand in the package uline_patrol_msgs.
typedef struct uline_patrol_msgs__action__UlinePatrolCommand_Result
{
  /// -1:未知命令;0:正常结束;1:图像未初始化结束;2:腿部服务未成功调用结束;3:指定时间持续有障碍物结束;4:指定范围有二维码结束;
  int64_t ret_code;
  rosidl_runtime_c__String state;
} uline_patrol_msgs__action__UlinePatrolCommand_Result;

// Struct for a sequence of uline_patrol_msgs__action__UlinePatrolCommand_Result.
typedef struct uline_patrol_msgs__action__UlinePatrolCommand_Result__Sequence
{
  uline_patrol_msgs__action__UlinePatrolCommand_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} uline_patrol_msgs__action__UlinePatrolCommand_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'state'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/UlinePatrolCommand in the package uline_patrol_msgs.
typedef struct uline_patrol_msgs__action__UlinePatrolCommand_Feedback
{
  double elapsed_time;
  rosidl_runtime_c__String state;
} uline_patrol_msgs__action__UlinePatrolCommand_Feedback;

// Struct for a sequence of uline_patrol_msgs__action__UlinePatrolCommand_Feedback.
typedef struct uline_patrol_msgs__action__UlinePatrolCommand_Feedback__Sequence
{
  uline_patrol_msgs__action__UlinePatrolCommand_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} uline_patrol_msgs__action__UlinePatrolCommand_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "uline_patrol_msgs/action/detail/uline_patrol_command__struct.h"

/// Struct defined in action/UlinePatrolCommand in the package uline_patrol_msgs.
typedef struct uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  uline_patrol_msgs__action__UlinePatrolCommand_Goal goal;
} uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Request;

// Struct for a sequence of uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Request.
typedef struct uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Request__Sequence
{
  uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/UlinePatrolCommand in the package uline_patrol_msgs.
typedef struct uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Response;

// Struct for a sequence of uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Response.
typedef struct uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Response__Sequence
{
  uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/UlinePatrolCommand in the package uline_patrol_msgs.
typedef struct uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Request;

// Struct for a sequence of uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Request.
typedef struct uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Request__Sequence
{
  uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "uline_patrol_msgs/action/detail/uline_patrol_command__struct.h"

/// Struct defined in action/UlinePatrolCommand in the package uline_patrol_msgs.
typedef struct uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Response
{
  int8_t status;
  uline_patrol_msgs__action__UlinePatrolCommand_Result result;
} uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Response;

// Struct for a sequence of uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Response.
typedef struct uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Response__Sequence
{
  uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "uline_patrol_msgs/action/detail/uline_patrol_command__struct.h"

/// Struct defined in action/UlinePatrolCommand in the package uline_patrol_msgs.
typedef struct uline_patrol_msgs__action__UlinePatrolCommand_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  uline_patrol_msgs__action__UlinePatrolCommand_Feedback feedback;
} uline_patrol_msgs__action__UlinePatrolCommand_FeedbackMessage;

// Struct for a sequence of uline_patrol_msgs__action__UlinePatrolCommand_FeedbackMessage.
typedef struct uline_patrol_msgs__action__UlinePatrolCommand_FeedbackMessage__Sequence
{
  uline_patrol_msgs__action__UlinePatrolCommand_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} uline_patrol_msgs__action__UlinePatrolCommand_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ULINE_PATROL_MSGS__ACTION__DETAIL__ULINE_PATROL_COMMAND__STRUCT_H_
