// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pipebot_msgs:srv/SendData.idl
// generated code does not contain a copyright notice

#ifndef PIPEBOT_MSGS__SRV__DETAIL__SEND_DATA__STRUCT_H_
#define PIPEBOT_MSGS__SRV__DETAIL__SEND_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'source_id'
#include "rosidl_runtime_c/string.h"
// Member 'payload'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in srv/SendData in the package pipebot_msgs.
typedef struct pipebot_msgs__srv__SendData_Request
{
  rosidl_runtime_c__String source_id;
  uint16_t source_ref;
  uint16_t destination_id;
  rosidl_runtime_c__octet__Sequence payload;
} pipebot_msgs__srv__SendData_Request;

// Struct for a sequence of pipebot_msgs__srv__SendData_Request.
typedef struct pipebot_msgs__srv__SendData_Request__Sequence
{
  pipebot_msgs__srv__SendData_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pipebot_msgs__srv__SendData_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'status_code'
// already included above
// #include "rosidl_runtime_c/string.h"

// Struct defined in srv/SendData in the package pipebot_msgs.
typedef struct pipebot_msgs__srv__SendData_Response
{
  rosidl_runtime_c__String status_code;
} pipebot_msgs__srv__SendData_Response;

// Struct for a sequence of pipebot_msgs__srv__SendData_Response.
typedef struct pipebot_msgs__srv__SendData_Response__Sequence
{
  pipebot_msgs__srv__SendData_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pipebot_msgs__srv__SendData_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PIPEBOT_MSGS__SRV__DETAIL__SEND_DATA__STRUCT_H_
