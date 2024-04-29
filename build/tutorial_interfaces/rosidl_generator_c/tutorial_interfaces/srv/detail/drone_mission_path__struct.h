// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tutorial_interfaces:srv/DroneMissionPath.idl
// generated code does not contain a copyright notice

#ifndef TUTORIAL_INTERFACES__SRV__DETAIL__DRONE_MISSION_PATH__STRUCT_H_
#define TUTORIAL_INTERFACES__SRV__DETAIL__DRONE_MISSION_PATH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'speed'
// Member 'altitude'
// Member 'latitude'
// Member 'longitude'
// Member 'yaw_delta'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'point_count'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/DroneMissionPath in the package tutorial_interfaces.
typedef struct tutorial_interfaces__srv__DroneMissionPath_Request
{
  rosidl_runtime_c__float__Sequence speed;
  rosidl_runtime_c__float__Sequence altitude;
  rosidl_runtime_c__double__Sequence latitude;
  rosidl_runtime_c__double__Sequence longitude;
  rosidl_runtime_c__float__Sequence yaw_delta;
  rosidl_runtime_c__String point_count;
} tutorial_interfaces__srv__DroneMissionPath_Request;

// Struct for a sequence of tutorial_interfaces__srv__DroneMissionPath_Request.
typedef struct tutorial_interfaces__srv__DroneMissionPath_Request__Sequence
{
  tutorial_interfaces__srv__DroneMissionPath_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tutorial_interfaces__srv__DroneMissionPath_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/DroneMissionPath in the package tutorial_interfaces.
typedef struct tutorial_interfaces__srv__DroneMissionPath_Response
{
  bool path_check;
} tutorial_interfaces__srv__DroneMissionPath_Response;

// Struct for a sequence of tutorial_interfaces__srv__DroneMissionPath_Response.
typedef struct tutorial_interfaces__srv__DroneMissionPath_Response__Sequence
{
  tutorial_interfaces__srv__DroneMissionPath_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tutorial_interfaces__srv__DroneMissionPath_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TUTORIAL_INTERFACES__SRV__DETAIL__DRONE_MISSION_PATH__STRUCT_H_
