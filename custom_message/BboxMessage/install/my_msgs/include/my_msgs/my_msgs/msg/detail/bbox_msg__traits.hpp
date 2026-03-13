// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from my_msgs:msg/BboxMsg.idl
// generated code does not contain a copyright notice

#ifndef MY_MSGS__MSG__DETAIL__BBOX_MSG__TRAITS_HPP_
#define MY_MSGS__MSG__DETAIL__BBOX_MSG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "my_msgs/msg/detail/bbox_msg__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace my_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const BboxMsg & msg,
  std::ostream & out)
{
  out << "{";
  // member: index
  {
    out << "index: ";
    rosidl_generator_traits::value_to_yaml(msg.index, out);
    out << ", ";
  }

  // member: cls
  {
    out << "cls: ";
    rosidl_generator_traits::value_to_yaml(msg.cls, out);
    out << ", ";
  }

  // member: conf
  {
    out << "conf: ";
    rosidl_generator_traits::value_to_yaml(msg.conf, out);
    out << ", ";
  }

  // member: minx
  {
    out << "minx: ";
    rosidl_generator_traits::value_to_yaml(msg.minx, out);
    out << ", ";
  }

  // member: miny
  {
    out << "miny: ";
    rosidl_generator_traits::value_to_yaml(msg.miny, out);
    out << ", ";
  }

  // member: maxx
  {
    out << "maxx: ";
    rosidl_generator_traits::value_to_yaml(msg.maxx, out);
    out << ", ";
  }

  // member: maxy
  {
    out << "maxy: ";
    rosidl_generator_traits::value_to_yaml(msg.maxy, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BboxMsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "index: ";
    rosidl_generator_traits::value_to_yaml(msg.index, out);
    out << "\n";
  }

  // member: cls
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cls: ";
    rosidl_generator_traits::value_to_yaml(msg.cls, out);
    out << "\n";
  }

  // member: conf
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "conf: ";
    rosidl_generator_traits::value_to_yaml(msg.conf, out);
    out << "\n";
  }

  // member: minx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "minx: ";
    rosidl_generator_traits::value_to_yaml(msg.minx, out);
    out << "\n";
  }

  // member: miny
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "miny: ";
    rosidl_generator_traits::value_to_yaml(msg.miny, out);
    out << "\n";
  }

  // member: maxx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "maxx: ";
    rosidl_generator_traits::value_to_yaml(msg.maxx, out);
    out << "\n";
  }

  // member: maxy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "maxy: ";
    rosidl_generator_traits::value_to_yaml(msg.maxy, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BboxMsg & msg, bool use_flow_style = false)
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

}  // namespace my_msgs

namespace rosidl_generator_traits
{

[[deprecated("use my_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_msgs::msg::BboxMsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const my_msgs::msg::BboxMsg & msg)
{
  return my_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<my_msgs::msg::BboxMsg>()
{
  return "my_msgs::msg::BboxMsg";
}

template<>
inline const char * name<my_msgs::msg::BboxMsg>()
{
  return "my_msgs/msg/BboxMsg";
}

template<>
struct has_fixed_size<my_msgs::msg::BboxMsg>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<my_msgs::msg::BboxMsg>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<my_msgs::msg::BboxMsg>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MY_MSGS__MSG__DETAIL__BBOX_MSG__TRAITS_HPP_
