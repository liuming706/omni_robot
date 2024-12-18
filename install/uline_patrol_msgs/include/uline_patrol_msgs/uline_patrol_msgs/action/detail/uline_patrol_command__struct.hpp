// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from uline_patrol_msgs:action/UlinePatrolCommand.idl
// generated code does not contain a copyright notice

#ifndef ULINE_PATROL_MSGS__ACTION__DETAIL__ULINE_PATROL_COMMAND__STRUCT_HPP_
#define ULINE_PATROL_MSGS__ACTION__DETAIL__ULINE_PATROL_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__uline_patrol_msgs__action__UlinePatrolCommand_Goal __attribute__((deprecated))
#else
# define DEPRECATED__uline_patrol_msgs__action__UlinePatrolCommand_Goal __declspec(deprecated)
#endif

namespace uline_patrol_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct UlinePatrolCommand_Goal_
{
  using Type = UlinePatrolCommand_Goal_<ContainerAllocator>;

  explicit UlinePatrolCommand_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = "";
      this->initial_dis = 0ll;
      this->velocity = 0.0;
      this->duration = 0.0;
      this->obstacle_stop_time = 0.0;
      this->apriltag_stop_distance = 0.0;
    }
  }

  explicit UlinePatrolCommand_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : command(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = "";
      this->initial_dis = 0ll;
      this->velocity = 0.0;
      this->duration = 0.0;
      this->obstacle_stop_time = 0.0;
      this->apriltag_stop_distance = 0.0;
    }
  }

  // field types and members
  using _command_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _command_type command;
  using _initial_dis_type =
    int64_t;
  _initial_dis_type initial_dis;
  using _velocity_type =
    double;
  _velocity_type velocity;
  using _duration_type =
    double;
  _duration_type duration;
  using _obstacle_stop_time_type =
    double;
  _obstacle_stop_time_type obstacle_stop_time;
  using _apriltag_stop_distance_type =
    double;
  _apriltag_stop_distance_type apriltag_stop_distance;

  // setters for named parameter idiom
  Type & set__command(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->command = _arg;
    return *this;
  }
  Type & set__initial_dis(
    const int64_t & _arg)
  {
    this->initial_dis = _arg;
    return *this;
  }
  Type & set__velocity(
    const double & _arg)
  {
    this->velocity = _arg;
    return *this;
  }
  Type & set__duration(
    const double & _arg)
  {
    this->duration = _arg;
    return *this;
  }
  Type & set__obstacle_stop_time(
    const double & _arg)
  {
    this->obstacle_stop_time = _arg;
    return *this;
  }
  Type & set__apriltag_stop_distance(
    const double & _arg)
  {
    this->apriltag_stop_distance = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    uline_patrol_msgs::action::UlinePatrolCommand_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const uline_patrol_msgs::action::UlinePatrolCommand_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<uline_patrol_msgs::action::UlinePatrolCommand_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<uline_patrol_msgs::action::UlinePatrolCommand_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      uline_patrol_msgs::action::UlinePatrolCommand_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<uline_patrol_msgs::action::UlinePatrolCommand_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      uline_patrol_msgs::action::UlinePatrolCommand_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<uline_patrol_msgs::action::UlinePatrolCommand_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<uline_patrol_msgs::action::UlinePatrolCommand_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<uline_patrol_msgs::action::UlinePatrolCommand_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__uline_patrol_msgs__action__UlinePatrolCommand_Goal
    std::shared_ptr<uline_patrol_msgs::action::UlinePatrolCommand_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__uline_patrol_msgs__action__UlinePatrolCommand_Goal
    std::shared_ptr<uline_patrol_msgs::action::UlinePatrolCommand_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UlinePatrolCommand_Goal_ & other) const
  {
    if (this->command != other.command) {
      return false;
    }
    if (this->initial_dis != other.initial_dis) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    if (this->duration != other.duration) {
      return false;
    }
    if (this->obstacle_stop_time != other.obstacle_stop_time) {
      return false;
    }
    if (this->apriltag_stop_distance != other.apriltag_stop_distance) {
      return false;
    }
    return true;
  }
  bool operator!=(const UlinePatrolCommand_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UlinePatrolCommand_Goal_

// alias to use template instance with default allocator
using UlinePatrolCommand_Goal =
  uline_patrol_msgs::action::UlinePatrolCommand_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace uline_patrol_msgs


#ifndef _WIN32
# define DEPRECATED__uline_patrol_msgs__action__UlinePatrolCommand_Result __attribute__((deprecated))
#else
# define DEPRECATED__uline_patrol_msgs__action__UlinePatrolCommand_Result __declspec(deprecated)
#endif

namespace uline_patrol_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct UlinePatrolCommand_Result_
{
  using Type = UlinePatrolCommand_Result_<ContainerAllocator>;

  explicit UlinePatrolCommand_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ret_code = 0ll;
      this->state = "";
    }
  }

  explicit UlinePatrolCommand_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : state(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ret_code = 0ll;
      this->state = "";
    }
  }

  // field types and members
  using _ret_code_type =
    int64_t;
  _ret_code_type ret_code;
  using _state_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _state_type state;

  // setters for named parameter idiom
  Type & set__ret_code(
    const int64_t & _arg)
  {
    this->ret_code = _arg;
    return *this;
  }
  Type & set__state(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    uline_patrol_msgs::action::UlinePatrolCommand_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const uline_patrol_msgs::action::UlinePatrolCommand_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<uline_patrol_msgs::action::UlinePatrolCommand_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<uline_patrol_msgs::action::UlinePatrolCommand_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      uline_patrol_msgs::action::UlinePatrolCommand_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<uline_patrol_msgs::action::UlinePatrolCommand_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      uline_patrol_msgs::action::UlinePatrolCommand_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<uline_patrol_msgs::action::UlinePatrolCommand_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<uline_patrol_msgs::action::UlinePatrolCommand_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<uline_patrol_msgs::action::UlinePatrolCommand_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__uline_patrol_msgs__action__UlinePatrolCommand_Result
    std::shared_ptr<uline_patrol_msgs::action::UlinePatrolCommand_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__uline_patrol_msgs__action__UlinePatrolCommand_Result
    std::shared_ptr<uline_patrol_msgs::action::UlinePatrolCommand_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UlinePatrolCommand_Result_ & other) const
  {
    if (this->ret_code != other.ret_code) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    return true;
  }
  bool operator!=(const UlinePatrolCommand_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UlinePatrolCommand_Result_

// alias to use template instance with default allocator
using UlinePatrolCommand_Result =
  uline_patrol_msgs::action::UlinePatrolCommand_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace uline_patrol_msgs


#ifndef _WIN32
# define DEPRECATED__uline_patrol_msgs__action__UlinePatrolCommand_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__uline_patrol_msgs__action__UlinePatrolCommand_Feedback __declspec(deprecated)
#endif

namespace uline_patrol_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct UlinePatrolCommand_Feedback_
{
  using Type = UlinePatrolCommand_Feedback_<ContainerAllocator>;

  explicit UlinePatrolCommand_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->elapsed_time = 0.0;
      this->state = "";
    }
  }

  explicit UlinePatrolCommand_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : state(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->elapsed_time = 0.0;
      this->state = "";
    }
  }

  // field types and members
  using _elapsed_time_type =
    double;
  _elapsed_time_type elapsed_time;
  using _state_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _state_type state;

  // setters for named parameter idiom
  Type & set__elapsed_time(
    const double & _arg)
  {
    this->elapsed_time = _arg;
    return *this;
  }
  Type & set__state(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    uline_patrol_msgs::action::UlinePatrolCommand_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const uline_patrol_msgs::action::UlinePatrolCommand_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<uline_patrol_msgs::action::UlinePatrolCommand_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<uline_patrol_msgs::action::UlinePatrolCommand_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      uline_patrol_msgs::action::UlinePatrolCommand_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<uline_patrol_msgs::action::UlinePatrolCommand_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      uline_patrol_msgs::action::UlinePatrolCommand_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<uline_patrol_msgs::action::UlinePatrolCommand_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<uline_patrol_msgs::action::UlinePatrolCommand_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<uline_patrol_msgs::action::UlinePatrolCommand_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__uline_patrol_msgs__action__UlinePatrolCommand_Feedback
    std::shared_ptr<uline_patrol_msgs::action::UlinePatrolCommand_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__uline_patrol_msgs__action__UlinePatrolCommand_Feedback
    std::shared_ptr<uline_patrol_msgs::action::UlinePatrolCommand_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UlinePatrolCommand_Feedback_ & other) const
  {
    if (this->elapsed_time != other.elapsed_time) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    return true;
  }
  bool operator!=(const UlinePatrolCommand_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UlinePatrolCommand_Feedback_

// alias to use template instance with default allocator
using UlinePatrolCommand_Feedback =
  uline_patrol_msgs::action::UlinePatrolCommand_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace uline_patrol_msgs


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "uline_patrol_msgs/action/detail/uline_patrol_command__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Request __declspec(deprecated)
#endif

namespace uline_patrol_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct UlinePatrolCommand_SendGoal_Request_
{
  using Type = UlinePatrolCommand_SendGoal_Request_<ContainerAllocator>;

  explicit UlinePatrolCommand_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit UlinePatrolCommand_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    uline_patrol_msgs::action::UlinePatrolCommand_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const uline_patrol_msgs::action::UlinePatrolCommand_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    uline_patrol_msgs::action::UlinePatrolCommand_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const uline_patrol_msgs::action::UlinePatrolCommand_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<uline_patrol_msgs::action::UlinePatrolCommand_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<uline_patrol_msgs::action::UlinePatrolCommand_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      uline_patrol_msgs::action::UlinePatrolCommand_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<uline_patrol_msgs::action::UlinePatrolCommand_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      uline_patrol_msgs::action::UlinePatrolCommand_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<uline_patrol_msgs::action::UlinePatrolCommand_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<uline_patrol_msgs::action::UlinePatrolCommand_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<uline_patrol_msgs::action::UlinePatrolCommand_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Request
    std::shared_ptr<uline_patrol_msgs::action::UlinePatrolCommand_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Request
    std::shared_ptr<uline_patrol_msgs::action::UlinePatrolCommand_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UlinePatrolCommand_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const UlinePatrolCommand_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UlinePatrolCommand_SendGoal_Request_

// alias to use template instance with default allocator
using UlinePatrolCommand_SendGoal_Request =
  uline_patrol_msgs::action::UlinePatrolCommand_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace uline_patrol_msgs


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Response __declspec(deprecated)
#endif

namespace uline_patrol_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct UlinePatrolCommand_SendGoal_Response_
{
  using Type = UlinePatrolCommand_SendGoal_Response_<ContainerAllocator>;

  explicit UlinePatrolCommand_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit UlinePatrolCommand_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    uline_patrol_msgs::action::UlinePatrolCommand_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const uline_patrol_msgs::action::UlinePatrolCommand_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<uline_patrol_msgs::action::UlinePatrolCommand_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<uline_patrol_msgs::action::UlinePatrolCommand_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      uline_patrol_msgs::action::UlinePatrolCommand_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<uline_patrol_msgs::action::UlinePatrolCommand_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      uline_patrol_msgs::action::UlinePatrolCommand_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<uline_patrol_msgs::action::UlinePatrolCommand_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<uline_patrol_msgs::action::UlinePatrolCommand_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<uline_patrol_msgs::action::UlinePatrolCommand_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Response
    std::shared_ptr<uline_patrol_msgs::action::UlinePatrolCommand_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Response
    std::shared_ptr<uline_patrol_msgs::action::UlinePatrolCommand_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UlinePatrolCommand_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const UlinePatrolCommand_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UlinePatrolCommand_SendGoal_Response_

// alias to use template instance with default allocator
using UlinePatrolCommand_SendGoal_Response =
  uline_patrol_msgs::action::UlinePatrolCommand_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace uline_patrol_msgs

namespace uline_patrol_msgs
{

namespace action
{

struct UlinePatrolCommand_SendGoal
{
  using Request = uline_patrol_msgs::action::UlinePatrolCommand_SendGoal_Request;
  using Response = uline_patrol_msgs::action::UlinePatrolCommand_SendGoal_Response;
};

}  // namespace action

}  // namespace uline_patrol_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Request __declspec(deprecated)
#endif

namespace uline_patrol_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct UlinePatrolCommand_GetResult_Request_
{
  using Type = UlinePatrolCommand_GetResult_Request_<ContainerAllocator>;

  explicit UlinePatrolCommand_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit UlinePatrolCommand_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    uline_patrol_msgs::action::UlinePatrolCommand_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const uline_patrol_msgs::action::UlinePatrolCommand_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<uline_patrol_msgs::action::UlinePatrolCommand_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<uline_patrol_msgs::action::UlinePatrolCommand_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      uline_patrol_msgs::action::UlinePatrolCommand_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<uline_patrol_msgs::action::UlinePatrolCommand_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      uline_patrol_msgs::action::UlinePatrolCommand_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<uline_patrol_msgs::action::UlinePatrolCommand_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<uline_patrol_msgs::action::UlinePatrolCommand_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<uline_patrol_msgs::action::UlinePatrolCommand_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Request
    std::shared_ptr<uline_patrol_msgs::action::UlinePatrolCommand_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Request
    std::shared_ptr<uline_patrol_msgs::action::UlinePatrolCommand_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UlinePatrolCommand_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const UlinePatrolCommand_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UlinePatrolCommand_GetResult_Request_

// alias to use template instance with default allocator
using UlinePatrolCommand_GetResult_Request =
  uline_patrol_msgs::action::UlinePatrolCommand_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace uline_patrol_msgs


// Include directives for member types
// Member 'result'
// already included above
// #include "uline_patrol_msgs/action/detail/uline_patrol_command__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Response __declspec(deprecated)
#endif

namespace uline_patrol_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct UlinePatrolCommand_GetResult_Response_
{
  using Type = UlinePatrolCommand_GetResult_Response_<ContainerAllocator>;

  explicit UlinePatrolCommand_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit UlinePatrolCommand_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    uline_patrol_msgs::action::UlinePatrolCommand_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const uline_patrol_msgs::action::UlinePatrolCommand_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    uline_patrol_msgs::action::UlinePatrolCommand_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const uline_patrol_msgs::action::UlinePatrolCommand_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<uline_patrol_msgs::action::UlinePatrolCommand_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<uline_patrol_msgs::action::UlinePatrolCommand_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      uline_patrol_msgs::action::UlinePatrolCommand_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<uline_patrol_msgs::action::UlinePatrolCommand_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      uline_patrol_msgs::action::UlinePatrolCommand_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<uline_patrol_msgs::action::UlinePatrolCommand_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<uline_patrol_msgs::action::UlinePatrolCommand_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<uline_patrol_msgs::action::UlinePatrolCommand_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Response
    std::shared_ptr<uline_patrol_msgs::action::UlinePatrolCommand_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Response
    std::shared_ptr<uline_patrol_msgs::action::UlinePatrolCommand_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UlinePatrolCommand_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const UlinePatrolCommand_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UlinePatrolCommand_GetResult_Response_

// alias to use template instance with default allocator
using UlinePatrolCommand_GetResult_Response =
  uline_patrol_msgs::action::UlinePatrolCommand_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace uline_patrol_msgs

namespace uline_patrol_msgs
{

namespace action
{

struct UlinePatrolCommand_GetResult
{
  using Request = uline_patrol_msgs::action::UlinePatrolCommand_GetResult_Request;
  using Response = uline_patrol_msgs::action::UlinePatrolCommand_GetResult_Response;
};

}  // namespace action

}  // namespace uline_patrol_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "uline_patrol_msgs/action/detail/uline_patrol_command__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__uline_patrol_msgs__action__UlinePatrolCommand_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__uline_patrol_msgs__action__UlinePatrolCommand_FeedbackMessage __declspec(deprecated)
#endif

namespace uline_patrol_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct UlinePatrolCommand_FeedbackMessage_
{
  using Type = UlinePatrolCommand_FeedbackMessage_<ContainerAllocator>;

  explicit UlinePatrolCommand_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit UlinePatrolCommand_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    uline_patrol_msgs::action::UlinePatrolCommand_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const uline_patrol_msgs::action::UlinePatrolCommand_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    uline_patrol_msgs::action::UlinePatrolCommand_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const uline_patrol_msgs::action::UlinePatrolCommand_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<uline_patrol_msgs::action::UlinePatrolCommand_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<uline_patrol_msgs::action::UlinePatrolCommand_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      uline_patrol_msgs::action::UlinePatrolCommand_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<uline_patrol_msgs::action::UlinePatrolCommand_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      uline_patrol_msgs::action::UlinePatrolCommand_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<uline_patrol_msgs::action::UlinePatrolCommand_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<uline_patrol_msgs::action::UlinePatrolCommand_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<uline_patrol_msgs::action::UlinePatrolCommand_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__uline_patrol_msgs__action__UlinePatrolCommand_FeedbackMessage
    std::shared_ptr<uline_patrol_msgs::action::UlinePatrolCommand_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__uline_patrol_msgs__action__UlinePatrolCommand_FeedbackMessage
    std::shared_ptr<uline_patrol_msgs::action::UlinePatrolCommand_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UlinePatrolCommand_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const UlinePatrolCommand_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UlinePatrolCommand_FeedbackMessage_

// alias to use template instance with default allocator
using UlinePatrolCommand_FeedbackMessage =
  uline_patrol_msgs::action::UlinePatrolCommand_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace uline_patrol_msgs

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace uline_patrol_msgs
{

namespace action
{

struct UlinePatrolCommand
{
  /// The goal message defined in the action definition.
  using Goal = uline_patrol_msgs::action::UlinePatrolCommand_Goal;
  /// The result message defined in the action definition.
  using Result = uline_patrol_msgs::action::UlinePatrolCommand_Result;
  /// The feedback message defined in the action definition.
  using Feedback = uline_patrol_msgs::action::UlinePatrolCommand_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = uline_patrol_msgs::action::UlinePatrolCommand_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = uline_patrol_msgs::action::UlinePatrolCommand_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = uline_patrol_msgs::action::UlinePatrolCommand_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct UlinePatrolCommand UlinePatrolCommand;

}  // namespace action

}  // namespace uline_patrol_msgs

#endif  // ULINE_PATROL_MSGS__ACTION__DETAIL__ULINE_PATROL_COMMAND__STRUCT_HPP_
