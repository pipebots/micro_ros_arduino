// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pipebot_msgs:msg/MotorControl.idl
// generated code does not contain a copyright notice

#ifndef PIPEBOT_MSGS__MSG__DETAIL__MOTOR_CONTROL__STRUCT_H_
#define PIPEBOT_MSGS__MSG__DETAIL__MOTOR_CONTROL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'MODE_ABSOLUTE'.
enum
{
  pipebot_msgs__msg__MotorControl__MODE_ABSOLUTE = 0
};

/// Constant 'MODE_RELATIVE'.
enum
{
  pipebot_msgs__msg__MotorControl__MODE_RELATIVE = 1
};

/// Constant 'MODE_SPEED'.
enum
{
  pipebot_msgs__msg__MotorControl__MODE_SPEED = 2
};

// Struct defined in msg/MotorControl in the package pipebot_msgs.
typedef struct pipebot_msgs__msg__MotorControl
{
  int8_t mode;
  double angle_radians;
  double rpm;
} pipebot_msgs__msg__MotorControl;

// Struct for a sequence of pipebot_msgs__msg__MotorControl.
typedef struct pipebot_msgs__msg__MotorControl__Sequence
{
  pipebot_msgs__msg__MotorControl * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pipebot_msgs__msg__MotorControl__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PIPEBOT_MSGS__MSG__DETAIL__MOTOR_CONTROL__STRUCT_H_
