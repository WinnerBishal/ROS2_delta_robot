// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from delta_interfaces:msg/Detection.idl
// generated code does not contain a copyright notice

#ifndef DELTA_INTERFACES__MSG__DETAIL__DETECTION__BUILDER_HPP_
#define DELTA_INTERFACES__MSG__DETAIL__DETECTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "delta_interfaces/msg/detail/detection__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace delta_interfaces
{

namespace msg
{

namespace builder
{

class Init_Detection_category
{
public:
  explicit Init_Detection_category(::delta_interfaces::msg::Detection & msg)
  : msg_(msg)
  {}
  ::delta_interfaces::msg::Detection category(::delta_interfaces::msg::Detection::_category_type arg)
  {
    msg_.category = std::move(arg);
    return std::move(msg_);
  }

private:
  ::delta_interfaces::msg::Detection msg_;
};

class Init_Detection_z
{
public:
  explicit Init_Detection_z(::delta_interfaces::msg::Detection & msg)
  : msg_(msg)
  {}
  Init_Detection_category z(::delta_interfaces::msg::Detection::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_Detection_category(msg_);
  }

private:
  ::delta_interfaces::msg::Detection msg_;
};

class Init_Detection_y
{
public:
  explicit Init_Detection_y(::delta_interfaces::msg::Detection & msg)
  : msg_(msg)
  {}
  Init_Detection_z y(::delta_interfaces::msg::Detection::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Detection_z(msg_);
  }

private:
  ::delta_interfaces::msg::Detection msg_;
};

class Init_Detection_x
{
public:
  Init_Detection_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Detection_y x(::delta_interfaces::msg::Detection::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Detection_y(msg_);
  }

private:
  ::delta_interfaces::msg::Detection msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::delta_interfaces::msg::Detection>()
{
  return delta_interfaces::msg::builder::Init_Detection_x();
}

}  // namespace delta_interfaces

#endif  // DELTA_INTERFACES__MSG__DETAIL__DETECTION__BUILDER_HPP_
