// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from uline_patrol_msgs:action/UlinePatrolCommand.idl
// generated code does not contain a copyright notice

#ifndef ULINE_PATROL_MSGS__ACTION__DETAIL__ULINE_PATROL_COMMAND__BUILDER_HPP_
#define ULINE_PATROL_MSGS__ACTION__DETAIL__ULINE_PATROL_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "uline_patrol_msgs/action/detail/uline_patrol_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace uline_patrol_msgs
{

namespace action
{

namespace builder
{

class Init_UlinePatrolCommand_Goal_apriltag_stop_distance
{
public:
  explicit Init_UlinePatrolCommand_Goal_apriltag_stop_distance(::uline_patrol_msgs::action::UlinePatrolCommand_Goal & msg)
  : msg_(msg)
  {}
  ::uline_patrol_msgs::action::UlinePatrolCommand_Goal apriltag_stop_distance(::uline_patrol_msgs::action::UlinePatrolCommand_Goal::_apriltag_stop_distance_type arg)
  {
    msg_.apriltag_stop_distance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::uline_patrol_msgs::action::UlinePatrolCommand_Goal msg_;
};

class Init_UlinePatrolCommand_Goal_obstacle_stop_time
{
public:
  explicit Init_UlinePatrolCommand_Goal_obstacle_stop_time(::uline_patrol_msgs::action::UlinePatrolCommand_Goal & msg)
  : msg_(msg)
  {}
  Init_UlinePatrolCommand_Goal_apriltag_stop_distance obstacle_stop_time(::uline_patrol_msgs::action::UlinePatrolCommand_Goal::_obstacle_stop_time_type arg)
  {
    msg_.obstacle_stop_time = std::move(arg);
    return Init_UlinePatrolCommand_Goal_apriltag_stop_distance(msg_);
  }

private:
  ::uline_patrol_msgs::action::UlinePatrolCommand_Goal msg_;
};

class Init_UlinePatrolCommand_Goal_duration
{
public:
  explicit Init_UlinePatrolCommand_Goal_duration(::uline_patrol_msgs::action::UlinePatrolCommand_Goal & msg)
  : msg_(msg)
  {}
  Init_UlinePatrolCommand_Goal_obstacle_stop_time duration(::uline_patrol_msgs::action::UlinePatrolCommand_Goal::_duration_type arg)
  {
    msg_.duration = std::move(arg);
    return Init_UlinePatrolCommand_Goal_obstacle_stop_time(msg_);
  }

private:
  ::uline_patrol_msgs::action::UlinePatrolCommand_Goal msg_;
};

class Init_UlinePatrolCommand_Goal_velocity
{
public:
  explicit Init_UlinePatrolCommand_Goal_velocity(::uline_patrol_msgs::action::UlinePatrolCommand_Goal & msg)
  : msg_(msg)
  {}
  Init_UlinePatrolCommand_Goal_duration velocity(::uline_patrol_msgs::action::UlinePatrolCommand_Goal::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_UlinePatrolCommand_Goal_duration(msg_);
  }

private:
  ::uline_patrol_msgs::action::UlinePatrolCommand_Goal msg_;
};

class Init_UlinePatrolCommand_Goal_initial_dis
{
public:
  explicit Init_UlinePatrolCommand_Goal_initial_dis(::uline_patrol_msgs::action::UlinePatrolCommand_Goal & msg)
  : msg_(msg)
  {}
  Init_UlinePatrolCommand_Goal_velocity initial_dis(::uline_patrol_msgs::action::UlinePatrolCommand_Goal::_initial_dis_type arg)
  {
    msg_.initial_dis = std::move(arg);
    return Init_UlinePatrolCommand_Goal_velocity(msg_);
  }

private:
  ::uline_patrol_msgs::action::UlinePatrolCommand_Goal msg_;
};

class Init_UlinePatrolCommand_Goal_command
{
public:
  Init_UlinePatrolCommand_Goal_command()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UlinePatrolCommand_Goal_initial_dis command(::uline_patrol_msgs::action::UlinePatrolCommand_Goal::_command_type arg)
  {
    msg_.command = std::move(arg);
    return Init_UlinePatrolCommand_Goal_initial_dis(msg_);
  }

private:
  ::uline_patrol_msgs::action::UlinePatrolCommand_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::uline_patrol_msgs::action::UlinePatrolCommand_Goal>()
{
  return uline_patrol_msgs::action::builder::Init_UlinePatrolCommand_Goal_command();
}

}  // namespace uline_patrol_msgs


namespace uline_patrol_msgs
{

namespace action
{

namespace builder
{

class Init_UlinePatrolCommand_Result_state
{
public:
  explicit Init_UlinePatrolCommand_Result_state(::uline_patrol_msgs::action::UlinePatrolCommand_Result & msg)
  : msg_(msg)
  {}
  ::uline_patrol_msgs::action::UlinePatrolCommand_Result state(::uline_patrol_msgs::action::UlinePatrolCommand_Result::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::uline_patrol_msgs::action::UlinePatrolCommand_Result msg_;
};

class Init_UlinePatrolCommand_Result_ret_code
{
public:
  Init_UlinePatrolCommand_Result_ret_code()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UlinePatrolCommand_Result_state ret_code(::uline_patrol_msgs::action::UlinePatrolCommand_Result::_ret_code_type arg)
  {
    msg_.ret_code = std::move(arg);
    return Init_UlinePatrolCommand_Result_state(msg_);
  }

private:
  ::uline_patrol_msgs::action::UlinePatrolCommand_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::uline_patrol_msgs::action::UlinePatrolCommand_Result>()
{
  return uline_patrol_msgs::action::builder::Init_UlinePatrolCommand_Result_ret_code();
}

}  // namespace uline_patrol_msgs


namespace uline_patrol_msgs
{

namespace action
{

namespace builder
{

class Init_UlinePatrolCommand_Feedback_state
{
public:
  explicit Init_UlinePatrolCommand_Feedback_state(::uline_patrol_msgs::action::UlinePatrolCommand_Feedback & msg)
  : msg_(msg)
  {}
  ::uline_patrol_msgs::action::UlinePatrolCommand_Feedback state(::uline_patrol_msgs::action::UlinePatrolCommand_Feedback::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::uline_patrol_msgs::action::UlinePatrolCommand_Feedback msg_;
};

class Init_UlinePatrolCommand_Feedback_elapsed_time
{
public:
  Init_UlinePatrolCommand_Feedback_elapsed_time()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UlinePatrolCommand_Feedback_state elapsed_time(::uline_patrol_msgs::action::UlinePatrolCommand_Feedback::_elapsed_time_type arg)
  {
    msg_.elapsed_time = std::move(arg);
    return Init_UlinePatrolCommand_Feedback_state(msg_);
  }

private:
  ::uline_patrol_msgs::action::UlinePatrolCommand_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::uline_patrol_msgs::action::UlinePatrolCommand_Feedback>()
{
  return uline_patrol_msgs::action::builder::Init_UlinePatrolCommand_Feedback_elapsed_time();
}

}  // namespace uline_patrol_msgs


namespace uline_patrol_msgs
{

namespace action
{

namespace builder
{

class Init_UlinePatrolCommand_SendGoal_Request_goal
{
public:
  explicit Init_UlinePatrolCommand_SendGoal_Request_goal(::uline_patrol_msgs::action::UlinePatrolCommand_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::uline_patrol_msgs::action::UlinePatrolCommand_SendGoal_Request goal(::uline_patrol_msgs::action::UlinePatrolCommand_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::uline_patrol_msgs::action::UlinePatrolCommand_SendGoal_Request msg_;
};

class Init_UlinePatrolCommand_SendGoal_Request_goal_id
{
public:
  Init_UlinePatrolCommand_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UlinePatrolCommand_SendGoal_Request_goal goal_id(::uline_patrol_msgs::action::UlinePatrolCommand_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_UlinePatrolCommand_SendGoal_Request_goal(msg_);
  }

private:
  ::uline_patrol_msgs::action::UlinePatrolCommand_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::uline_patrol_msgs::action::UlinePatrolCommand_SendGoal_Request>()
{
  return uline_patrol_msgs::action::builder::Init_UlinePatrolCommand_SendGoal_Request_goal_id();
}

}  // namespace uline_patrol_msgs


namespace uline_patrol_msgs
{

namespace action
{

namespace builder
{

class Init_UlinePatrolCommand_SendGoal_Response_stamp
{
public:
  explicit Init_UlinePatrolCommand_SendGoal_Response_stamp(::uline_patrol_msgs::action::UlinePatrolCommand_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::uline_patrol_msgs::action::UlinePatrolCommand_SendGoal_Response stamp(::uline_patrol_msgs::action::UlinePatrolCommand_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::uline_patrol_msgs::action::UlinePatrolCommand_SendGoal_Response msg_;
};

class Init_UlinePatrolCommand_SendGoal_Response_accepted
{
public:
  Init_UlinePatrolCommand_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UlinePatrolCommand_SendGoal_Response_stamp accepted(::uline_patrol_msgs::action::UlinePatrolCommand_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_UlinePatrolCommand_SendGoal_Response_stamp(msg_);
  }

private:
  ::uline_patrol_msgs::action::UlinePatrolCommand_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::uline_patrol_msgs::action::UlinePatrolCommand_SendGoal_Response>()
{
  return uline_patrol_msgs::action::builder::Init_UlinePatrolCommand_SendGoal_Response_accepted();
}

}  // namespace uline_patrol_msgs


namespace uline_patrol_msgs
{

namespace action
{

namespace builder
{

class Init_UlinePatrolCommand_GetResult_Request_goal_id
{
public:
  Init_UlinePatrolCommand_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::uline_patrol_msgs::action::UlinePatrolCommand_GetResult_Request goal_id(::uline_patrol_msgs::action::UlinePatrolCommand_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::uline_patrol_msgs::action::UlinePatrolCommand_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::uline_patrol_msgs::action::UlinePatrolCommand_GetResult_Request>()
{
  return uline_patrol_msgs::action::builder::Init_UlinePatrolCommand_GetResult_Request_goal_id();
}

}  // namespace uline_patrol_msgs


namespace uline_patrol_msgs
{

namespace action
{

namespace builder
{

class Init_UlinePatrolCommand_GetResult_Response_result
{
public:
  explicit Init_UlinePatrolCommand_GetResult_Response_result(::uline_patrol_msgs::action::UlinePatrolCommand_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::uline_patrol_msgs::action::UlinePatrolCommand_GetResult_Response result(::uline_patrol_msgs::action::UlinePatrolCommand_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::uline_patrol_msgs::action::UlinePatrolCommand_GetResult_Response msg_;
};

class Init_UlinePatrolCommand_GetResult_Response_status
{
public:
  Init_UlinePatrolCommand_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UlinePatrolCommand_GetResult_Response_result status(::uline_patrol_msgs::action::UlinePatrolCommand_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_UlinePatrolCommand_GetResult_Response_result(msg_);
  }

private:
  ::uline_patrol_msgs::action::UlinePatrolCommand_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::uline_patrol_msgs::action::UlinePatrolCommand_GetResult_Response>()
{
  return uline_patrol_msgs::action::builder::Init_UlinePatrolCommand_GetResult_Response_status();
}

}  // namespace uline_patrol_msgs


namespace uline_patrol_msgs
{

namespace action
{

namespace builder
{

class Init_UlinePatrolCommand_FeedbackMessage_feedback
{
public:
  explicit Init_UlinePatrolCommand_FeedbackMessage_feedback(::uline_patrol_msgs::action::UlinePatrolCommand_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::uline_patrol_msgs::action::UlinePatrolCommand_FeedbackMessage feedback(::uline_patrol_msgs::action::UlinePatrolCommand_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::uline_patrol_msgs::action::UlinePatrolCommand_FeedbackMessage msg_;
};

class Init_UlinePatrolCommand_FeedbackMessage_goal_id
{
public:
  Init_UlinePatrolCommand_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UlinePatrolCommand_FeedbackMessage_feedback goal_id(::uline_patrol_msgs::action::UlinePatrolCommand_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_UlinePatrolCommand_FeedbackMessage_feedback(msg_);
  }

private:
  ::uline_patrol_msgs::action::UlinePatrolCommand_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::uline_patrol_msgs::action::UlinePatrolCommand_FeedbackMessage>()
{
  return uline_patrol_msgs::action::builder::Init_UlinePatrolCommand_FeedbackMessage_goal_id();
}

}  // namespace uline_patrol_msgs

#endif  // ULINE_PATROL_MSGS__ACTION__DETAIL__ULINE_PATROL_COMMAND__BUILDER_HPP_
