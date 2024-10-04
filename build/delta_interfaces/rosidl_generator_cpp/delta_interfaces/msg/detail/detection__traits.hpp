// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from delta_interfaces:msg/Detection.idl
// generated code does not contain a copyright notice

#ifndef DELTA_INTERFACES__MSG__DETAIL__DETECTION__TRAITS_HPP_
#define DELTA_INTERFACES__MSG__DETAIL__DETECTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "delta_interfaces/msg/detail/detection__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace delta_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Detection & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: z
  {
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << ", ";
  }

  // member: category
  {
    out << "category: ";
    rosidl_generator_traits::value_to_yaml(msg.category, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Detection & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << "\n";
  }

  // member: category
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "category: ";
    rosidl_generator_traits::value_to_yaml(msg.category, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Detection & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace delta_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use delta_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const delta_interfaces::msg::Detection & msg,
  std::ostream & out, size_t indentation = 0)
{
  delta_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use delta_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const delta_interfaces::msg::Detection & msg)
{
  return delta_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<delta_interfaces::msg::Detection>()
{
  return "delta_interfaces::msg::Detection";
}

template<>
inline const char * name<delta_interfaces::msg::Detection>()
{
  return "delta_interfaces/msg/Detection";
}

template<>
struct has_fixed_size<delta_interfaces::msg::Detection>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<delta_interfaces::msg::Detection>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<delta_interfaces::msg::Detection>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DELTA_INTERFACES__MSG__DETAIL__DETECTION__TRAITS_HPP_
