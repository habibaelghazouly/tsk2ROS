// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from weather_interfaces:srv/DataCheck.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "weather_interfaces/srv/data_check.h"


#ifndef WEATHER_INTERFACES__SRV__DETAIL__DATA_CHECK__STRUCT_H_
#define WEATHER_INTERFACES__SRV__DETAIL__DATA_CHECK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/DataCheck in the package weather_interfaces.
typedef struct weather_interfaces__srv__DataCheck_Request
{
  float temperature;
  float pressure;
  float humidity;
} weather_interfaces__srv__DataCheck_Request;

// Struct for a sequence of weather_interfaces__srv__DataCheck_Request.
typedef struct weather_interfaces__srv__DataCheck_Request__Sequence
{
  weather_interfaces__srv__DataCheck_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} weather_interfaces__srv__DataCheck_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/DataCheck in the package weather_interfaces.
typedef struct weather_interfaces__srv__DataCheck_Response
{
  bool temp;
  bool press;
  bool humid;
} weather_interfaces__srv__DataCheck_Response;

// Struct for a sequence of weather_interfaces__srv__DataCheck_Response.
typedef struct weather_interfaces__srv__DataCheck_Response__Sequence
{
  weather_interfaces__srv__DataCheck_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} weather_interfaces__srv__DataCheck_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  weather_interfaces__srv__DataCheck_Event__request__MAX_SIZE = 1
};
// response
enum
{
  weather_interfaces__srv__DataCheck_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/DataCheck in the package weather_interfaces.
typedef struct weather_interfaces__srv__DataCheck_Event
{
  service_msgs__msg__ServiceEventInfo info;
  weather_interfaces__srv__DataCheck_Request__Sequence request;
  weather_interfaces__srv__DataCheck_Response__Sequence response;
} weather_interfaces__srv__DataCheck_Event;

// Struct for a sequence of weather_interfaces__srv__DataCheck_Event.
typedef struct weather_interfaces__srv__DataCheck_Event__Sequence
{
  weather_interfaces__srv__DataCheck_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} weather_interfaces__srv__DataCheck_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WEATHER_INTERFACES__SRV__DETAIL__DATA_CHECK__STRUCT_H_
