// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tutorial_interfaces:srv/DroneStatus.idl
// generated code does not contain a copyright notice

#ifndef TUTORIAL_INTERFACES__SRV__DETAIL__DRONE_STATUS__BUILDER_HPP_
#define TUTORIAL_INTERFACES__SRV__DETAIL__DRONE_STATUS__BUILDER_HPP_

#include "tutorial_interfaces/srv/detail/drone_status__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace tutorial_interfaces
{

namespace srv
{

namespace builder
{

class Init_DroneStatus_Request_status
{
public:
  Init_DroneStatus_Request_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tutorial_interfaces::srv::DroneStatus_Request status(::tutorial_interfaces::srv::DroneStatus_Request::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tutorial_interfaces::srv::DroneStatus_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tutorial_interfaces::srv::DroneStatus_Request>()
{
  return tutorial_interfaces::srv::builder::Init_DroneStatus_Request_status();
}

}  // namespace tutorial_interfaces


namespace tutorial_interfaces
{

namespace srv
{

namespace builder
{

class Init_DroneStatus_Response_check
{
public:
  Init_DroneStatus_Response_check()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tutorial_interfaces::srv::DroneStatus_Response check(::tutorial_interfaces::srv::DroneStatus_Response::_check_type arg)
  {
    msg_.check = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tutorial_interfaces::srv::DroneStatus_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tutorial_interfaces::srv::DroneStatus_Response>()
{
  return tutorial_interfaces::srv::builder::Init_DroneStatus_Response_check();
}

}  // namespace tutorial_interfaces

#endif  // TUTORIAL_INTERFACES__SRV__DETAIL__DRONE_STATUS__BUILDER_HPP_
