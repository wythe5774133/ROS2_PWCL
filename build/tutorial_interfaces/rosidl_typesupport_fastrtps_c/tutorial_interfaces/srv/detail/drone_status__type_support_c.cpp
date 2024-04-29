// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from tutorial_interfaces:srv/DroneStatus.idl
// generated code does not contain a copyright notice
#include "tutorial_interfaces/srv/detail/drone_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "tutorial_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "tutorial_interfaces/srv/detail/drone_status__struct.h"
#include "tutorial_interfaces/srv/detail/drone_status__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // status
#include "rosidl_runtime_c/string_functions.h"  // status

// forward declare type support functions


using _DroneStatus_Request__ros_msg_type = tutorial_interfaces__srv__DroneStatus_Request;

static bool _DroneStatus_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _DroneStatus_Request__ros_msg_type * ros_message = static_cast<const _DroneStatus_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: status
  {
    const rosidl_runtime_c__String * str = &ros_message->status;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _DroneStatus_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _DroneStatus_Request__ros_msg_type * ros_message = static_cast<_DroneStatus_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: status
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->status.data) {
      rosidl_runtime_c__String__init(&ros_message->status);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->status,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'status'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tutorial_interfaces
size_t get_serialized_size_tutorial_interfaces__srv__DroneStatus_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DroneStatus_Request__ros_msg_type * ros_message = static_cast<const _DroneStatus_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name status
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->status.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _DroneStatus_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tutorial_interfaces__srv__DroneStatus_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tutorial_interfaces
size_t max_serialized_size_tutorial_interfaces__srv__DroneStatus_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: status
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _DroneStatus_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_tutorial_interfaces__srv__DroneStatus_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_DroneStatus_Request = {
  "tutorial_interfaces::srv",
  "DroneStatus_Request",
  _DroneStatus_Request__cdr_serialize,
  _DroneStatus_Request__cdr_deserialize,
  _DroneStatus_Request__get_serialized_size,
  _DroneStatus_Request__max_serialized_size
};

static rosidl_message_type_support_t _DroneStatus_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_DroneStatus_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tutorial_interfaces, srv, DroneStatus_Request)() {
  return &_DroneStatus_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "tutorial_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "tutorial_interfaces/srv/detail/drone_status__struct.h"
// already included above
// #include "tutorial_interfaces/srv/detail/drone_status__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _DroneStatus_Response__ros_msg_type = tutorial_interfaces__srv__DroneStatus_Response;

static bool _DroneStatus_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _DroneStatus_Response__ros_msg_type * ros_message = static_cast<const _DroneStatus_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: check
  {
    cdr << (ros_message->check ? true : false);
  }

  return true;
}

static bool _DroneStatus_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _DroneStatus_Response__ros_msg_type * ros_message = static_cast<_DroneStatus_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: check
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->check = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tutorial_interfaces
size_t get_serialized_size_tutorial_interfaces__srv__DroneStatus_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DroneStatus_Response__ros_msg_type * ros_message = static_cast<const _DroneStatus_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name check
  {
    size_t item_size = sizeof(ros_message->check);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _DroneStatus_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tutorial_interfaces__srv__DroneStatus_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tutorial_interfaces
size_t max_serialized_size_tutorial_interfaces__srv__DroneStatus_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: check
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _DroneStatus_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_tutorial_interfaces__srv__DroneStatus_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_DroneStatus_Response = {
  "tutorial_interfaces::srv",
  "DroneStatus_Response",
  _DroneStatus_Response__cdr_serialize,
  _DroneStatus_Response__cdr_deserialize,
  _DroneStatus_Response__get_serialized_size,
  _DroneStatus_Response__max_serialized_size
};

static rosidl_message_type_support_t _DroneStatus_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_DroneStatus_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tutorial_interfaces, srv, DroneStatus_Response)() {
  return &_DroneStatus_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "tutorial_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "tutorial_interfaces/srv/drone_status.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t DroneStatus__callbacks = {
  "tutorial_interfaces::srv",
  "DroneStatus",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tutorial_interfaces, srv, DroneStatus_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tutorial_interfaces, srv, DroneStatus_Response)(),
};

static rosidl_service_type_support_t DroneStatus__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &DroneStatus__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tutorial_interfaces, srv, DroneStatus)() {
  return &DroneStatus__handle;
}

#if defined(__cplusplus)
}
#endif
