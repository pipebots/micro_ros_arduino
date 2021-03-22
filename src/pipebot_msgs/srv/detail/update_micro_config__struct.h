// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pipebot_msgs:srv/UpdateMicroConfig.idl
// generated code does not contain a copyright notice

#ifndef PIPEBOT_MSGS__SRV__DETAIL__UPDATE_MICRO_CONFIG__STRUCT_H_
#define PIPEBOT_MSGS__SRV__DETAIL__UPDATE_MICRO_CONFIG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'config'
#include "pipebot_msgs/msg/detail/micro_params__struct.h"

// Struct defined in srv/UpdateMicroConfig in the package pipebot_msgs.
typedef struct pipebot_msgs__srv__UpdateMicroConfig_Request
{
  pipebot_msgs__msg__MicroParams config;
} pipebot_msgs__srv__UpdateMicroConfig_Request;

// Struct for a sequence of pipebot_msgs__srv__UpdateMicroConfig_Request.
typedef struct pipebot_msgs__srv__UpdateMicroConfig_Request__Sequence
{
  pipebot_msgs__srv__UpdateMicroConfig_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pipebot_msgs__srv__UpdateMicroConfig_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/UpdateMicroConfig in the package pipebot_msgs.
typedef struct pipebot_msgs__srv__UpdateMicroConfig_Response
{
  bool success;
  rosidl_runtime_c__String message;
} pipebot_msgs__srv__UpdateMicroConfig_Response;

// Struct for a sequence of pipebot_msgs__srv__UpdateMicroConfig_Response.
typedef struct pipebot_msgs__srv__UpdateMicroConfig_Response__Sequence
{
  pipebot_msgs__srv__UpdateMicroConfig_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pipebot_msgs__srv__UpdateMicroConfig_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PIPEBOT_MSGS__SRV__DETAIL__UPDATE_MICRO_CONFIG__STRUCT_H_
