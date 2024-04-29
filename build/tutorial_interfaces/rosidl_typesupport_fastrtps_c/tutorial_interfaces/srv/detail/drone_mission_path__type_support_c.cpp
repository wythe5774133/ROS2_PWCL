// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from tutorial_interfaces:srv/DroneMissionPath.idl
// generated code does not contain a copyright notice
#include "tutorial_interfaces/srv/detail/drone_mission_path__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "tutorial_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "tutorial_interfaces/srv/detail/drone_mission_path__struct.h"
#include "tutorial_interfaces/srv/detail/drone_mission_path__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // altitude, latitude, longitude, speed, yaw_delta
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // altitude, latitude, longitude, speed, yaw_delta
#include "rosidl_runtime_c/string.h"  // point_count
#include "rosidl_runtime_c/string_functions.h"  // point_count

// forward declare type support functions


using _DroneMissionPath_Request__ros_msg_type = tutorial_interfaces__srv__DroneMissionPath_Request;

static bool _DroneMissionPath_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _DroneMissionPath_Request__ros_msg_type * ros_message = static_cast<const _DroneMissionPath_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: speed
  {
    size_t size = ros_message->speed.size;
    auto array_ptr = ros_message->speed.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: altitude
  {
    size_t size = ros_message->altitude.size;
    auto array_ptr = ros_message->altitude.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: latitude
  {
    size_t size = ros_message->latitude.size;
    auto array_ptr = ros_message->latitude.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: longitude
  {
    size_t size = ros_message->longitude.size;
    auto array_ptr = ros_message->longitude.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: yaw_delta
  {
    size_t size = ros_message->yaw_delta.size;
    auto array_ptr = ros_message->yaw_delta.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: point_count
  {
    const rosidl_runtime_c__String * str = &ros_message->point_count;
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

static bool _DroneMissionPath_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _DroneMissionPath_Request__ros_msg_type * ros_message = static_cast<_DroneMissionPath_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: speed
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->speed.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->speed);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->speed, size)) {
      return "failed to create array for field 'speed'";
    }
    auto array_ptr = ros_message->speed.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: altitude
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->altitude.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->altitude);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->altitude, size)) {
      return "failed to create array for field 'altitude'";
    }
    auto array_ptr = ros_message->altitude.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: latitude
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->latitude.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->latitude);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->latitude, size)) {
      return "failed to create array for field 'latitude'";
    }
    auto array_ptr = ros_message->latitude.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: longitude
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->longitude.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->longitude);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->longitude, size)) {
      return "failed to create array for field 'longitude'";
    }
    auto array_ptr = ros_message->longitude.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: yaw_delta
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->yaw_delta.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->yaw_delta);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->yaw_delta, size)) {
      return "failed to create array for field 'yaw_delta'";
    }
    auto array_ptr = ros_message->yaw_delta.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: point_count
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->point_count.data) {
      rosidl_runtime_c__String__init(&ros_message->point_count);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->point_count,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'point_count'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tutorial_interfaces
size_t get_serialized_size_tutorial_interfaces__srv__DroneMissionPath_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DroneMissionPath_Request__ros_msg_type * ros_message = static_cast<const _DroneMissionPath_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name speed
  {
    size_t array_size = ros_message->speed.size;
    auto array_ptr = ros_message->speed.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name altitude
  {
    size_t array_size = ros_message->altitude.size;
    auto array_ptr = ros_message->altitude.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name latitude
  {
    size_t array_size = ros_message->latitude.size;
    auto array_ptr = ros_message->latitude.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name longitude
  {
    size_t array_size = ros_message->longitude.size;
    auto array_ptr = ros_message->longitude.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name yaw_delta
  {
    size_t array_size = ros_message->yaw_delta.size;
    auto array_ptr = ros_message->yaw_delta.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name point_count
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->point_count.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _DroneMissionPath_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tutorial_interfaces__srv__DroneMissionPath_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tutorial_interfaces
size_t max_serialized_size_tutorial_interfaces__srv__DroneMissionPath_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: speed
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: altitude
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: latitude
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: longitude
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: yaw_delta
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: point_count
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

static size_t _DroneMissionPath_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_tutorial_interfaces__srv__DroneMissionPath_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_DroneMissionPath_Request = {
  "tutorial_interfaces::srv",
  "DroneMissionPath_Request",
  _DroneMissionPath_Request__cdr_serialize,
  _DroneMissionPath_Request__cdr_deserialize,
  _DroneMissionPath_Request__get_serialized_size,
  _DroneMissionPath_Request__max_serialized_size
};

static rosidl_message_type_support_t _DroneMissionPath_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_DroneMissionPath_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tutorial_interfaces, srv, DroneMissionPath_Request)() {
  return &_DroneMissionPath_Request__type_support;
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
// #include "tutorial_interfaces/srv/detail/drone_mission_path__struct.h"
// already included above
// #include "tutorial_interfaces/srv/detail/drone_mission_path__functions.h"
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


using _DroneMissionPath_Response__ros_msg_type = tutorial_interfaces__srv__DroneMissionPath_Response;

static bool _DroneMissionPath_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _DroneMissionPath_Response__ros_msg_type * ros_message = static_cast<const _DroneMissionPath_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: path_check
  {
    cdr << (ros_message->path_check ? true : false);
  }

  return true;
}

static bool _DroneMissionPath_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _DroneMissionPath_Response__ros_msg_type * ros_message = static_cast<_DroneMissionPath_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: path_check
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->path_check = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tutorial_interfaces
size_t get_serialized_size_tutorial_interfaces__srv__DroneMissionPath_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DroneMissionPath_Response__ros_msg_type * ros_message = static_cast<const _DroneMissionPath_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name path_check
  {
    size_t item_size = sizeof(ros_message->path_check);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _DroneMissionPath_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tutorial_interfaces__srv__DroneMissionPath_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tutorial_interfaces
size_t max_serialized_size_tutorial_interfaces__srv__DroneMissionPath_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: path_check
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _DroneMissionPath_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_tutorial_interfaces__srv__DroneMissionPath_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_DroneMissionPath_Response = {
  "tutorial_interfaces::srv",
  "DroneMissionPath_Response",
  _DroneMissionPath_Response__cdr_serialize,
  _DroneMissionPath_Response__cdr_deserialize,
  _DroneMissionPath_Response__get_serialized_size,
  _DroneMissionPath_Response__max_serialized_size
};

static rosidl_message_type_support_t _DroneMissionPath_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_DroneMissionPath_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tutorial_interfaces, srv, DroneMissionPath_Response)() {
  return &_DroneMissionPath_Response__type_support;
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
#include "tutorial_interfaces/srv/drone_mission_path.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t DroneMissionPath__callbacks = {
  "tutorial_interfaces::srv",
  "DroneMissionPath",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tutorial_interfaces, srv, DroneMissionPath_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tutorial_interfaces, srv, DroneMissionPath_Response)(),
};

static rosidl_service_type_support_t DroneMissionPath__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &DroneMissionPath__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tutorial_interfaces, srv, DroneMissionPath)() {
  return &DroneMissionPath__handle;
}

#if defined(__cplusplus)
}
#endif
