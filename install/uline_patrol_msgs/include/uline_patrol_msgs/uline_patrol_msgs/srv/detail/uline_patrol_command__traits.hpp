// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from uline_patrol_msgs:srv/UlinePatrolCommand.idl
// generated code does not contain a copyright notice

#ifndef ULINE_PATROL_MSGS__SRV__DETAIL__ULINE_PATROL_COMMAND__TRAITS_HPP_
#define ULINE_PATROL_MSGS__SRV__DETAIL__ULINE_PATROL_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "uline_patrol_msgs/srv/detail/uline_patrol_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace uline_patrol_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const UlinePatrolCommand_Request & msg,
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
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const UlinePatrolCommand_Request & msg,
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const UlinePatrolCommand_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace uline_patrol_msgs

namespace rosidl_generator_traits
{

[[deprecated("use uline_patrol_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const uline_patrol_msgs::srv::UlinePatrolCommand_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  uline_patrol_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use uline_patrol_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const uline_patrol_msgs::srv::UlinePatrolCommand_Request & msg)
{
  return uline_patrol_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<uline_patrol_msgs::srv::UlinePatrolCommand_Request>()
{
  return "uline_patrol_msgs::srv::UlinePatrolCommand_Request";
}

template<>
inline const char * name<uline_patrol_msgs::srv::UlinePatrolCommand_Request>()
{
  return "uline_patrol_msgs/srv/UlinePatrolCommand_Request";
}

template<>
struct has_fixed_size<uline_patrol_msgs::srv::UlinePatrolCommand_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<uline_patrol_msgs::srv::UlinePatrolCommand_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<uline_patrol_msgs::srv::UlinePatrolCommand_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace uline_patrol_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const UlinePatrolCommand_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const UlinePatrolCommand_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const UlinePatrolCommand_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace uline_patrol_msgs

namespace rosidl_generator_traits
{

[[deprecated("use uline_patrol_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const uline_patrol_msgs::srv::UlinePatrolCommand_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  uline_patrol_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use uline_patrol_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const uline_patrol_msgs::srv::UlinePatrolCommand_Response & msg)
{
  return uline_patrol_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<uline_patrol_msgs::srv::UlinePatrolCommand_Response>()
{
  return "uline_patrol_msgs::srv::UlinePatrolCommand_Response";
}

template<>
inline const char * name<uline_patrol_msgs::srv::UlinePatrolCommand_Response>()
{
  return "uline_patrol_msgs/srv/UlinePatrolCommand_Response";
}

template<>
struct has_fixed_size<uline_patrol_msgs::srv::UlinePatrolCommand_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<uline_patrol_msgs::srv::UlinePatrolCommand_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<uline_patrol_msgs::srv::UlinePatrolCommand_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<uline_patrol_msgs::srv::UlinePatrolCommand>()
{
  return "uline_patrol_msgs::srv::UlinePatrolCommand";
}

template<>
inline const char * name<uline_patrol_msgs::srv::UlinePatrolCommand>()
{
  return "uline_patrol_msgs/srv/UlinePatrolCommand";
}

template<>
struct has_fixed_size<uline_patrol_msgs::srv::UlinePatrolCommand>
  : std::integral_constant<
    bool,
    has_fixed_size<uline_patrol_msgs::srv::UlinePatrolCommand_Request>::value &&
    has_fixed_size<uline_patrol_msgs::srv::UlinePatrolCommand_Response>::value
  >
{
};

template<>
struct has_bounded_size<uline_patrol_msgs::srv::UlinePatrolCommand>
  : std::integral_constant<
    bool,
    has_bounded_size<uline_patrol_msgs::srv::UlinePatrolCommand_Request>::value &&
    has_bounded_size<uline_patrol_msgs::srv::UlinePatrolCommand_Response>::value
  >
{
};

template<>
struct is_service<uline_patrol_msgs::srv::UlinePatrolCommand>
  : std::true_type
{
};

template<>
struct is_service_request<uline_patrol_msgs::srv::UlinePatrolCommand_Request>
  : std::true_type
{
};

template<>
struct is_service_response<uline_patrol_msgs::srv::UlinePatrolCommand_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ULINE_PATROL_MSGS__SRV__DETAIL__ULINE_PATROL_COMMAND__TRAITS_HPP_
