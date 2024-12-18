// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from uline_patrol_msgs:action/UlinePatrolCommand.idl
// generated code does not contain a copyright notice

#ifndef ULINE_PATROL_MSGS__ACTION__DETAIL__ULINE_PATROL_COMMAND__TRAITS_HPP_
#define ULINE_PATROL_MSGS__ACTION__DETAIL__ULINE_PATROL_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "uline_patrol_msgs/action/detail/uline_patrol_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace uline_patrol_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const UlinePatrolCommand_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: command
  {
    out << "command: ";
    rosidl_generator_traits::value_to_yaml(msg.command, out);
    out << ", ";
  }

  // member: initial_dis
  {
    out << "initial_dis: ";
    rosidl_generator_traits::value_to_yaml(msg.initial_dis, out);
    out << ", ";
  }

  // member: velocity
  {
    out << "velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity, out);
    out << ", ";
  }

  // member: duration
  {
    out << "duration: ";
    rosidl_generator_traits::value_to_yaml(msg.duration, out);
    out << ", ";
  }

  // member: obstacle_stop_time
  {
    out << "obstacle_stop_time: ";
    rosidl_generator_traits::value_to_yaml(msg.obstacle_stop_time, out);
    out << ", ";
  }

  // member: apriltag_stop_distance
  {
    out << "apriltag_stop_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.apriltag_stop_distance, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const UlinePatrolCommand_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "command: ";
    rosidl_generator_traits::value_to_yaml(msg.command, out);
    out << "\n";
  }

  // member: initial_dis
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "initial_dis: ";
    rosidl_generator_traits::value_to_yaml(msg.initial_dis, out);
    out << "\n";
  }

  // member: velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity, out);
    out << "\n";
  }

  // member: duration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "duration: ";
    rosidl_generator_traits::value_to_yaml(msg.duration, out);
    out << "\n";
  }

  // member: obstacle_stop_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "obstacle_stop_time: ";
    rosidl_generator_traits::value_to_yaml(msg.obstacle_stop_time, out);
    out << "\n";
  }

  // member: apriltag_stop_distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "apriltag_stop_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.apriltag_stop_distance, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const UlinePatrolCommand_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace uline_patrol_msgs

