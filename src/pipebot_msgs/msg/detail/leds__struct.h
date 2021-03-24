// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pipebot_msgs:msg/Leds.idl
// generated code does not contain a copyright notice

#ifndef PIPEBOT_MSGS__MSG__DETAIL__LEDS__STRUCT_H_
#define PIPEBOT_MSGS__MSG__DETAIL__LEDS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'HEAD_LIGHT'.
enum
{
  pipebot_msgs__msg__Leds__HEAD_LIGHT = 0
};

/// Constant 'REVERSE_LIGHT'.
enum
{
  pipebot_msgs__msg__Leds__REVERSE_LIGHT = 1
};

/// Constant 'LEFT_SIDE_LIGHT'.
enum
{
  pipebot_msgs__msg__Leds__LEFT_SIDE_LIGHT = 2
};

/// Constant 'RIGHT_SIDE_LIGHT'.
enum
{
  pipebot_msgs__msg__Leds__RIGHT_SIDE_LIGHT = 3
};

/// Constant 'SIDE_LIGHTS'.
enum
{
  pipebot_msgs__msg__Leds__SIDE_LIGHTS = 4
};

/// Constant 'DIAGNOSTIC_LIGHT'.
enum
{
  pipebot_msgs__msg__Leds__DIAGNOSTIC_LIGHT = 5
};

/// Constant 'ALL_LIGHTS'.
enum
{
  pipebot_msgs__msg__Leds__ALL_LIGHTS = 6
};

/// Constant 'FLASH_OFF'.
enum
{
  pipebot_msgs__msg__Leds__FLASH_OFF = 0
};

/// Constant 'FLASH_ON'.
enum
{
  pipebot_msgs__msg__Leds__FLASH_ON = 1
};

/// Constant 'FLASH_ERROR'.
enum
{
  pipebot_msgs__msg__Leds__FLASH_ERROR = 2
};

/// Constant 'FLASH_1HZ'.
enum
{
  pipebot_msgs__msg__Leds__FLASH_1HZ = 3
};

/// Constant 'FLASH_2HZ'.
enum
{
  pipebot_msgs__msg__Leds__FLASH_2HZ = 4
};

/// Constant 'FLASH_5HZ'.
enum
{
  pipebot_msgs__msg__Leds__FLASH_5HZ = 5
};

/// Constant 'FLASH_10HZ'.
enum
{
  pipebot_msgs__msg__Leds__FLASH_10HZ = 6
};

/// Constant 'COLOUR_WHITE'.
enum
{
  pipebot_msgs__msg__Leds__COLOUR_WHITE = 0
};

/// Constant 'COLOUR_RED'.
enum
{
  pipebot_msgs__msg__Leds__COLOUR_RED = 1
};

/// Constant 'COLOUR_GREEN'.
enum
{
  pipebot_msgs__msg__Leds__COLOUR_GREEN = 2
};

/// Constant 'COLOUR_BLUE'.
enum
{
  pipebot_msgs__msg__Leds__COLOUR_BLUE = 3
};

/// Constant 'COLOUR_AQUA'.
enum
{
  pipebot_msgs__msg__Leds__COLOUR_AQUA = 4
};

/// Constant 'COLOUR_YELLOW'.
enum
{
  pipebot_msgs__msg__Leds__COLOUR_YELLOW = 5
};

/// Constant 'COLOUR_FUCHSIA'.
enum
{
  pipebot_msgs__msg__Leds__COLOUR_FUCHSIA = 6
};

// Struct defined in msg/Leds in the package pipebot_msgs.
typedef struct pipebot_msgs__msg__Leds
{
  int8_t led;
  int8_t flash_mode;
  int8_t colour;
  uint8_t brightness;
} pipebot_msgs__msg__Leds;

// Struct for a sequence of pipebot_msgs__msg__Leds.
typedef struct pipebot_msgs__msg__Leds__Sequence
{
  pipebot_msgs__msg__Leds * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pipebot_msgs__msg__Leds__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PIPEBOT_MSGS__MSG__DETAIL__LEDS__STRUCT_H_
