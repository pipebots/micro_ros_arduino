// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pipebot_msgs:msg/Encoders.idl
// generated code does not contain a copyright notice

#ifndef PIPEBOT_MSGS__MSG__DETAIL__ENCODERS__STRUCT_H_
#define PIPEBOT_MSGS__MSG__DETAIL__ENCODERS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/Encoders in the package pipebot_msgs.
typedef struct pipebot_msgs__msg__Encoders
{
  int64_t ticks;
  int64_t wheel_revs;
  float wheel_angle_deg;
} pipebot_msgs__msg__Encoders;

// Struct for a sequence of pipebot_msgs__msg__Encoders.
typedef struct pipebot_msgs__msg__Encoders__Sequence
{
  pipebot_msgs__msg__Encoders * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pipebot_msgs__msg__Encoders__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PIPEBOT_MSGS__MSG__DETAIL__ENCODERS__STRUCT_H_
