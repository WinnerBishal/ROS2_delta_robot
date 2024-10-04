// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from delta_interfaces:msg/AllDetections.idl
// generated code does not contain a copyright notice

#ifndef DELTA_INTERFACES__MSG__DETAIL__ALL_DETECTIONS__STRUCT_H_
#define DELTA_INTERFACES__MSG__DETAIL__ALL_DETECTIONS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'detections'
#include "delta_interfaces/msg/detail/detection__struct.h"

/// Struct defined in msg/AllDetections in the package delta_interfaces.
typedef struct delta_interfaces__msg__AllDetections
{
  std_msgs__msg__Header header;
  delta_interfaces__msg__Detection__Sequence detections;
  int64_t frame_id;
} delta_interfaces__msg__AllDetections;

// Struct for a sequence of delta_interfaces__msg__AllDetections.
typedef struct delta_interfaces__msg__AllDetections__Sequence
{
  delta_interfaces__msg__AllDetections * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} delta_interfaces__msg__AllDetections__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DELTA_INTERFACES__MSG__DETAIL__ALL_DETECTIONS__STRUCT_H_
