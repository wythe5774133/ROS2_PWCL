// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tutorial_interfaces:srv/DroneMissionPath.idl
// generated code does not contain a copyright notice
#include "tutorial_interfaces/srv/detail/drone_mission_path__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `speed`
// Member `altitude`
// Member `latitude`
// Member `longitude`
// Member `yaw_delta`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `point_count`
#include "rosidl_runtime_c/string_functions.h"

bool
tutorial_interfaces__srv__DroneMissionPath_Request__init(tutorial_interfaces__srv__DroneMissionPath_Request * msg)
{
  if (!msg) {
    return false;
  }
  // speed
  if (!rosidl_runtime_c__float__Sequence__init(&msg->speed, 0)) {
    tutorial_interfaces__srv__DroneMissionPath_Request__fini(msg);
    return false;
  }
  // altitude
  if (!rosidl_runtime_c__float__Sequence__init(&msg->altitude, 0)) {
    tutorial_interfaces__srv__DroneMissionPath_Request__fini(msg);
    return false;
  }
  // latitude
  if (!rosidl_runtime_c__double__Sequence__init(&msg->latitude, 0)) {
    tutorial_interfaces__srv__DroneMissionPath_Request__fini(msg);
    return false;
  }
  // longitude
  if (!rosidl_runtime_c__double__Sequence__init(&msg->longitude, 0)) {
    tutorial_interfaces__srv__DroneMissionPath_Request__fini(msg);
    return false;
  }
  // yaw_delta
  if (!rosidl_runtime_c__float__Sequence__init(&msg->yaw_delta, 0)) {
    tutorial_interfaces__srv__DroneMissionPath_Request__fini(msg);
    return false;
  }
  // point_count
  if (!rosidl_runtime_c__String__init(&msg->point_count)) {
    tutorial_interfaces__srv__DroneMissionPath_Request__fini(msg);
    return false;
  }
  return true;
}

void
tutorial_interfaces__srv__DroneMissionPath_Request__fini(tutorial_interfaces__srv__DroneMissionPath_Request * msg)
{
  if (!msg) {
    return;
  }
  // speed
  rosidl_runtime_c__float__Sequence__fini(&msg->speed);
  // altitude
  rosidl_runtime_c__float__Sequence__fini(&msg->altitude);
  // latitude
  rosidl_runtime_c__double__Sequence__fini(&msg->latitude);
  // longitude
  rosidl_runtime_c__double__Sequence__fini(&msg->longitude);
  // yaw_delta
  rosidl_runtime_c__float__Sequence__fini(&msg->yaw_delta);
  // point_count
  rosidl_runtime_c__String__fini(&msg->point_count);
}

bool
tutorial_interfaces__srv__DroneMissionPath_Request__are_equal(const tutorial_interfaces__srv__DroneMissionPath_Request * lhs, const tutorial_interfaces__srv__DroneMissionPath_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // speed
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->speed), &(rhs->speed)))
  {
    return false;
  }
  // altitude
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->altitude), &(rhs->altitude)))
  {
    return false;
  }
  // latitude
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->latitude), &(rhs->latitude)))
  {
    return false;
  }
  // longitude
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->longitude), &(rhs->longitude)))
  {
    return false;
  }
  // yaw_delta
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->yaw_delta), &(rhs->yaw_delta)))
  {
    return false;
  }
  // point_count
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->point_count), &(rhs->point_count)))
  {
    return false;
  }
  return true;
}

bool
tutorial_interfaces__srv__DroneMissionPath_Request__copy(
  const tutorial_interfaces__srv__DroneMissionPath_Request * input,
  tutorial_interfaces__srv__DroneMissionPath_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // speed
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->speed), &(output->speed)))
  {
    return false;
  }
  // altitude
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->altitude), &(output->altitude)))
  {
    return false;
  }
  // latitude
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->latitude), &(output->latitude)))
  {
    return false;
  }
  // longitude
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->longitude), &(output->longitude)))
  {
    return false;
  }
  // yaw_delta
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->yaw_delta), &(output->yaw_delta)))
  {
    return false;
  }
  // point_count
  if (!rosidl_runtime_c__String__copy(
      &(input->point_count), &(output->point_count)))
  {
    return false;
  }
  return true;
}

