// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from delta_interfaces:msg/AllDetections.idl
// generated code does not contain a copyright notice

#ifndef DELTA_INTERFACES__MSG__DETAIL__ALL_DETECTIONS__TRAITS_HPP_
#define DELTA_INTERFACES__MSG__DETAIL__ALL_DETECTIONS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "delta_interfaces/msg/detail/all_detections__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'detections'
#include "delta_interfaces/msg/detail/detection__traits.hpp"

namespace delta_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const AllDetections & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: detections
  {
    if (msg.detections.size() == 0) {
      out << "detections: []";
    } else {
      out << "detections: [";
      size_t pending_items = msg.detections.size();
      for (auto item : msg.detections) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: frame_id
  {
    out << "frame_id: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AllDetections & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: detections
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.detections.size() == 0) {
      out << "detections: []\n";
    } else {
      out << "detections:\n";
      for (auto item : msg.detections) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: frame_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frame_id: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AllDetections & msg, bool use_flow_style = false)
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
  const delta_interfaces::msg::AllDetections & msg,
  std::ostream & out, size_t indentation = 0)
{
  delta_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use delta_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const delta_interfaces::msg::AllDetections & msg)
{
  return delta_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<delta_interfaces::msg::AllDetections>()
{
  return "delta_interfaces::msg::AllDetections";
}

template<>
inline const char * name<delta_interfaces::msg::AllDetections>()
{
  return "delta_interfaces/msg/AllDetections";
}

template<>
struct has_fixed_size<delta_interfaces::msg::AllDetections>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<delta_interfaces::msg::AllDetections>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<delta_interfaces::msg::AllDetections>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DELTA_INTERFACES__MSG__DETAIL__ALL_DETECTIONS__TRAITS_HPP_
