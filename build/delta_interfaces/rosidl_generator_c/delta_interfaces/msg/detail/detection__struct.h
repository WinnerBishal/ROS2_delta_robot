// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from delta_interfaces:msg/Detection.idl
// generated code does not contain a copyright notice

#ifndef DELTA_INTERFACES__MSG__DETAIL__DETECTION__STRUCT_H_
#define DELTA_INTERFACES__MSG__DETAIL__DETECTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'category'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Detection in the package delta_interfaces.
typedef struct delta_interfaces__msg__Detection
{
  double x;
  double y;
  double z;
  rosidl_runtime_c__String category;
} delta_interfaces__msg__Detection;

// Struct for a sequence of delta_interfaces__msg__Detection.
typedef struct delta_interfaces__msg__Detection__Sequence
{
  delta_interfaces__msg__Detection * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} delta_interfaces__msg__Detection__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DELTA_INTERFACES__MSG__DETAIL__DETECTION__STRUCT_H_
