// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from my_msgs:msg/BboxMsg.idl
// generated code does not contain a copyright notice

#ifndef MY_MSGS__MSG__DETAIL__BBOX_MSG__STRUCT_HPP_
#define MY_MSGS__MSG__DETAIL__BBOX_MSG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__my_msgs__msg__BboxMsg __attribute__((deprecated))
#else
# define DEPRECATED__my_msgs__msg__BboxMsg __declspec(deprecated)
#endif

namespace my_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BboxMsg_
{
  using Type = BboxMsg_<ContainerAllocator>;

  explicit BboxMsg_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->index = 0l;
      this->cls = 0l;
      this->conf = 0.0f;
      this->minx = 0l;
      this->miny = 0l;
      this->maxx = 0l;
      this->maxy = 0l;
    }
  }

  explicit BboxMsg_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->index = 0l;
      this->cls = 0l;
      this->conf = 0.0f;
      this->minx = 0l;
      this->miny = 0l;
      this->maxx = 0l;
      this->maxy = 0l;
    }
  }

  // field types and members
  using _index_type =
    int32_t;
  _index_type index;
  using _cls_type =
    int32_t;
  _cls_type cls;
  using _conf_type =
    float;
  _conf_type conf;
  using _minx_type =
    int32_t;
  _minx_type minx;
  using _miny_type =
    int32_t;
  _miny_type miny;
  using _maxx_type =
    int32_t;
  _maxx_type maxx;
  using _maxy_type =
    int32_t;
  _maxy_type maxy;

  // setters for named parameter idiom
  Type & set__index(
    const int32_t & _arg)
  {
    this->index = _arg;
    return *this;
  }
  Type & set__cls(
    const int32_t & _arg)
  {
    this->cls = _arg;
    return *this;
  }
  Type & set__conf(
    const float & _arg)
  {
    this->conf = _arg;
    return *this;
  }
  Type & set__minx(
    const int32_t & _arg)
  {
    this->minx = _arg;
    return *this;
  }
  Type & set__miny(
    const int32_t & _arg)
  {
    this->miny = _arg;
    return *this;
  }
  Type & set__maxx(
    const int32_t & _arg)
  {
    this->maxx = _arg;
    return *this;
  }
  Type & set__maxy(
    const int32_t & _arg)
  {
    this->maxy = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_msgs::msg::BboxMsg_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_msgs::msg::BboxMsg_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_msgs::msg::BboxMsg_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_msgs::msg::BboxMsg_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_msgs::msg::BboxMsg_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_msgs::msg::BboxMsg_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_msgs::msg::BboxMsg_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_msgs::msg::BboxMsg_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_msgs::msg::BboxMsg_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_msgs::msg::BboxMsg_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_msgs__msg__BboxMsg
    std::shared_ptr<my_msgs::msg::BboxMsg_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_msgs__msg__BboxMsg
    std::shared_ptr<my_msgs::msg::BboxMsg_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BboxMsg_ & other) const
  {
    if (this->index != other.index) {
      return false;
    }
    if (this->cls != other.cls) {
      return false;
    }
    if (this->conf != other.conf) {
      return false;
    }
    if (this->minx != other.minx) {
      return false;
    }
    if (this->miny != other.miny) {
      return false;
    }
    if (this->maxx != other.maxx) {
      return false;
    }
    if (this->maxy != other.maxy) {
      return false;
    }
    return true;
  }
  bool operator!=(const BboxMsg_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BboxMsg_

// alias to use template instance with default allocator
using BboxMsg =
  my_msgs::msg::BboxMsg_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace my_msgs

#endif  // MY_MSGS__MSG__DETAIL__BBOX_MSG__STRUCT_HPP_
