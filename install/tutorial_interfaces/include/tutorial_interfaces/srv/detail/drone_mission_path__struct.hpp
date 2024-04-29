// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tutorial_interfaces:srv/DroneMissionPath.idl
// generated code does not contain a copyright notice

#ifndef TUTORIAL_INTERFACES__SRV__DETAIL__DRONE_MISSION_PATH__STRUCT_HPP_
#define TUTORIAL_INTERFACES__SRV__DETAIL__DRONE_MISSION_PATH__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__tutorial_interfaces__srv__DroneMissionPath_Request __attribute__((deprecated))
#else
# define DEPRECATED__tutorial_interfaces__srv__DroneMissionPath_Request __declspec(deprecated)
#endif

namespace tutorial_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct DroneMissionPath_Request_
{
  using Type = DroneMissionPath_Request_<ContainerAllocator>;

  explicit DroneMissionPath_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->point_count = "";
    }
  }

  explicit DroneMissionPath_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : point_count(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->point_count = "";
    }
  }

  // field types and members
  using _speed_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _speed_type speed;
  using _altitude_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _altitude_type altitude;
  using _latitude_type =
    std::vector<double, typename ContainerAllocator::template rebind<double>::other>;
  _latitude_type latitude;
  using _longitude_type =
    std::vector<double, typename ContainerAllocator::template rebind<double>::other>;
  _longitude_type longitude;
  using _yaw_delta_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _yaw_delta_type yaw_delta;
  using _point_count_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _point_count_type point_count;

  // setters for named parameter idiom
  Type & set__speed(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->speed = _arg;
    return *this;
  }
  Type & set__altitude(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->altitude = _arg;
    return *this;
  }
  Type & set__latitude(
    const std::vector<double, typename ContainerAllocator::template rebind<double>::other> & _arg)
  {
    this->latitude = _arg;
    return *this;
  }
  Type & set__longitude(
    const std::vector<double, typename ContainerAllocator::template rebind<double>::other> & _arg)
  {
    this->longitude = _arg;
    return *this;
  }
  Type & set__yaw_delta(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->yaw_delta = _arg;
    return *this;
  }
  Type & set__point_count(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->point_count = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tutorial_interfaces::srv::DroneMissionPath_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const tutorial_interfaces::srv::DroneMissionPath_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tutorial_interfaces::srv::DroneMissionPath_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tutorial_interfaces::srv::DroneMissionPath_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tutorial_interfaces::srv::DroneMissionPath_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tutorial_interfaces::srv::DroneMissionPath_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tutorial_interfaces::srv::DroneMissionPath_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tutorial_interfaces::srv::DroneMissionPath_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tutorial_interfaces::srv::DroneMissionPath_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tutorial_interfaces::srv::DroneMissionPath_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tutorial_interfaces__srv__DroneMissionPath_Request
    std::shared_ptr<tutorial_interfaces::srv::DroneMissionPath_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tutorial_interfaces__srv__DroneMissionPath_Request
    std::shared_ptr<tutorial_interfaces::srv::DroneMissionPath_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DroneMissionPath_Request_ & other) const
  {
    if (this->speed != other.speed) {
      return false;
    }
    if (this->altitude != other.altitude) {
      return false;
    }
    if (this->latitude != other.latitude) {
      return false;
    }
    if (this->longitude != other.longitude) {
      return false;
    }
    if (this->yaw_delta != other.yaw_delta) {
      return false;
    }
    if (this->point_count != other.point_count) {
      return false;
    }
    return true;
  }
  bool operator!=(const DroneMissionPath_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DroneMissionPath_Request_

// alias to use template instance with default allocator
using DroneMissionPath_Request =
  tutorial_interfaces::srv::DroneMissionPath_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tutorial_interfaces


#ifndef _WIN32
# define DEPRECATED__tutorial_interfaces__srv__DroneMissionPath_Response __attribute__((deprecated))
#else
# define DEPRECATED__tutorial_interfaces__srv__DroneMissionPath_Response __declspec(deprecated)
#endif

namespace tutorial_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct DroneMissionPath_Response_
{
  using Type = DroneMissionPath_Response_<ContainerAllocator>;

  explicit DroneMissionPath_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->path_check = false;
    }
  }

  explicit DroneMissionPath_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->path_check = false;
    }
  }

  // field types and members
  using _path_check_type =
    bool;
  _path_check_type path_check;

  // setters for named parameter idiom
  Type & set__path_check(
    const bool & _arg)
  {
    this->path_check = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tutorial_interfaces::srv::DroneMissionPath_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const tutorial_interfaces::srv::DroneMissionPath_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tutorial_interfaces::srv::DroneMissionPath_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tutorial_interfaces::srv::DroneMissionPath_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tutorial_interfaces::srv::DroneMissionPath_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tutorial_interfaces::srv::DroneMissionPath_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tutorial_interfaces::srv::DroneMissionPath_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tutorial_interfaces::srv::DroneMissionPath_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tutorial_interfaces::srv::DroneMissionPath_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tutorial_interfaces::srv::DroneMissionPath_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tutorial_interfaces__srv__DroneMissionPath_Response
    std::shared_ptr<tutorial_interfaces::srv::DroneMissionPath_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tutorial_interfaces__srv__DroneMissionPath_Response
    std::shared_ptr<tutorial_interfaces::srv::DroneMissionPath_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DroneMissionPath_Response_ & other) const
  {
    if (this->path_check != other.path_check) {
      return false;
    }
    return true;
  }
  bool operator!=(const DroneMissionPath_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DroneMissionPath_Response_

// alias to use template instance with default allocator
using DroneMissionPath_Response =
  tutorial_interfaces::srv::DroneMissionPath_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tutorial_interfaces

namespace tutorial_interfaces
{

namespace srv
{

struct DroneMissionPath
{
  using Request = tutorial_interfaces::srv::DroneMissionPath_Request;
  using Response = tutorial_interfaces::srv::DroneMissionPath_Response;
};

}  // namespace srv

}  // namespace tutorial_interfaces

#endif  // TUTORIAL_INTERFACES__SRV__DETAIL__DRONE_MISSION_PATH__STRUCT_HPP_
