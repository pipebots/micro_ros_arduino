// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pipebot_msgs:msg/EncoderConfig.idl
// generated code does not contain a copyright notice

#ifndef PIPEBOT_MSGS__MSG__DETAIL__ENCODER_CONFIG__STRUCT_H_
#define PIPEBOT_MSGS__MSG__DETAIL__ENCODER_CONFIG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
// Member 'id'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/EncoderConfig in the package pipebot_msgs.
typedef struct pipebot_msgs__msg__EncoderConfig
{
  rosidl_runtime_c__String name;
  rosidl_runtime_c__String id;
  uint8_t pin_a;
  uint8_t pin_b;
  uint16_t counts_per_rev;
  bool inverse;
} pipebot_msgs__msg__EncoderConfig;

// Struct for a sequence of pipebot_msgs__msg__EncoderConfig.
typedef struct pipebot_msgs__msg__EncoderConfig__Sequence
{
  pipebot_msgs__msg__EncoderConfig * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pipebot_msgs__msg__EncoderConfig__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PIPEBOT_MSGS__MSG__DETAIL__ENCODER_CONFIG__STRUCT_H_
