// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_msgs:msg/BboxMsg.idl
// generated code does not contain a copyright notice

#ifndef MY_MSGS__MSG__DETAIL__BBOX_MSG__STRUCT_H_
#define MY_MSGS__MSG__DETAIL__BBOX_MSG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/BboxMsg in the package my_msgs.
typedef struct my_msgs__msg__BboxMsg
{
  int32_t index;
  int32_t cls;
  float conf;
  int32_t minx;
  int32_t miny;
  int32_t maxx;
  int32_t maxy;
} my_msgs__msg__BboxMsg;

// Struct for a sequence of my_msgs__msg__BboxMsg.
typedef struct my_msgs__msg__BboxMsg__Sequence
{
  my_msgs__msg__BboxMsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_msgs__msg__BboxMsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_MSGS__MSG__DETAIL__BBOX_MSG__STRUCT_H_
