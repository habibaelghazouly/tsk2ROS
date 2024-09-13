// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from weather_interfaces:srv/DataCheck.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "weather_interfaces/srv/data_check.h"


#ifndef WEATHER_INTERFACES__SRV__DETAIL__DATA_CHECK__FUNCTIONS_H_
#define WEATHER_INTERFACES__SRV__DETAIL__DATA_CHECK__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "weather_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "weather_interfaces/srv/detail/data_check__struct.h"

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_weather_interfaces
const rosidl_type_hash_t *
weather_interfaces__srv__DataCheck__get_type_hash(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_weather_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
weather_interfaces__srv__DataCheck__get_type_description(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_weather_interfaces
const rosidl_runtime_c__type_description__TypeSource *
weather_interfaces__srv__DataCheck__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_weather_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
weather_interfaces__srv__DataCheck__get_type_description_sources(
  const rosidl_service_type_support_t * type_support);

/// Initialize srv/DataCheck message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * weather_interfaces__srv__DataCheck_Request
 * )) before or use
 * weather_interfaces__srv__DataCheck_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_weather_interfaces
bool
weather_interfaces__srv__DataCheck_Request__init(weather_interfaces__srv__DataCheck_Request * msg);

/// Finalize srv/DataCheck message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_weather_interfaces
void
weather_interfaces__srv__DataCheck_Request__fini(weather_interfaces__srv__DataCheck_Request * msg);

/// Create srv/DataCheck message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * weather_interfaces__srv__DataCheck_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_weather_interfaces
weather_interfaces__srv__DataCheck_Request *
weather_interfaces__srv__DataCheck_Request__create(void);

