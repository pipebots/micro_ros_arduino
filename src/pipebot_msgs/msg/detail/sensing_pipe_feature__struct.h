// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pipebot_msgs:msg/SensingPipeFeature.idl
// generated code does not contain a copyright notice

#ifndef PIPEBOT_MSGS__MSG__DETAIL__SENSING_PIPE_FEATURE__STRUCT_H_
#define PIPEBOT_MSGS__MSG__DETAIL__SENSING_PIPE_FEATURE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ACOUSTIC'.
enum
{
  pipebot_msgs__msg__SensingPipeFeature__ACOUSTIC = 1
};

/// Constant 'ULTRASONIC'.
enum
{
  pipebot_msgs__msg__SensingPipeFeature__ULTRASONIC = 2
};

/// Constant 'FEATURE_BLOCKAGE'.
enum
{
  pipebot_msgs__msg__SensingPipeFeature__FEATURE_BLOCKAGE = 0
};

/// Constant 'FEATURE_T_JUNCTION'.
enum
{
  pipebot_msgs__msg__SensingPipeFeature__FEATURE_T_JUNCTION = 1
};

/// Constant 'FEATURE_L_JUNCTION'.
enum
{
  pipebot_msgs__msg__SensingPipeFeature__FEATURE_L_JUNCTION = 2
};

/// Constant 'FEATURE_LATERAL'.
enum
{
  pipebot_msgs__msg__SensingPipeFeature__FEATURE_LATERAL = 3
};

/// Constant 'FEATURE_MANHOLE'.
enum
{
  pipebot_msgs__msg__SensingPipeFeature__FEATURE_MANHOLE = 4
};

/// Constant 'FEATURE_JOINTS'.
enum
{
  pipebot_msgs__msg__SensingPipeFeature__FEATURE_JOINTS = 5
};

/// Constant 'FEATURE_UNCERTAIN'.
enum
{
  pipebot_msgs__msg__SensingPipeFeature__FEATURE_UNCERTAIN = 6
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

// Struct defined in msg/SensingPipeFeature in the package pipebot_msgs.
typedef struct pipebot_msgs__msg__SensingPipeFeature
{
  std_msgs__msg__Header header;
  int8_t source;
  float field_of_view;
  float min_range;
  float max_range;
  float range;
  int8_t pipe_feature;
  float probability;
  float blockage_area;
} pipebot_msgs__msg__SensingPipeFeature;

// Struct for a sequence of pipebot_msgs__msg__SensingPipeFeature.
typedef struct pipebot_msgs__msg__SensingPipeFeature__Sequence
{
  pipebot_msgs__msg__SensingPipeFeature * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pipebot_msgs__msg__SensingPipeFeature__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PIPEBOT_MSGS__MSG__DETAIL__SENSING_PIPE_FEATURE__STRUCT_H_
