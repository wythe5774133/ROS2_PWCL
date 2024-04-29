// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mavros_msgs:msg/CellularStatus.idl
// generated code does not contain a copyright notice
#include "mavros_msgs/msg/detail/cellular_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
mavros_msgs__msg__CellularStatus__init(mavros_msgs__msg__CellularStatus * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // failure_reason
  // type
  // quality
  // mcc
  // mnc
  // lac
  return true;
}

void
mavros_msgs__msg__CellularStatus__fini(mavros_msgs__msg__CellularStatus * msg)
{
  if (!msg) {
    return;
  }
  // status
  // failure_reason
  // type
  // quality
  // mcc
  // mnc
  // lac
}

bool
mavros_msgs__msg__CellularStatus__are_equal(const mavros_msgs__msg__CellularStatus * lhs, const mavros_msgs__msg__CellularStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // failure_reason
  if (lhs->failure_reason != rhs->failure_reason) {
    return false;
  }
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  // quality
  if (lhs->quality != rhs->quality) {
    return false;
  }
  // mcc
  if (lhs->mcc != rhs->mcc) {
    return false;
  }
  // mnc
  if (lhs->mnc != rhs->mnc) {
    return false;
  }
  // lac
  if (lhs->lac != rhs->lac) {
    return false;
  }
  return true;
}

bool
mavros_msgs__msg__CellularStatus__copy(
  const mavros_msgs__msg__CellularStatus * input,
  mavros_msgs__msg__CellularStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // failure_reason
  output->failure_reason = input->failure_reason;
  // type
  output->type = input->type;
  // quality
  output->quality = input->quality;
  // mcc
  output->mcc = input->mcc;
  // mnc
  output->mnc = input->mnc;
  // lac
  output->lac = input->lac;
  return true;
}

mavros_msgs__msg__CellularStatus *
mavros_msgs__msg__CellularStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mavros_msgs__msg__CellularStatus * msg = (mavros_msgs__msg__CellularStatus *)allocator.allocate(sizeof(mavros_msgs__msg__CellularStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mavros_msgs__msg__CellularStatus));
  bool success = mavros_msgs__msg__CellularStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mavros_msgs__msg__CellularStatus__destroy(mavros_msgs__msg__CellularStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mavros_msgs__msg__CellularStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mavros_msgs__msg__CellularStatus__Sequence__init(mavros_msgs__msg__CellularStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mavros_msgs__msg__CellularStatus * data = NULL;

  if (size) {
    data = (mavros_msgs__msg__CellularStatus *)allocator.zero_allocate(size, sizeof(mavros_msgs__msg__CellularStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mavros_msgs__msg__CellularStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mavros_msgs__msg__CellularStatus__fini(&data[i - 1]);
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
mavros_msgs__msg__CellularStatus__Sequence__fini(mavros_msgs__msg__CellularStatus__Sequence * array)
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
      mavros_msgs__msg__CellularStatus__fini(&array->data[i]);
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

mavros_msgs__msg__CellularStatus__Sequence *
mavros_msgs__msg__CellularStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mavros_msgs__msg__CellularStatus__Sequence * array = (mavros_msgs__msg__CellularStatus__Sequence *)allocator.allocate(sizeof(mavros_msgs__msg__CellularStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mavros_msgs__msg__CellularStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mavros_msgs__msg__CellularStatus__Sequence__destroy(mavros_msgs__msg__CellularStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mavros_msgs__msg__CellularStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mavros_msgs__msg__CellularStatus__Sequence__are_equal(const mavros_msgs__msg__CellularStatus__Sequence * lhs, const mavros_msgs__msg__CellularStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mavros_msgs__msg__CellularStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mavros_msgs__msg__CellularStatus__Sequence__copy(
  const mavros_msgs__msg__CellularStatus__Sequence * input,
  mavros_msgs__msg__CellularStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mavros_msgs__msg__CellularStatus);
    mavros_msgs__msg__CellularStatus * data =
      (mavros_msgs__msg__CellularStatus *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mavros_msgs__msg__CellularStatus__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          mavros_msgs__msg__CellularStatus__fini(&data[i]);
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
    if (!mavros_msgs__msg__CellularStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
