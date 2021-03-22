// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pipebot_msgs:msg/DataReceived.idl
// generated code does not contain a copyright notice

#ifndef PIPEBOT_MSGS__MSG__DETAIL__DATA_RECEIVED__STRUCT_H_
#define PIPEBOT_MSGS__MSG__DETAIL__DATA_RECEIVED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'dest_subsystem'
// Member 'source_id'
#include "rosidl_runtime_c/string.h"
// Member 'payload'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/DataReceived in the package pipebot_msgs.
typedef struct pipebot_msgs__msg__DataReceived
{
  rosidl_runtime_c__String dest_subsystem;
  rosidl_runtime_c__String source_id;
  rosidl_runtime_c__octet__Sequence payload;
} pipebot_msgs__msg__DataReceived;

// Struct for a sequence of pipebot_msgs__msg__DataReceived.
typedef struct pipebot_msgs__msg__DataReceived__Sequence
{
  pipebot_msgs__msg__DataReceived * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pipebot_msgs__msg__DataReceived__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PIPEBOT_MSGS__MSG__DETAIL__DATA_RECEIVED__STRUCT_H_
