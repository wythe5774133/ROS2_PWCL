// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from mavros_msgs:msg/PlayTuneV2.idl
// generated code does not contain a copyright notice
#include "mavros_msgs/msg/detail/play_tune_v2__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "mavros_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mavros_msgs/msg/detail/play_tune_v2__struct.h"
#include "mavros_msgs/msg/detail/play_tune_v2__functions.h"
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

#include "rosidl_runtime_c/string.h"  // tune
#include "rosidl_runtime_c/string_functions.h"  // tune

// forward declare type support functions


using _PlayTuneV2__ros_msg_type = mavros_msgs__msg__PlayTuneV2;

static bool _PlayTuneV2__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PlayTuneV2__ros_msg_type * ros_message = static_cast<const _PlayTuneV2__ros_msg_type *>(untyped_ros_message);
  // Field name: format
  {
    cdr << ros_message->format;
  }

  // Field name: tune
  {
    const rosidl_runtime_c__String * str = &ros_message->tune;
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

static bool _PlayTuneV2__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PlayTuneV2__ros_msg_type * ros_message = static_cast<_PlayTuneV2__ros_msg_type *>(untyped_ros_message);
  // Field name: format
  {
    cdr >> ros_message->format;
  }

  // Field name: tune
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->tune.data) {
      rosidl_runtime_c__String__init(&ros_message->tune);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->tune,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'tune'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mavros_msgs
size_t get_serialized_size_mavros_msgs__msg__PlayTuneV2(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PlayTuneV2__ros_msg_type * ros_message = static_cast<const _PlayTuneV2__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name format
  {
    size_t item_size = sizeof(ros_message->format);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tune
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->tune.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _PlayTuneV2__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_mavros_msgs__msg__PlayTuneV2(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mavros_msgs
size_t max_serialized_size_mavros_msgs__msg__PlayTuneV2(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: format
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: tune
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

static size_t _PlayTuneV2__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_mavros_msgs__msg__PlayTuneV2(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_PlayTuneV2 = {
  "mavros_msgs::msg",
  "PlayTuneV2",
  _PlayTuneV2__cdr_serialize,
  _PlayTuneV2__cdr_deserialize,
  _PlayTuneV2__get_serialized_size,
  _PlayTuneV2__max_serialized_size
};

static rosidl_message_type_support_t _PlayTuneV2__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PlayTuneV2,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mavros_msgs, msg, PlayTuneV2)() {
  return &_PlayTuneV2__type_support;
}

#if defined(__cplusplus)
}
#endif
