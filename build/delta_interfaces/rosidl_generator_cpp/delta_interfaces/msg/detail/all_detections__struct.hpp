// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from delta_interfaces:msg/AllDetections.idl
// generated code does not contain a copyright notice

#ifndef DELTA_INTERFACES__MSG__DETAIL__ALL_DETECTIONS__STRUCT_HPP_
#define DELTA_INTERFACES__MSG__DETAIL__ALL_DETECTIONS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'detections'
#include "delta_interfaces/msg/detail/detection__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__delta_interfaces__msg__AllDetections __attribute__((deprecated))
#else
# define DEPRECATED__delta_interfaces__msg__AllDetections __declspec(deprecated)
#endif

namespace delta_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AllDetections_
{
  using Type = AllDetections_<ContainerAllocator>;

  explicit AllDetections_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->frame_id = 0ll;
    }
  }

  explicit AllDetections_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->frame_id = 0ll;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _detections_type =
    std::vector<delta_interfaces::msg::Detection_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<delta_interfaces::msg::Detection_<ContainerAllocator>>>;
  _detections_type detections;
  using _frame_id_type =
    int64_t;
  _frame_id_type frame_id;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__detections(
    const std::vector<delta_interfaces::msg::Detection_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<delta_interfaces::msg::Detection_<ContainerAllocator>>> & _arg)
  {
    this->detections = _arg;
    return *this;
  }
  Type & set__frame_id(
    const int64_t & _arg)
  {
    this->frame_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    delta_interfaces::msg::AllDetections_<ContainerAllocator> *;
  using ConstRawPtr =
    const delta_interfaces::msg::AllDetections_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<delta_interfaces::msg::AllDetections_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<delta_interfaces::msg::AllDetections_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      delta_interfaces::msg::AllDetections_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<delta_interfaces::msg::AllDetections_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      delta_interfaces::msg::AllDetections_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<delta_interfaces::msg::AllDetections_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<delta_interfaces::msg::AllDetections_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<delta_interfaces::msg::AllDetections_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__delta_interfaces__msg__AllDetections
    std::shared_ptr<delta_interfaces::msg::AllDetections_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__delta_interfaces__msg__AllDetections
    std::shared_ptr<delta_interfaces::msg::AllDetections_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AllDetections_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->detections != other.detections) {
      return false;
    }
    if (this->frame_id != other.frame_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const AllDetections_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AllDetections_

// alias to use template instance with default allocator
using AllDetections =
  delta_interfaces::msg::AllDetections_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace delta_interfaces

#endif  // DELTA_INTERFACES__MSG__DETAIL__ALL_DETECTIONS__STRUCT_HPP_
