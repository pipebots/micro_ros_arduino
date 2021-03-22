// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pipebot_msgs:msg/Connected.idl
// generated code does not contain a copyright notice

#ifndef PIPEBOT_MSGS__MSG__DETAIL__CONNECTED__STRUCT_H_
#define PIPEBOT_MSGS__MSG__DETAIL__CONNECTED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/Connected in the package pipebot_msgs.
typedef struct pipebot_msgs__msg__Connected
{
  bool connected_status;
} pipebot_msgs__msg__Connected;

// Struct for a sequence of pipebot_msgs__msg__Connected.
typedef struct pipebot_msgs__msg__Connected__Sequence
{
  pipebot_msgs__msg__Connected * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pipebot_msgs__msg__Connected__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PIPEBOT_MSGS__MSG__DETAIL__CONNECTED__STRUCT_H_
