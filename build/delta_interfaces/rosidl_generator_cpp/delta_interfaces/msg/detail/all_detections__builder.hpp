// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from delta_interfaces:msg/AllDetections.idl
// generated code does not contain a copyright notice

#ifndef DELTA_INTERFACES__MSG__DETAIL__ALL_DETECTIONS__BUILDER_HPP_
#define DELTA_INTERFACES__MSG__DETAIL__ALL_DETECTIONS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "delta_interfaces/msg/detail/all_detections__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace delta_interfaces
{

namespace msg
{

namespace builder
{

class Init_AllDetections_frame_id
{
public:
  explicit Init_AllDetections_frame_id(::delta_interfaces::msg::AllDetections & msg)
  : msg_(msg)
  {}
  ::delta_interfaces::msg::AllDetections frame_id(::delta_interfaces::msg::AllDetections::_frame_id_type arg)
  {
    msg_.frame_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::delta_interfaces::msg::AllDetections msg_;
};

class Init_AllDetections_detections
{
public:
  explicit Init_AllDetections_detections(::delta_interfaces::msg::AllDetections & msg)
  : msg_(msg)
  {}
  Init_AllDetections_frame_id detections(::delta_interfaces::msg::AllDetections::_detections_type arg)
  {
    msg_.detections = std::move(arg);
    return Init_AllDetections_frame_id(msg_);
  }

private:
  ::delta_interfaces::msg::AllDetections msg_;
};

class Init_AllDetections_header
{
public:
  Init_AllDetections_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AllDetections_detections header(::delta_interfaces::msg::AllDetections::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_AllDetections_detections(msg_);
  }

private:
  ::delta_interfaces::msg::AllDetections msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::delta_interfaces::msg::AllDetections>()
{
  return delta_interfaces::msg::builder::Init_AllDetections_header();
}

}  // namespace delta_interfaces

#endif  // DELTA_INTERFACES__MSG__DETAIL__ALL_DETECTIONS__BUILDER_HPP_
