// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from uline_patrol_msgs:srv/UlinePatrolCommand.idl
// generated code does not contain a copyright notice

#ifndef ULINE_PATROL_MSGS__SRV__DETAIL__ULINE_PATROL_COMMAND__BUILDER_HPP_
#define ULINE_PATROL_MSGS__SRV__DETAIL__ULINE_PATROL_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "uline_patrol_msgs/srv/detail/uline_patrol_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace uline_patrol_msgs
{

namespace srv
{

namespace builder
{

class Init_UlinePatrolCommand_Request_duration
{
public:
  explicit Init_UlinePatrolCommand_Request_duration(::uline_patrol_msgs::srv::UlinePatrolCommand_Request & msg)
  : msg_(msg)
  {}
  ::uline_patrol_msgs::srv::UlinePatrolCommand_Request duration(::uline_patrol_msgs::srv::UlinePatrolCommand_Request::_duration_type arg)
  {
    msg_.duration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::uline_patrol_msgs::srv::UlinePatrolCommand_Request msg_;
};

class Init_UlinePatrolCommand_Request_velocity
{
public:
  explicit Init_UlinePatrolCommand_Request_velocity(::uline_patrol_msgs::srv::UlinePatrolCommand_Request & msg)
  : msg_(msg)
  {}
  Init_UlinePatrolCommand_Request_duration velocity(::uline_patrol_msgs::srv::UlinePatrolCommand_Request::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_UlinePatrolCommand_Request_duration(msg_);
  }

private:
  ::uline_patrol_msgs::srv::UlinePatrolCommand_Request msg_;
};

class Init_UlinePatrolCommand_Request_initial_dis
{
public:
  explicit Init_UlinePatrolCommand_Request_initial_dis(::uline_patrol_msgs::srv::UlinePatrolCommand_Request & msg)
  : msg_(msg)
  {}
  Init_UlinePatrolCommand_Request_velocity initial_dis(::uline_patrol_msgs::srv::UlinePatrolCommand_Request::_initial_dis_type arg)
  {
    msg_.initial_dis = std::move(arg);
    return Init_UlinePatrolCommand_Request_velocity(msg_);
  }

private:
  ::uline_patrol_msgs::srv::UlinePatrolCommand_Request msg_;
};

class Init_UlinePatrolCommand_Request_command
{
public:
  Init_UlinePatrolCommand_Request_command()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UlinePatrolCommand_Request_initial_dis command(::uline_patrol_msgs::srv::UlinePatrolCommand_Request::_command_type arg)
  {
    msg_.command = std::move(arg);
    return Init_UlinePatrolCommand_Request_initial_dis(msg_);
  }

private:
  ::uline_patrol_msgs::srv::UlinePatrolCommand_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::uline_patrol_msgs::srv::UlinePatrolCommand_Request>()
{
  return uline_patrol_msgs::srv::builder::Init_UlinePatrolCommand_Request_command();
}

}  // namespace uline_patrol_msgs


namespace uline_patrol_msgs
{

namespace srv
{

namespace builder
{

class Init_UlinePatrolCommand_Response_message
{
public:
  explicit Init_UlinePatrolCommand_Response_message(::uline_patrol_msgs::srv::UlinePatrolCommand_Response & msg)
  : msg_(msg)
  {}
  ::uline_patrol_msgs::srv::UlinePatrolCommand_Response message(::uline_patrol_msgs::srv::UlinePatrolCommand_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::uline_patrol_msgs::srv::UlinePatrolCommand_Response msg_;
};

class Init_UlinePatrolCommand_Response_success
{
public:
  Init_UlinePatrolCommand_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UlinePatrolCommand_Response_message success(::uline_patrol_msgs::srv::UlinePatrolCommand_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_UlinePatrolCommand_Response_message(msg_);
  }

private:
  ::uline_patrol_msgs::srv::UlinePatrolCommand_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::uline_patrol_msgs::srv::UlinePatrolCommand_Response>()
{
  return uline_patrol_msgs::srv::builder::Init_UlinePatrolCommand_Response_success();
}

}  // namespace uline_patrol_msgs

#endif  // ULINE_PATROL_MSGS__SRV__DETAIL__ULINE_PATROL_COMMAND__BUILDER_HPP_
