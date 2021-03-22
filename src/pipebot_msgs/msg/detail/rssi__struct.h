// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pipebot_msgs:msg/Rssi.idl
// generated code does not contain a copyright notice

#ifndef PIPEBOT_MSGS__MSG__DETAIL__RSSI__STRUCT_H_
#define PIPEBOT_MSGS__MSG__DETAIL__RSSI__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'network_id'
// Member 'rssi_units'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/Rssi in the package pipebot_msgs.
typedef struct pipebot_msgs__msg__Rssi
{
  rosidl_runtime_c__String network_id;
  float rssi_value;
  rosidl_runtime_c__String rssi_units;
} pipebot_msgs__msg__Rssi;

// Struct for a sequence of pipebot_msgs__msg__Rssi.
typedef struct pipebot_msgs__msg__Rssi__Sequence
{
  pipebot_msgs__msg__Rssi * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pipebot_msgs__msg__Rssi__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PIPEBOT_MSGS__MSG__DETAIL__RSSI__STRUCT_H_
