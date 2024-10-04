// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from delta_interfaces:msg/AllDetections.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "delta_interfaces/msg/detail/all_detections__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace delta_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void AllDetections_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) delta_interfaces::msg::AllDetections(_init);
}

void AllDetections_fini_function(void * message_memory)
{
  auto typed_message = static_cast<delta_interfaces::msg::AllDetections *>(message_memory);
  typed_message->~AllDetections();
}

size_t size_function__AllDetections__detections(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<delta_interfaces::msg::Detection> *>(untyped_member);
  return member->size();
}

const void * get_const_function__AllDetections__detections(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<delta_interfaces::msg::Detection> *>(untyped_member);
  return &member[index];
}

void * get_function__AllDetections__detections(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<delta_interfaces::msg::Detection> *>(untyped_member);
  return &member[index];
}

void fetch_function__AllDetections__detections(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const delta_interfaces::msg::Detection *>(
    get_const_function__AllDetections__detections(untyped_member, index));
  auto & value = *reinterpret_cast<delta_interfaces::msg::Detection *>(untyped_value);
  value = item;
}

void assign_function__AllDetections__detections(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<delta_interfaces::msg::Detection *>(
    get_function__AllDetections__detections(untyped_member, index));
  const auto & value = *reinterpret_cast<const delta_interfaces::msg::Detection *>(untyped_value);
  item = value;
}

void resize_function__AllDetections__detections(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<delta_interfaces::msg::Detection> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember AllDetections_message_member_array[3] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delta_interfaces::msg::AllDetections, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "detections",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<delta_interfaces::msg::Detection>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delta_interfaces::msg::AllDetections, detections),  // bytes offset in struct
    nullptr,  // default value
    size_function__AllDetections__detections,  // size() function pointer
    get_const_function__AllDetections__detections,  // get_const(index) function pointer
    get_function__AllDetections__detections,  // get(index) function pointer
    fetch_function__AllDetections__detections,  // fetch(index, &value) function pointer
    assign_function__AllDetections__detections,  // assign(index, value) function pointer
    resize_function__AllDetections__detections  // resize(index) function pointer
  },
  {
    "frame_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delta_interfaces::msg::AllDetections, frame_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers AllDetections_message_members = {
  "delta_interfaces::msg",  // message namespace
  "AllDetections",  // message name
  3,  // number of fields
  sizeof(delta_interfaces::msg::AllDetections),
  AllDetections_message_member_array,  // message members
  AllDetections_init_function,  // function to initialize message memory (memory has to be allocated)
  AllDetections_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t AllDetections_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &AllDetections_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace delta_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<delta_interfaces::msg::AllDetections>()
{
  return &::delta_interfaces::msg::rosidl_typesupport_introspection_cpp::AllDetections_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, delta_interfaces, msg, AllDetections)() {
  return &::delta_interfaces::msg::rosidl_typesupport_introspection_cpp::AllDetections_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
