// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from uline_patrol_msgs:srv/UlinePatrolCommand.idl
// generated code does not contain a copyright notice

#ifndef ULINE_PATROL_MSGS__SRV__DETAIL__ULINE_PATROL_COMMAND__STRUCT_HPP_
#define ULINE_PATROL_MSGS__SRV__DETAIL__ULINE_PATROL_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__uline_patrol_msgs__srv__UlinePatrolCommand_Request __attribute__((deprecated))
#else
# define DEPRECATED__uline_patrol_msgs__srv__UlinePatrolCommand_Request __declspec(deprecated)
#endif

namespace uline_patrol_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct UlinePatrolCommand_Request_
{
  using Type = UlinePatrolCommand_Request_<ContainerAllocator>;

  explicit UlinePatrolCommand_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = "";
      this->initial_dis = 0ll;
      this->velocity = 0.0;
      this->duration = 0.0;
    }
  }

  explicit UlinePatrolCommand_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : command(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = "";
      this->initial_dis = 0ll;
      this->velocity = 0.0;
      this->duration = 0.0;
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

  // constant declarations

  // pointer types
  using RawPtr =
    uline_patrol_msgs::srv::UlinePatrolCommand_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const uline_patrol_msgs::srv::UlinePatrolCommand_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<uline_patrol_msgs::srv::UlinePatrolCommand_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<uline_patrol_msgs::srv::UlinePatrolCommand_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      uline_patrol_msgs::srv::UlinePatrolCommand_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<uline_patrol_msgs::srv::UlinePatrolCommand_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      uline_patrol_msgs::srv::UlinePatrolCommand_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<uline_patrol_msgs::srv::UlinePatrolCommand_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<uline_patrol_msgs::srv::UlinePatrolCommand_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<uline_patrol_msgs::srv::UlinePatrolCommand_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__uline_patrol_msgs__srv__UlinePatrolCommand_Request
    std::shared_ptr<uline_patrol_msgs::srv::UlinePatrolCommand_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__uline_patrol_msgs__srv__UlinePatrolCommand_Request
    std::shared_ptr<uline_patrol_msgs::srv::UlinePatrolCommand_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UlinePatrolCommand_Request_ & other) const
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
    return true;
  }
  bool operator!=(const UlinePatrolCommand_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UlinePatrolCommand_Request_

// alias to use template instance with default allocator
using UlinePatrolCommand_Request =
  uline_patrol_msgs::srv::UlinePatrolCommand_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace uline_patrol_msgs


#ifndef _WIN32
# define DEPRECATED__uline_patrol_msgs__srv__UlinePatrolCommand_Response __attribute__((deprecated))
#else
# define DEPRECATED__uline_patrol_msgs__srv__UlinePatrolCommand_Response __declspec(deprecated)
#endif

namespace uline_patrol_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct UlinePatrolCommand_Response_
{
  using Type = UlinePatrolCommand_Response_<ContainerAllocator>;

  explicit UlinePatrolCommand_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit UlinePatrolCommand_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    uline_patrol_msgs::srv::UlinePatrolCommand_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const uline_patrol_msgs::srv::UlinePatrolCommand_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<uline_patrol_msgs::srv::UlinePatrolCommand_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<uline_patrol_msgs::srv::UlinePatrolCommand_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      uline_patrol_msgs::srv::UlinePatrolCommand_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<uline_patrol_msgs::srv::UlinePatrolCommand_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      uline_patrol_msgs::srv::UlinePatrolCommand_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<uline_patrol_msgs::srv::UlinePatrolCommand_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<uline_patrol_msgs::srv::UlinePatrolCommand_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<uline_patrol_msgs::srv::UlinePatrolCommand_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__uline_patrol_msgs__srv__UlinePatrolCommand_Response
    std::shared_ptr<uline_patrol_msgs::srv::UlinePatrolCommand_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__uline_patrol_msgs__srv__UlinePatrolCommand_Response
    std::shared_ptr<uline_patrol_msgs::srv::UlinePatrolCommand_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UlinePatrolCommand_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const UlinePatrolCommand_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UlinePatrolCommand_Response_

// alias to use template instance with default allocator
using UlinePatrolCommand_Response =
  uline_patrol_msgs::srv::UlinePatrolCommand_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace uline_patrol_msgs

namespace uline_patrol_msgs
{

namespace srv
{

struct UlinePatrolCommand
{
  using Request = uline_patrol_msgs::srv::UlinePatrolCommand_Request;
  using Response = uline_patrol_msgs::srv::UlinePatrolCommand_Response;
};

}  // namespace srv

}  // namespace uline_patrol_msgs

#endif  // ULINE_PATROL_MSGS__SRV__DETAIL__ULINE_PATROL_COMMAND__STRUCT_HPP_
