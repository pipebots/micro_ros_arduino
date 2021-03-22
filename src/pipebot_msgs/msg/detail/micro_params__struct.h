// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pipebot_msgs:msg/MicroParams.idl
// generated code does not contain a copyright notice

#ifndef PIPEBOT_MSGS__MSG__DETAIL__MICRO_PARAMS__STRUCT_H_
#define PIPEBOT_MSGS__MSG__DETAIL__MICRO_PARAMS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'driver'
#include "pipebot_msgs/msg/detail/motor_config__struct.h"
// Member 'encoder'
#include "pipebot_msgs/msg/detail/encoder_config__struct.h"
// Member 'led'
#include "pipebot_msgs/msg/detail/led_config__struct.h"

// Struct defined in msg/MicroParams in the package pipebot_msgs.
typedef struct pipebot_msgs__msg__MicroParams
{
  uint8_t estop_pin;
  uint8_t deadman_timeout_ms;
  uint8_t diagnostic_frequency_hz;
  uint8_t encoder_frequency_hz;
  float max_speed_mps;
  float wheel_base_m;
  float wheel_radius_m;
  pipebot_msgs__msg__MotorConfig__Sequence driver;
  pipebot_msgs__msg__EncoderConfig__Sequence encoder;
  pipebot_msgs__msg__LedConfig__Sequence led;
} pipebot_msgs__msg__MicroParams;

// Struct for a sequence of pipebot_msgs__msg__MicroParams.
typedef struct pipebot_msgs__msg__MicroParams__Sequence
{
  pipebot_msgs__msg__MicroParams * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pipebot_msgs__msg__MicroParams__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PIPEBOT_MSGS__MSG__DETAIL__MICRO_PARAMS__STRUCT_H_