/// Destroy srv/DataCheck message.
/**
 * It calls
 * weather_interfaces__srv__DataCheck_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_weather_interfaces
void
weather_interfaces__srv__DataCheck_Request__destroy(weather_interfaces__srv__DataCheck_Request * msg);

/// Check for srv/DataCheck message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_weather_interfaces
bool
weather_interfaces__srv__DataCheck_Request__are_equal(const weather_interfaces__srv__DataCheck_Request * lhs, const weather_interfaces__srv__DataCheck_Request * rhs);

/// Copy a srv/DataCheck message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_weather_interfaces
bool
weather_interfaces__srv__DataCheck_Request__copy(
  const weather_interfaces__srv__DataCheck_Request * input,
  weather_interfaces__srv__DataCheck_Request * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_weather_interfaces
const rosidl_type_hash_t *
weather_interfaces__srv__DataCheck_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_weather_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
weather_interfaces__srv__DataCheck_Request__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_weather_interfaces
const rosidl_runtime_c__type_description__TypeSource *
weather_interfaces__srv__DataCheck_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_weather_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
weather_interfaces__srv__DataCheck_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/DataCheck messages.
/**
 * It allocates the memory for the number of elements and calls
 * weather_interfaces__srv__DataCheck_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_weather_interfaces
bool
weather_interfaces__srv__DataCheck_Request__Sequence__init(weather_interfaces__srv__DataCheck_Request__Sequence * array, size_t size);

/// Finalize array of srv/DataCheck messages.
/**
 * It calls
 * weather_interfaces__srv__DataCheck_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_weather_interfaces
void
weather_interfaces__srv__DataCheck_Request__Sequence__fini(weather_interfaces__srv__DataCheck_Request__Sequence * array);

/// Create array of srv/DataCheck messages.
/**
 * It allocates the memory for the array and calls
 * weather_interfaces__srv__DataCheck_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_weather_interfaces
weather_interfaces__srv__DataCheck_Request__Sequence *
weather_interfaces__srv__DataCheck_Request__Sequence__create(size_t size);

/// Destroy array of srv/DataCheck messages.
/**
 * It calls
 * weather_interfaces__srv__DataCheck_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_weather_interfaces
void
weather_interfaces__srv__DataCheck_Request__Sequence__destroy(weather_interfaces__srv__DataCheck_Request__Sequence * array);

/// Check for srv/DataCheck message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_weather_interfaces
bool
weather_interfaces__srv__DataCheck_Request__Sequence__are_equal(const weather_interfaces__srv__DataCheck_Request__Sequence * lhs, const weather_interfaces__srv__DataCheck_Request__Sequence * rhs);

/// Copy an array of srv/DataCheck messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_weather_interfaces
bool
weather_interfaces__srv__DataCheck_Request__Sequence__copy(
  const weather_interfaces__srv__DataCheck_Request__Sequence * input,
  weather_interfaces__srv__DataCheck_Request__Sequence * output);

/// Initialize srv/DataCheck message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * weather_interfaces__srv__DataCheck_Response
 * )) before or use
 * weather_interfaces__srv__DataCheck_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_weather_interfaces
bool
weather_interfaces__srv__DataCheck_Response__init(weather_interfaces__srv__DataCheck_Response * msg);

/// Finalize srv/DataCheck message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_weather_interfaces
void
weather_interfaces__srv__DataCheck_Response__fini(weather_interfaces__srv__DataCheck_Response * msg);

/// Create srv/DataCheck message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * weather_interfaces__srv__DataCheck_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_weather_interfaces
weather_interfaces__srv__DataCheck_Response *
weather_interfaces__srv__DataCheck_Response__create(void);

/// Destroy srv/DataCheck message.
/**
 * It calls
 * weather_interfaces__srv__DataCheck_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_weather_interfaces
void
weather_interfaces__srv__DataCheck_Response__destroy(weather_interfaces__srv__DataCheck_Response * msg);

/// Check for srv/DataCheck message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_weather_interfaces
bool
weather_interfaces__srv__DataCheck_Response__are_equal(const weather_interfaces__srv__DataCheck_Response * lhs, const weather_interfaces__srv__DataCheck_Response * rhs);

/// Copy a srv/DataCheck message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_weather_interfaces
bool
weather_interfaces__srv__DataCheck_Response__copy(
  const weather_interfaces__srv__DataCheck_Response * input,
  weather_interfaces__srv__DataCheck_Response * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_weather_interfaces
const rosidl_type_hash_t *
weather_interfaces__srv__DataCheck_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_weather_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
weather_interfaces__srv__DataCheck_Response__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_weather_interfaces
const rosidl_runtime_c__type_description__TypeSource *
weather_interfaces__srv__DataCheck_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_weather_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
weather_interfaces__srv__DataCheck_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/DataCheck messages.
/**
 * It allocates the memory for the number of elements and calls
 * weather_interfaces__srv__DataCheck_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_weather_interfaces
bool
weather_interfaces__srv__DataCheck_Response__Sequence__init(weather_interfaces__srv__DataCheck_Response__Sequence * array, size_t size);

/// Finalize array of srv/DataCheck messages.
/**
 * It calls
 * weather_interfaces__srv__DataCheck_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_weather_interfaces
void
weather_interfaces__srv__DataCheck_Response__Sequence__fini(weather_interfaces__srv__DataCheck_Response__Sequence * array);

/// Create array of srv/DataCheck messages.
/**
 * It allocates the memory for the array and calls
 * weather_interfaces__srv__DataCheck_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_weather_interfaces
weather_interfaces__srv__DataCheck_Response__Sequence *
weather_interfaces__srv__DataCheck_Response__Sequence__create(size_t size);

/// Destroy array of srv/DataCheck messages.
/**
 * It calls
 * weather_interfaces__srv__DataCheck_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_weather_interfaces
void
weather_interfaces__srv__DataCheck_Response__Sequence__destroy(weather_interfaces__srv__DataCheck_Response__Sequence * array);

/// Check for srv/DataCheck message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_weather_interfaces
bool
weather_interfaces__srv__DataCheck_Response__Sequence__are_equal(const weather_interfaces__srv__DataCheck_Response__Sequence * lhs, const weather_interfaces__srv__DataCheck_Response__Sequence * rhs);

/// Copy an array of srv/DataCheck messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_weather_interfaces
bool
weather_interfaces__srv__DataCheck_Response__Sequence__copy(
  const weather_interfaces__srv__DataCheck_Response__Sequence * input,
  weather_interfaces__srv__DataCheck_Response__Sequence * output);

/// Initialize srv/DataCheck message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * weather_interfaces__srv__DataCheck_Event
 * )) before or use
 * weather_interfaces__srv__DataCheck_Event__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_weather_interfaces
bool
weather_interfaces__srv__DataCheck_Event__init(weather_interfaces__srv__DataCheck_Event * msg);

/// Finalize srv/DataCheck message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_weather_interfaces
void
weather_interfaces__srv__DataCheck_Event__fini(weather_interfaces__srv__DataCheck_Event * msg);

/// Create srv/DataCheck message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * weather_interfaces__srv__DataCheck_Event__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_weather_interfaces
weather_interfaces__srv__DataCheck_Event *
weather_interfaces__srv__DataCheck_Event__create(void);

/// Destroy srv/DataCheck message.
/**
 * It calls
 * weather_interfaces__srv__DataCheck_Event__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_weather_interfaces
void
weather_interfaces__srv__DataCheck_Event__destroy(weather_interfaces__srv__DataCheck_Event * msg);

/// Check for srv/DataCheck message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_weather_interfaces
bool
weather_interfaces__srv__DataCheck_Event__are_equal(const weather_interfaces__srv__DataCheck_Event * lhs, const weather_interfaces__srv__DataCheck_Event * rhs);

/// Copy a srv/DataCheck message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_weather_interfaces
bool
weather_interfaces__srv__DataCheck_Event__copy(
  const weather_interfaces__srv__DataCheck_Event * input,
  weather_interfaces__srv__DataCheck_Event * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_weather_interfaces
const rosidl_type_hash_t *
weather_interfaces__srv__DataCheck_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_weather_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
weather_interfaces__srv__DataCheck_Event__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_weather_interfaces
const rosidl_runtime_c__type_description__TypeSource *
weather_interfaces__srv__DataCheck_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_weather_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
weather_interfaces__srv__DataCheck_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/DataCheck messages.
/**
 * It allocates the memory for the number of elements and calls
 * weather_interfaces__srv__DataCheck_Event__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_weather_interfaces
bool
weather_interfaces__srv__DataCheck_Event__Sequence__init(weather_interfaces__srv__DataCheck_Event__Sequence * array, size_t size);

/// Finalize array of srv/DataCheck messages.
/**
 * It calls
 * weather_interfaces__srv__DataCheck_Event__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_weather_interfaces
void
weather_interfaces__srv__DataCheck_Event__Sequence__fini(weather_interfaces__srv__DataCheck_Event__Sequence * array);

/// Create array of srv/DataCheck messages.
/**
 * It allocates the memory for the array and calls
 * weather_interfaces__srv__DataCheck_Event__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_weather_interfaces
weather_interfaces__srv__DataCheck_Event__Sequence *
weather_interfaces__srv__DataCheck_Event__Sequence__create(size_t size);

/// Destroy array of srv/DataCheck messages.
/**
 * It calls
 * weather_interfaces__srv__DataCheck_Event__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_weather_interfaces
void
weather_interfaces__srv__DataCheck_Event__Sequence__destroy(weather_interfaces__srv__DataCheck_Event__Sequence * array);

/// Check for srv/DataCheck message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_weather_interfaces
bool
weather_interfaces__srv__DataCheck_Event__Sequence__are_equal(const weather_interfaces__srv__DataCheck_Event__Sequence * lhs, const weather_interfaces__srv__DataCheck_Event__Sequence * rhs);

/// Copy an array of srv/DataCheck messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_weather_interfaces
bool
weather_interfaces__srv__DataCheck_Event__Sequence__copy(
  const weather_interfaces__srv__DataCheck_Event__Sequence * input,
  weather_interfaces__srv__DataCheck_Event__Sequence * output);
#ifdef __cplusplus
}
#endif

#endif  // WEATHER_INTERFACES__SRV__DETAIL__DATA_CHECK__FUNCTIONS_H_
