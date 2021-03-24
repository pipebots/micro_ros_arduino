// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from pipebot_msgs:msg/ImuCalibrationStatus.idl
// generated code does not contain a copyright notice

#ifndef PIPEBOT_MSGS__MSG__DETAIL__IMU_CALIBRATION_STATUS__FUNCTIONS_H_
#define PIPEBOT_MSGS__MSG__DETAIL__IMU_CALIBRATION_STATUS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "pipebot_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "pipebot_msgs/msg/detail/imu_calibration_status__struct.h"

/// Initialize msg/ImuCalibrationStatus message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * pipebot_msgs__msg__ImuCalibrationStatus
 * )) before or use
 * pipebot_msgs__msg__ImuCalibrationStatus__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_pipebot_msgs
bool
pipebot_msgs__msg__ImuCalibrationStatus__init(pipebot_msgs__msg__ImuCalibrationStatus * msg);

/// Finalize msg/ImuCalibrationStatus message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pipebot_msgs
void
pipebot_msgs__msg__ImuCalibrationStatus__fini(pipebot_msgs__msg__ImuCalibrationStatus * msg);

/// Create msg/ImuCalibrationStatus message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * pipebot_msgs__msg__ImuCalibrationStatus__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pipebot_msgs
pipebot_msgs__msg__ImuCalibrationStatus *
pipebot_msgs__msg__ImuCalibrationStatus__create();

/// Destroy msg/ImuCalibrationStatus message.
/**
 * It calls
 * pipebot_msgs__msg__ImuCalibrationStatus__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pipebot_msgs
void
pipebot_msgs__msg__ImuCalibrationStatus__destroy(pipebot_msgs__msg__ImuCalibrationStatus * msg);


/// Initialize array of msg/ImuCalibrationStatus messages.
/**
 * It allocates the memory for the number of elements and calls
 * pipebot_msgs__msg__ImuCalibrationStatus__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_pipebot_msgs
bool
pipebot_msgs__msg__ImuCalibrationStatus__Sequence__init(pipebot_msgs__msg__ImuCalibrationStatus__Sequence * array, size_t size);

/// Finalize array of msg/ImuCalibrationStatus messages.
/**
 * It calls
 * pipebot_msgs__msg__ImuCalibrationStatus__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pipebot_msgs
void
pipebot_msgs__msg__ImuCalibrationStatus__Sequence__fini(pipebot_msgs__msg__ImuCalibrationStatus__Sequence * array);

/// Create array of msg/ImuCalibrationStatus messages.
/**
 * It allocates the memory for the array and calls
 * pipebot_msgs__msg__ImuCalibrationStatus__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pipebot_msgs
pipebot_msgs__msg__ImuCalibrationStatus__Sequence *
pipebot_msgs__msg__ImuCalibrationStatus__Sequence__create(size_t size);

/// Destroy array of msg/ImuCalibrationStatus messages.
/**
 * It calls
 * pipebot_msgs__msg__ImuCalibrationStatus__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pipebot_msgs
void
pipebot_msgs__msg__ImuCalibrationStatus__Sequence__destroy(pipebot_msgs__msg__ImuCalibrationStatus__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // PIPEBOT_MSGS__MSG__DETAIL__IMU_CALIBRATION_STATUS__FUNCTIONS_H_
