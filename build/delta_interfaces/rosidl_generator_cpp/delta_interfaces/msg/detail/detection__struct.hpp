// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from delta_interfaces:msg/Detection.idl
// generated code does not contain a copyright notice

#ifndef DELTA_INTERFACES__MSG__DETAIL__DETECTION__STRUCT_HPP_
#define DELTA_INTERFACES__MSG__DETAIL__DETECTION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__delta_interfaces__msg__Detection __attribute__((deprecated))
#else
# define DEPRECATED__delta_interfaces__msg__Detection __declspec(deprecated)
#endif

namespace delta_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Detection_
{
  using Type = Detection_<ContainerAllocator>;

  explicit Detection_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
      this->category = "";
    }
  }

  explicit Detection_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : category(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
      this->category = "";
    }
  }

  // field types and members
  using _x_type =
    double;
  _x_type x;
  using _y_type =
    double;
  _y_type y;
  using _z_type =
    double;
  _z_type z;
  using _category_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _category_type category;

  // setters for named parameter idiom
  Type & set__x(
    const double & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const double & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__z(
    const double & _arg)
  {
    this->z = _arg;
    return *this;
  }
  Type & set__category(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->category = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    delta_interfaces::msg::Detection_<ContainerAllocator> *;
  using ConstRawPtr =
    const delta_interfaces::msg::Detection_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<delta_interfaces::msg::Detection_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<delta_interfaces::msg::Detection_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      delta_interfaces::msg::Detection_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<delta_interfaces::msg::Detection_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      delta_interfaces::msg::Detection_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<delta_interfaces::msg::Detection_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<delta_interfaces::msg::Detection_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<delta_interfaces::msg::Detection_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__delta_interfaces__msg__Detection
    std::shared_ptr<delta_interfaces::msg::Detection_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__delta_interfaces__msg__Detection
    std::shared_ptr<delta_interfaces::msg::Detection_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Detection_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->z != other.z) {
      return false;
    }
    if (this->category != other.category) {
      return false;
    }
    return true;
  }
  bool operator!=(const Detection_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Detection_

// alias to use template instance with default allocator
using Detection =
  delta_interfaces::msg::Detection_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace delta_interfaces

#endif  // DELTA_INTERFACES__MSG__DETAIL__DETECTION__STRUCT_HPP_
