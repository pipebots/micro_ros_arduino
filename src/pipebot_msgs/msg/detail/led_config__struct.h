// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pipebot_msgs:msg/LedConfig.idl
// generated code does not contain a copyright notice

#ifndef PIPEBOT_MSGS__MSG__DETAIL__LED_CONFIG__STRUCT_H_
#define PIPEBOT_MSGS__MSG__DETAIL__LED_CONFIG__STRUCT_H_

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
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/LedConfig in the package pipebot_msgs.
typedef struct pipebot_msgs__msg__LedConfig
{
  rosidl_runtime_c__String name;
  uint8_t pin;
} pipebot_msgs__msg__LedConfig;

// Struct for a sequence of pipebot_msgs__msg__LedConfig.
typedef struct pipebot_msgs__msg__LedConfig__Sequence
{
  pipebot_msgs__msg__LedConfig * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pipebot_msgs__msg__LedConfig__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PIPEBOT_MSGS__MSG__DETAIL__LED_CONFIG__STRUCT_H_
