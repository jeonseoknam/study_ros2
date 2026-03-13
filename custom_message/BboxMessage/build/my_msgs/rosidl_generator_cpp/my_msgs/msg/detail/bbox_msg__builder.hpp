// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_msgs:msg/BboxMsg.idl
// generated code does not contain a copyright notice

#ifndef MY_MSGS__MSG__DETAIL__BBOX_MSG__BUILDER_HPP_
#define MY_MSGS__MSG__DETAIL__BBOX_MSG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_msgs/msg/detail/bbox_msg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_msgs
{

namespace msg
{

namespace builder
{

class Init_BboxMsg_maxy
{
public:
  explicit Init_BboxMsg_maxy(::my_msgs::msg::BboxMsg & msg)
  : msg_(msg)
  {}
  ::my_msgs::msg::BboxMsg maxy(::my_msgs::msg::BboxMsg::_maxy_type arg)
  {
    msg_.maxy = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_msgs::msg::BboxMsg msg_;
};

class Init_BboxMsg_maxx
{
public:
  explicit Init_BboxMsg_maxx(::my_msgs::msg::BboxMsg & msg)
  : msg_(msg)
  {}
  Init_BboxMsg_maxy maxx(::my_msgs::msg::BboxMsg::_maxx_type arg)
  {
    msg_.maxx = std::move(arg);
    return Init_BboxMsg_maxy(msg_);
  }

private:
  ::my_msgs::msg::BboxMsg msg_;
};

class Init_BboxMsg_miny
{
public:
  explicit Init_BboxMsg_miny(::my_msgs::msg::BboxMsg & msg)
  : msg_(msg)
  {}
  Init_BboxMsg_maxx miny(::my_msgs::msg::BboxMsg::_miny_type arg)
  {
    msg_.miny = std::move(arg);
    return Init_BboxMsg_maxx(msg_);
  }

private:
  ::my_msgs::msg::BboxMsg msg_;
};

class Init_BboxMsg_minx
{
public:
  explicit Init_BboxMsg_minx(::my_msgs::msg::BboxMsg & msg)
  : msg_(msg)
  {}
  Init_BboxMsg_miny minx(::my_msgs::msg::BboxMsg::_minx_type arg)
  {
    msg_.minx = std::move(arg);
    return Init_BboxMsg_miny(msg_);
  }

private:
  ::my_msgs::msg::BboxMsg msg_;
};

class Init_BboxMsg_conf
{
public:
  explicit Init_BboxMsg_conf(::my_msgs::msg::BboxMsg & msg)
  : msg_(msg)
  {}
  Init_BboxMsg_minx conf(::my_msgs::msg::BboxMsg::_conf_type arg)
  {
    msg_.conf = std::move(arg);
    return Init_BboxMsg_minx(msg_);
  }

private:
  ::my_msgs::msg::BboxMsg msg_;
};

class Init_BboxMsg_cls
{
public:
  explicit Init_BboxMsg_cls(::my_msgs::msg::BboxMsg & msg)
  : msg_(msg)
  {}
  Init_BboxMsg_conf cls(::my_msgs::msg::BboxMsg::_cls_type arg)
  {
    msg_.cls = std::move(arg);
    return Init_BboxMsg_conf(msg_);
  }

private:
  ::my_msgs::msg::BboxMsg msg_;
};

class Init_BboxMsg_index
{
public:
  Init_BboxMsg_index()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BboxMsg_cls index(::my_msgs::msg::BboxMsg::_index_type arg)
  {
    msg_.index = std::move(arg);
    return Init_BboxMsg_cls(msg_);
  }

private:
  ::my_msgs::msg::BboxMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_msgs::msg::BboxMsg>()
{
  return my_msgs::msg::builder::Init_BboxMsg_index();
}

}  // namespace my_msgs

#endif  // MY_MSGS__MSG__DETAIL__BBOX_MSG__BUILDER_HPP_
