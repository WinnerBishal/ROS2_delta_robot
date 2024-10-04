// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from delta_interfaces:msg/Detection.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "delta_interfaces/msg/detail/detection__rosidl_typesupport_introspection_c.h"
#include "delta_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "delta_interfaces/msg/detail/detection__functions.h"
#include "delta_interfaces/msg/detail/detection__struct.h"


// Include directives for member types
// Member `category`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void delta_interfaces__msg__Detection__rosidl_typesupport_introspection_c__Detection_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  delta_interfaces__msg__Detection__init(message_memory);
}

void delta_interfaces__msg__Detection__rosidl_typesupport_introspection_c__Detection_fini_function(void * message_memory)
{
  delta_interfaces__msg__Detection__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember delta_interfaces__msg__Detection__rosidl_typesupport_introspection_c__Detection_message_member_array[4] = {
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delta_interfaces__msg__Detection, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delta_interfaces__msg__Detection, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delta_interfaces__msg__Detection, z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "category",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delta_interfaces__msg__Detection, category),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers delta_interfaces__msg__Detection__rosidl_typesupport_introspection_c__Detection_message_members = {
  "delta_interfaces__msg",  // message namespace
  "Detection",  // message name
  4,  // number of fields
  sizeof(delta_interfaces__msg__Detection),
  delta_interfaces__msg__Detection__rosidl_typesupport_introspection_c__Detection_message_member_array,  // message members
  delta_interfaces__msg__Detection__rosidl_typesupport_introspection_c__Detection_init_function,  // function to initialize message memory (memory has to be allocated)
  delta_interfaces__msg__Detection__rosidl_typesupport_introspection_c__Detection_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t delta_interfaces__msg__Detection__rosidl_typesupport_introspection_c__Detection_message_type_support_handle = {
  0,
  &delta_interfaces__msg__Detection__rosidl_typesupport_introspection_c__Detection_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_delta_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, delta_interfaces, msg, Detection)() {
  if (!delta_interfaces__msg__Detection__rosidl_typesupport_introspection_c__Detection_message_type_support_handle.typesupport_identifier) {
    delta_interfaces__msg__Detection__rosidl_typesupport_introspection_c__Detection_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &delta_interfaces__msg__Detection__rosidl_typesupport_introspection_c__Detection_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
