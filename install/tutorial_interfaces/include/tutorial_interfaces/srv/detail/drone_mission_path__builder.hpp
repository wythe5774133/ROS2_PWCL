// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tutorial_interfaces:srv/DroneMissionPath.idl
// generated code does not contain a copyright notice

#ifndef TUTORIAL_INTERFACES__SRV__DETAIL__DRONE_MISSION_PATH__BUILDER_HPP_
#define TUTORIAL_INTERFACES__SRV__DETAIL__DRONE_MISSION_PATH__BUILDER_HPP_

#include "tutorial_interfaces/srv/detail/drone_mission_path__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace tutorial_interfaces
{

namespace srv
{

namespace builder
{

class Init_DroneMissionPath_Request_point_count
{
public:
  explicit Init_DroneMissionPath_Request_point_count(::tutorial_interfaces::srv::DroneMissionPath_Request & msg)
  : msg_(msg)
  {}
  ::tutorial_interfaces::srv::DroneMissionPath_Request point_count(::tutorial_interfaces::srv::DroneMissionPath_Request::_point_count_type arg)
  {
    msg_.point_count = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tutorial_interfaces::srv::DroneMissionPath_Request msg_;
};

class Init_DroneMissionPath_Request_yaw_delta
{
public:
  explicit Init_DroneMissionPath_Request_yaw_delta(::tutorial_interfaces::srv::DroneMissionPath_Request & msg)
  : msg_(msg)
  {}
  Init_DroneMissionPath_Request_point_count yaw_delta(::tutorial_interfaces::srv::DroneMissionPath_Request::_yaw_delta_type arg)
  {
    msg_.yaw_delta = std::move(arg);
    return Init_DroneMissionPath_Request_point_count(msg_);
  }

private:
  ::tutorial_interfaces::srv::DroneMissionPath_Request msg_;
};

class Init_DroneMissionPath_Request_longitude
{
public:
  explicit Init_DroneMissionPath_Request_longitude(::tutorial_interfaces::srv::DroneMissionPath_Request & msg)
  : msg_(msg)
  {}
  Init_DroneMissionPath_Request_yaw_delta longitude(::tutorial_interfaces::srv::DroneMissionPath_Request::_longitude_type arg)
  {
    msg_.longitude = std::move(arg);
    return Init_DroneMissionPath_Request_yaw_delta(msg_);
  }

private:
  ::tutorial_interfaces::srv::DroneMissionPath_Request msg_;
};

class Init_DroneMissionPath_Request_latitude
{
public:
  explicit Init_DroneMissionPath_Request_latitude(::tutorial_interfaces::srv::DroneMissionPath_Request & msg)
  : msg_(msg)
  {}
  Init_DroneMissionPath_Request_longitude latitude(::tutorial_interfaces::srv::DroneMissionPath_Request::_latitude_type arg)
  {
    msg_.latitude = std::move(arg);
    return Init_DroneMissionPath_Request_longitude(msg_);
  }

private:
  ::tutorial_interfaces::srv::DroneMissionPath_Request msg_;
};

class Init_DroneMissionPath_Request_altitude
{
public:
  explicit Init_DroneMissionPath_Request_altitude(::tutorial_interfaces::srv::DroneMissionPath_Request & msg)
  : msg_(msg)
  {}
  Init_DroneMissionPath_Request_latitude altitude(::tutorial_interfaces::srv::DroneMissionPath_Request::_altitude_type arg)
  {
    msg_.altitude = std::move(arg);
    return Init_DroneMissionPath_Request_latitude(msg_);
  }

private:
  ::tutorial_interfaces::srv::DroneMissionPath_Request msg_;
};

class Init_DroneMissionPath_Request_speed
{
public:
  Init_DroneMissionPath_Request_speed()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DroneMissionPath_Request_altitude speed(::tutorial_interfaces::srv::DroneMissionPath_Request::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_DroneMissionPath_Request_altitude(msg_);
  }

private:
  ::tutorial_interfaces::srv::DroneMissionPath_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tutorial_interfaces::srv::DroneMissionPath_Request>()
{
  return tutorial_interfaces::srv::builder::Init_DroneMissionPath_Request_speed();
}

}  // namespace tutorial_interfaces


namespace tutorial_interfaces
{

namespace srv
{

namespace builder
{

class Init_DroneMissionPath_Response_path_check
{
public:
  Init_DroneMissionPath_Response_path_check()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tutorial_interfaces::srv::DroneMissionPath_Response path_check(::tutorial_interfaces::srv::DroneMissionPath_Response::_path_check_type arg)
  {
    msg_.path_check = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tutorial_interfaces::srv::DroneMissionPath_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tutorial_interfaces::srv::DroneMissionPath_Response>()
{
  return tutorial_interfaces::srv::builder::Init_DroneMissionPath_Response_path_check();
}

}  // namespace tutorial_interfaces

#endif  // TUTORIAL_INTERFACES__SRV__DETAIL__DRONE_MISSION_PATH__BUILDER_HPP_
