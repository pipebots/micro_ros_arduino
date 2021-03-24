// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pipebot_msgs:msg/ImuCalibrationStatus.idl
// generated code does not contain a copyright notice

#ifndef PIPEBOT_MSGS__MSG__DETAIL__IMU_CALIBRATION_STATUS__STRUCT_H_
#define PIPEBOT_MSGS__MSG__DETAIL__IMU_CALIBRATION_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/ImuCalibrationStatus in the package pipebot_msgs.
typedef struct pipebot_msgs__msg__ImuCalibrationStatus
{
  bool calibrated;
  int8_t system;
  int8_t gyroscope;
  int8_t accelerometer;
  int8_t magnetometer;
} pipebot_msgs__msg__ImuCalibrationStatus;

// Struct for a sequence of pipebot_msgs__msg__ImuCalibrationStatus.
typedef struct pipebot_msgs__msg__ImuCalibrationStatus__Sequence
{
  pipebot_msgs__msg__ImuCalibrationStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pipebot_msgs__msg__ImuCalibrationStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PIPEBOT_MSGS__MSG__DETAIL__IMU_CALIBRATION_STATUS__STRUCT_H_