namespace rosidl_generator_traits
{

[[deprecated("use uline_patrol_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const uline_patrol_msgs::action::UlinePatrolCommand_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  uline_patrol_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use uline_patrol_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const uline_patrol_msgs::action::UlinePatrolCommand_Goal & msg)
{
  return uline_patrol_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<uline_patrol_msgs::action::UlinePatrolCommand_Goal>()
{
  return "uline_patrol_msgs::action::UlinePatrolCommand_Goal";
}

template<>
inline const char * name<uline_patrol_msgs::action::UlinePatrolCommand_Goal>()
{
  return "uline_patrol_msgs/action/UlinePatrolCommand_Goal";
}

template<>
struct has_fixed_size<uline_patrol_msgs::action::UlinePatrolCommand_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<uline_patrol_msgs::action::UlinePatrolCommand_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<uline_patrol_msgs::action::UlinePatrolCommand_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace uline_patrol_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const UlinePatrolCommand_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: ret_code
  {
    out << "ret_code: ";
    rosidl_generator_traits::value_to_yaml(msg.ret_code, out);
    out << ", ";
  }

  // member: state
  {
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const UlinePatrolCommand_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: ret_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ret_code: ";
    rosidl_generator_traits::value_to_yaml(msg.ret_code, out);
    out << "\n";
  }

  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const UlinePatrolCommand_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace uline_patrol_msgs

namespace rosidl_generator_traits
{

[[deprecated("use uline_patrol_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const uline_patrol_msgs::action::UlinePatrolCommand_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  uline_patrol_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use uline_patrol_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const uline_patrol_msgs::action::UlinePatrolCommand_Result & msg)
{
  return uline_patrol_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<uline_patrol_msgs::action::UlinePatrolCommand_Result>()
{
  return "uline_patrol_msgs::action::UlinePatrolCommand_Result";
}

template<>
inline const char * name<uline_patrol_msgs::action::UlinePatrolCommand_Result>()
{
  return "uline_patrol_msgs/action/UlinePatrolCommand_Result";
}

template<>
struct has_fixed_size<uline_patrol_msgs::action::UlinePatrolCommand_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<uline_patrol_msgs::action::UlinePatrolCommand_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<uline_patrol_msgs::action::UlinePatrolCommand_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace uline_patrol_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const UlinePatrolCommand_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: elapsed_time
  {
    out << "elapsed_time: ";
    rosidl_generator_traits::value_to_yaml(msg.elapsed_time, out);
    out << ", ";
  }

  // member: state
  {
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const UlinePatrolCommand_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: elapsed_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "elapsed_time: ";
    rosidl_generator_traits::value_to_yaml(msg.elapsed_time, out);
    out << "\n";
  }

  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const UlinePatrolCommand_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace uline_patrol_msgs

namespace rosidl_generator_traits
{

[[deprecated("use uline_patrol_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const uline_patrol_msgs::action::UlinePatrolCommand_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  uline_patrol_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use uline_patrol_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const uline_patrol_msgs::action::UlinePatrolCommand_Feedback & msg)
{
  return uline_patrol_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<uline_patrol_msgs::action::UlinePatrolCommand_Feedback>()
{
  return "uline_patrol_msgs::action::UlinePatrolCommand_Feedback";
}

template<>
inline const char * name<uline_patrol_msgs::action::UlinePatrolCommand_Feedback>()
{
  return "uline_patrol_msgs/action/UlinePatrolCommand_Feedback";
}

template<>
struct has_fixed_size<uline_patrol_msgs::action::UlinePatrolCommand_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<uline_patrol_msgs::action::UlinePatrolCommand_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<uline_patrol_msgs::action::UlinePatrolCommand_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "uline_patrol_msgs/action/detail/uline_patrol_command__traits.hpp"

namespace uline_patrol_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const UlinePatrolCommand_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const UlinePatrolCommand_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const UlinePatrolCommand_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace uline_patrol_msgs

namespace rosidl_generator_traits
{

[[deprecated("use uline_patrol_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const uline_patrol_msgs::action::UlinePatrolCommand_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  uline_patrol_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use uline_patrol_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const uline_patrol_msgs::action::UlinePatrolCommand_SendGoal_Request & msg)
{
  return uline_patrol_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<uline_patrol_msgs::action::UlinePatrolCommand_SendGoal_Request>()
{
  return "uline_patrol_msgs::action::UlinePatrolCommand_SendGoal_Request";
}

template<>
inline const char * name<uline_patrol_msgs::action::UlinePatrolCommand_SendGoal_Request>()
{
  return "uline_patrol_msgs/action/UlinePatrolCommand_SendGoal_Request";
}

template<>
struct has_fixed_size<uline_patrol_msgs::action::UlinePatrolCommand_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<uline_patrol_msgs::action::UlinePatrolCommand_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<uline_patrol_msgs::action::UlinePatrolCommand_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<uline_patrol_msgs::action::UlinePatrolCommand_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<uline_patrol_msgs::action::UlinePatrolCommand_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace uline_patrol_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const UlinePatrolCommand_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const UlinePatrolCommand_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const UlinePatrolCommand_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace uline_patrol_msgs

namespace rosidl_generator_traits
{

[[deprecated("use uline_patrol_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const uline_patrol_msgs::action::UlinePatrolCommand_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  uline_patrol_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use uline_patrol_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const uline_patrol_msgs::action::UlinePatrolCommand_SendGoal_Response & msg)
{
  return uline_patrol_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<uline_patrol_msgs::action::UlinePatrolCommand_SendGoal_Response>()
{
  return "uline_patrol_msgs::action::UlinePatrolCommand_SendGoal_Response";
}

template<>
inline const char * name<uline_patrol_msgs::action::UlinePatrolCommand_SendGoal_Response>()
{
  return "uline_patrol_msgs/action/UlinePatrolCommand_SendGoal_Response";
}

template<>
struct has_fixed_size<uline_patrol_msgs::action::UlinePatrolCommand_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<uline_patrol_msgs::action::UlinePatrolCommand_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<uline_patrol_msgs::action::UlinePatrolCommand_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<uline_patrol_msgs::action::UlinePatrolCommand_SendGoal>()
{
  return "uline_patrol_msgs::action::UlinePatrolCommand_SendGoal";
}

template<>
inline const char * name<uline_patrol_msgs::action::UlinePatrolCommand_SendGoal>()
{
  return "uline_patrol_msgs/action/UlinePatrolCommand_SendGoal";
}

template<>
struct has_fixed_size<uline_patrol_msgs::action::UlinePatrolCommand_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<uline_patrol_msgs::action::UlinePatrolCommand_SendGoal_Request>::value &&
    has_fixed_size<uline_patrol_msgs::action::UlinePatrolCommand_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<uline_patrol_msgs::action::UlinePatrolCommand_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<uline_patrol_msgs::action::UlinePatrolCommand_SendGoal_Request>::value &&
    has_bounded_size<uline_patrol_msgs::action::UlinePatrolCommand_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<uline_patrol_msgs::action::UlinePatrolCommand_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<uline_patrol_msgs::action::UlinePatrolCommand_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<uline_patrol_msgs::action::UlinePatrolCommand_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace uline_patrol_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const UlinePatrolCommand_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const UlinePatrolCommand_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const UlinePatrolCommand_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace uline_patrol_msgs

namespace rosidl_generator_traits
{

[[deprecated("use uline_patrol_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const uline_patrol_msgs::action::UlinePatrolCommand_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  uline_patrol_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use uline_patrol_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const uline_patrol_msgs::action::UlinePatrolCommand_GetResult_Request & msg)
{
  return uline_patrol_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<uline_patrol_msgs::action::UlinePatrolCommand_GetResult_Request>()
{
  return "uline_patrol_msgs::action::UlinePatrolCommand_GetResult_Request";
}

template<>
inline const char * name<uline_patrol_msgs::action::UlinePatrolCommand_GetResult_Request>()
{
  return "uline_patrol_msgs/action/UlinePatrolCommand_GetResult_Request";
}

template<>
struct has_fixed_size<uline_patrol_msgs::action::UlinePatrolCommand_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<uline_patrol_msgs::action::UlinePatrolCommand_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<uline_patrol_msgs::action::UlinePatrolCommand_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "uline_patrol_msgs/action/detail/uline_patrol_command__traits.hpp"

namespace uline_patrol_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const UlinePatrolCommand_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const UlinePatrolCommand_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const UlinePatrolCommand_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace uline_patrol_msgs

namespace rosidl_generator_traits
{

[[deprecated("use uline_patrol_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const uline_patrol_msgs::action::UlinePatrolCommand_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  uline_patrol_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use uline_patrol_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const uline_patrol_msgs::action::UlinePatrolCommand_GetResult_Response & msg)
{
  return uline_patrol_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<uline_patrol_msgs::action::UlinePatrolCommand_GetResult_Response>()
{
  return "uline_patrol_msgs::action::UlinePatrolCommand_GetResult_Response";
}

template<>
inline const char * name<uline_patrol_msgs::action::UlinePatrolCommand_GetResult_Response>()
{
  return "uline_patrol_msgs/action/UlinePatrolCommand_GetResult_Response";
}

template<>
struct has_fixed_size<uline_patrol_msgs::action::UlinePatrolCommand_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<uline_patrol_msgs::action::UlinePatrolCommand_Result>::value> {};

template<>
struct has_bounded_size<uline_patrol_msgs::action::UlinePatrolCommand_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<uline_patrol_msgs::action::UlinePatrolCommand_Result>::value> {};

template<>
struct is_message<uline_patrol_msgs::action::UlinePatrolCommand_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<uline_patrol_msgs::action::UlinePatrolCommand_GetResult>()
{
  return "uline_patrol_msgs::action::UlinePatrolCommand_GetResult";
}

template<>
inline const char * name<uline_patrol_msgs::action::UlinePatrolCommand_GetResult>()
{
  return "uline_patrol_msgs/action/UlinePatrolCommand_GetResult";
}

template<>
struct has_fixed_size<uline_patrol_msgs::action::UlinePatrolCommand_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<uline_patrol_msgs::action::UlinePatrolCommand_GetResult_Request>::value &&
    has_fixed_size<uline_patrol_msgs::action::UlinePatrolCommand_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<uline_patrol_msgs::action::UlinePatrolCommand_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<uline_patrol_msgs::action::UlinePatrolCommand_GetResult_Request>::value &&
    has_bounded_size<uline_patrol_msgs::action::UlinePatrolCommand_GetResult_Response>::value
  >
{
};

template<>
struct is_service<uline_patrol_msgs::action::UlinePatrolCommand_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<uline_patrol_msgs::action::UlinePatrolCommand_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<uline_patrol_msgs::action::UlinePatrolCommand_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "uline_patrol_msgs/action/detail/uline_patrol_command__traits.hpp"

namespace uline_patrol_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const UlinePatrolCommand_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const UlinePatrolCommand_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const UlinePatrolCommand_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace uline_patrol_msgs

namespace rosidl_generator_traits
{

[[deprecated("use uline_patrol_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const uline_patrol_msgs::action::UlinePatrolCommand_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  uline_patrol_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use uline_patrol_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const uline_patrol_msgs::action::UlinePatrolCommand_FeedbackMessage & msg)
{
  return uline_patrol_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<uline_patrol_msgs::action::UlinePatrolCommand_FeedbackMessage>()
{
  return "uline_patrol_msgs::action::UlinePatrolCommand_FeedbackMessage";
}

template<>
inline const char * name<uline_patrol_msgs::action::UlinePatrolCommand_FeedbackMessage>()
{
  return "uline_patrol_msgs/action/UlinePatrolCommand_FeedbackMessage";
}

template<>
struct has_fixed_size<uline_patrol_msgs::action::UlinePatrolCommand_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<uline_patrol_msgs::action::UlinePatrolCommand_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<uline_patrol_msgs::action::UlinePatrolCommand_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<uline_patrol_msgs::action::UlinePatrolCommand_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<uline_patrol_msgs::action::UlinePatrolCommand_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<uline_patrol_msgs::action::UlinePatrolCommand>
  : std::true_type
{
};

template<>
struct is_action_goal<uline_patrol_msgs::action::UlinePatrolCommand_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<uline_patrol_msgs::action::UlinePatrolCommand_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<uline_patrol_msgs::action::UlinePatrolCommand_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // ULINE_PATROL_MSGS__ACTION__DETAIL__ULINE_PATROL_COMMAND__TRAITS_HPP_