tutorial_interfaces__srv__DroneMissionPath_Request *
tutorial_interfaces__srv__DroneMissionPath_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tutorial_interfaces__srv__DroneMissionPath_Request * msg = (tutorial_interfaces__srv__DroneMissionPath_Request *)allocator.allocate(sizeof(tutorial_interfaces__srv__DroneMissionPath_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tutorial_interfaces__srv__DroneMissionPath_Request));
  bool success = tutorial_interfaces__srv__DroneMissionPath_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tutorial_interfaces__srv__DroneMissionPath_Request__destroy(tutorial_interfaces__srv__DroneMissionPath_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tutorial_interfaces__srv__DroneMissionPath_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tutorial_interfaces__srv__DroneMissionPath_Request__Sequence__init(tutorial_interfaces__srv__DroneMissionPath_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tutorial_interfaces__srv__DroneMissionPath_Request * data = NULL;

  if (size) {
    data = (tutorial_interfaces__srv__DroneMissionPath_Request *)allocator.zero_allocate(size, sizeof(tutorial_interfaces__srv__DroneMissionPath_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tutorial_interfaces__srv__DroneMissionPath_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tutorial_interfaces__srv__DroneMissionPath_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
tutorial_interfaces__srv__DroneMissionPath_Request__Sequence__fini(tutorial_interfaces__srv__DroneMissionPath_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tutorial_interfaces__srv__DroneMissionPath_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

tutorial_interfaces__srv__DroneMissionPath_Request__Sequence *
tutorial_interfaces__srv__DroneMissionPath_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tutorial_interfaces__srv__DroneMissionPath_Request__Sequence * array = (tutorial_interfaces__srv__DroneMissionPath_Request__Sequence *)allocator.allocate(sizeof(tutorial_interfaces__srv__DroneMissionPath_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tutorial_interfaces__srv__DroneMissionPath_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tutorial_interfaces__srv__DroneMissionPath_Request__Sequence__destroy(tutorial_interfaces__srv__DroneMissionPath_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tutorial_interfaces__srv__DroneMissionPath_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tutorial_interfaces__srv__DroneMissionPath_Request__Sequence__are_equal(const tutorial_interfaces__srv__DroneMissionPath_Request__Sequence * lhs, const tutorial_interfaces__srv__DroneMissionPath_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tutorial_interfaces__srv__DroneMissionPath_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tutorial_interfaces__srv__DroneMissionPath_Request__Sequence__copy(
  const tutorial_interfaces__srv__DroneMissionPath_Request__Sequence * input,
  tutorial_interfaces__srv__DroneMissionPath_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tutorial_interfaces__srv__DroneMissionPath_Request);
    tutorial_interfaces__srv__DroneMissionPath_Request * data =
      (tutorial_interfaces__srv__DroneMissionPath_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tutorial_interfaces__srv__DroneMissionPath_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          tutorial_interfaces__srv__DroneMissionPath_Request__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tutorial_interfaces__srv__DroneMissionPath_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
tutorial_interfaces__srv__DroneMissionPath_Response__init(tutorial_interfaces__srv__DroneMissionPath_Response * msg)
{
  if (!msg) {
    return false;
  }
  // path_check
  return true;
}

void
tutorial_interfaces__srv__DroneMissionPath_Response__fini(tutorial_interfaces__srv__DroneMissionPath_Response * msg)
{
  if (!msg) {
    return;
  }
  // path_check
}

bool
tutorial_interfaces__srv__DroneMissionPath_Response__are_equal(const tutorial_interfaces__srv__DroneMissionPath_Response * lhs, const tutorial_interfaces__srv__DroneMissionPath_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // path_check
  if (lhs->path_check != rhs->path_check) {
    return false;
  }
  return true;
}

bool
tutorial_interfaces__srv__DroneMissionPath_Response__copy(
  const tutorial_interfaces__srv__DroneMissionPath_Response * input,
  tutorial_interfaces__srv__DroneMissionPath_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // path_check
  output->path_check = input->path_check;
  return true;
}

tutorial_interfaces__srv__DroneMissionPath_Response *
tutorial_interfaces__srv__DroneMissionPath_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tutorial_interfaces__srv__DroneMissionPath_Response * msg = (tutorial_interfaces__srv__DroneMissionPath_Response *)allocator.allocate(sizeof(tutorial_interfaces__srv__DroneMissionPath_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tutorial_interfaces__srv__DroneMissionPath_Response));
  bool success = tutorial_interfaces__srv__DroneMissionPath_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tutorial_interfaces__srv__DroneMissionPath_Response__destroy(tutorial_interfaces__srv__DroneMissionPath_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tutorial_interfaces__srv__DroneMissionPath_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tutorial_interfaces__srv__DroneMissionPath_Response__Sequence__init(tutorial_interfaces__srv__DroneMissionPath_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tutorial_interfaces__srv__DroneMissionPath_Response * data = NULL;

  if (size) {
    data = (tutorial_interfaces__srv__DroneMissionPath_Response *)allocator.zero_allocate(size, sizeof(tutorial_interfaces__srv__DroneMissionPath_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tutorial_interfaces__srv__DroneMissionPath_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tutorial_interfaces__srv__DroneMissionPath_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
tutorial_interfaces__srv__DroneMissionPath_Response__Sequence__fini(tutorial_interfaces__srv__DroneMissionPath_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tutorial_interfaces__srv__DroneMissionPath_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

tutorial_interfaces__srv__DroneMissionPath_Response__Sequence *
tutorial_interfaces__srv__DroneMissionPath_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tutorial_interfaces__srv__DroneMissionPath_Response__Sequence * array = (tutorial_interfaces__srv__DroneMissionPath_Response__Sequence *)allocator.allocate(sizeof(tutorial_interfaces__srv__DroneMissionPath_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tutorial_interfaces__srv__DroneMissionPath_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tutorial_interfaces__srv__DroneMissionPath_Response__Sequence__destroy(tutorial_interfaces__srv__DroneMissionPath_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tutorial_interfaces__srv__DroneMissionPath_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tutorial_interfaces__srv__DroneMissionPath_Response__Sequence__are_equal(const tutorial_interfaces__srv__DroneMissionPath_Response__Sequence * lhs, const tutorial_interfaces__srv__DroneMissionPath_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tutorial_interfaces__srv__DroneMissionPath_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tutorial_interfaces__srv__DroneMissionPath_Response__Sequence__copy(
  const tutorial_interfaces__srv__DroneMissionPath_Response__Sequence * input,
  tutorial_interfaces__srv__DroneMissionPath_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tutorial_interfaces__srv__DroneMissionPath_Response);
    tutorial_interfaces__srv__DroneMissionPath_Response * data =
      (tutorial_interfaces__srv__DroneMissionPath_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tutorial_interfaces__srv__DroneMissionPath_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          tutorial_interfaces__srv__DroneMissionPath_Response__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tutorial_interfaces__srv__DroneMissionPath_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
