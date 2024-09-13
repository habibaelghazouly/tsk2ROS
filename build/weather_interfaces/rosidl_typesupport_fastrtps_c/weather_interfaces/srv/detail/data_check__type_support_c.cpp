// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from weather_interfaces:srv/DataCheck.idl
// generated code does not contain a copyright notice
#include "weather_interfaces/srv/detail/data_check__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "weather_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "weather_interfaces/srv/detail/data_check__struct.h"
#include "weather_interfaces/srv/detail/data_check__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _DataCheck_Request__ros_msg_type = weather_interfaces__srv__DataCheck_Request;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_weather_interfaces
bool cdr_serialize_weather_interfaces__srv__DataCheck_Request(
  const weather_interfaces__srv__DataCheck_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: temperature
  {
    cdr << ros_message->temperature;
  }

  // Field name: pressure
  {
    cdr << ros_message->pressure;
  }

  // Field name: humidity
  {
    cdr << ros_message->humidity;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_weather_interfaces
bool cdr_deserialize_weather_interfaces__srv__DataCheck_Request(
  eprosima::fastcdr::Cdr & cdr,
  weather_interfaces__srv__DataCheck_Request * ros_message)
{
  // Field name: temperature
  {
    cdr >> ros_message->temperature;
  }

  // Field name: pressure
  {
    cdr >> ros_message->pressure;
  }

  // Field name: humidity
  {
    cdr >> ros_message->humidity;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_weather_interfaces
size_t get_serialized_size_weather_interfaces__srv__DataCheck_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DataCheck_Request__ros_msg_type * ros_message = static_cast<const _DataCheck_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: temperature
  {
    size_t item_size = sizeof(ros_message->temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: pressure
  {
    size_t item_size = sizeof(ros_message->pressure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: humidity
  {
    size_t item_size = sizeof(ros_message->humidity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_weather_interfaces
size_t max_serialized_size_weather_interfaces__srv__DataCheck_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: temperature
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: pressure
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: humidity
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = weather_interfaces__srv__DataCheck_Request;
    is_plain =
      (
      offsetof(DataType, humidity) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_weather_interfaces
bool cdr_serialize_key_weather_interfaces__srv__DataCheck_Request(
  const weather_interfaces__srv__DataCheck_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: temperature
  {
    cdr << ros_message->temperature;
  }

  // Field name: pressure
  {
    cdr << ros_message->pressure;
  }

  // Field name: humidity
  {
    cdr << ros_message->humidity;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_weather_interfaces
size_t get_serialized_size_key_weather_interfaces__srv__DataCheck_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DataCheck_Request__ros_msg_type * ros_message = static_cast<const _DataCheck_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: temperature
  {
    size_t item_size = sizeof(ros_message->temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: pressure
  {
    size_t item_size = sizeof(ros_message->pressure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: humidity
  {
    size_t item_size = sizeof(ros_message->humidity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_weather_interfaces
size_t max_serialized_size_key_weather_interfaces__srv__DataCheck_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: temperature
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: pressure
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: humidity
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = weather_interfaces__srv__DataCheck_Request;
    is_plain =
      (
      offsetof(DataType, humidity) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _DataCheck_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const weather_interfaces__srv__DataCheck_Request * ros_message = static_cast<const weather_interfaces__srv__DataCheck_Request *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_weather_interfaces__srv__DataCheck_Request(ros_message, cdr);
}

static bool _DataCheck_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  weather_interfaces__srv__DataCheck_Request * ros_message = static_cast<weather_interfaces__srv__DataCheck_Request *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_weather_interfaces__srv__DataCheck_Request(cdr, ros_message);
}

static uint32_t _DataCheck_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_weather_interfaces__srv__DataCheck_Request(
      untyped_ros_message, 0));
}

static size_t _DataCheck_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_weather_interfaces__srv__DataCheck_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_DataCheck_Request = {
  "weather_interfaces::srv",
  "DataCheck_Request",
  _DataCheck_Request__cdr_serialize,
  _DataCheck_Request__cdr_deserialize,
  _DataCheck_Request__get_serialized_size,
  _DataCheck_Request__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _DataCheck_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_DataCheck_Request,
  get_message_typesupport_handle_function,
  &weather_interfaces__srv__DataCheck_Request__get_type_hash,
  &weather_interfaces__srv__DataCheck_Request__get_type_description,
  &weather_interfaces__srv__DataCheck_Request__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, weather_interfaces, srv, DataCheck_Request)() {
  return &_DataCheck_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <cstddef>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "weather_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "weather_interfaces/srv/detail/data_check__struct.h"
// already included above
// #include "weather_interfaces/srv/detail/data_check__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _DataCheck_Response__ros_msg_type = weather_interfaces__srv__DataCheck_Response;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_weather_interfaces
bool cdr_serialize_weather_interfaces__srv__DataCheck_Response(
  const weather_interfaces__srv__DataCheck_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: temp
  {
    cdr << (ros_message->temp ? true : false);
  }

  // Field name: press
  {
    cdr << (ros_message->press ? true : false);
  }

  // Field name: humid
  {
    cdr << (ros_message->humid ? true : false);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_weather_interfaces
bool cdr_deserialize_weather_interfaces__srv__DataCheck_Response(
  eprosima::fastcdr::Cdr & cdr,
  weather_interfaces__srv__DataCheck_Response * ros_message)
{
  // Field name: temp
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->temp = tmp ? true : false;
  }

  // Field name: press
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->press = tmp ? true : false;
  }

  // Field name: humid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->humid = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_weather_interfaces
size_t get_serialized_size_weather_interfaces__srv__DataCheck_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DataCheck_Response__ros_msg_type * ros_message = static_cast<const _DataCheck_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: temp
  {
    size_t item_size = sizeof(ros_message->temp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: press
  {
    size_t item_size = sizeof(ros_message->press);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: humid
  {
    size_t item_size = sizeof(ros_message->humid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_weather_interfaces
size_t max_serialized_size_weather_interfaces__srv__DataCheck_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: temp
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: press
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: humid
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = weather_interfaces__srv__DataCheck_Response;
    is_plain =
      (
      offsetof(DataType, humid) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_weather_interfaces
bool cdr_serialize_key_weather_interfaces__srv__DataCheck_Response(
  const weather_interfaces__srv__DataCheck_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: temp
  {
    cdr << (ros_message->temp ? true : false);
  }

  // Field name: press
  {
    cdr << (ros_message->press ? true : false);
  }

  // Field name: humid
  {
    cdr << (ros_message->humid ? true : false);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_weather_interfaces
size_t get_serialized_size_key_weather_interfaces__srv__DataCheck_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DataCheck_Response__ros_msg_type * ros_message = static_cast<const _DataCheck_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: temp
  {
    size_t item_size = sizeof(ros_message->temp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: press
  {
    size_t item_size = sizeof(ros_message->press);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: humid
  {
    size_t item_size = sizeof(ros_message->humid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_weather_interfaces
size_t max_serialized_size_key_weather_interfaces__srv__DataCheck_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: temp
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: press
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: humid
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = weather_interfaces__srv__DataCheck_Response;
    is_plain =
      (
      offsetof(DataType, humid) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _DataCheck_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const weather_interfaces__srv__DataCheck_Response * ros_message = static_cast<const weather_interfaces__srv__DataCheck_Response *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_weather_interfaces__srv__DataCheck_Response(ros_message, cdr);
}

static bool _DataCheck_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  weather_interfaces__srv__DataCheck_Response * ros_message = static_cast<weather_interfaces__srv__DataCheck_Response *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_weather_interfaces__srv__DataCheck_Response(cdr, ros_message);
}

static uint32_t _DataCheck_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_weather_interfaces__srv__DataCheck_Response(
      untyped_ros_message, 0));
}

static size_t _DataCheck_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_weather_interfaces__srv__DataCheck_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_DataCheck_Response = {
  "weather_interfaces::srv",
  "DataCheck_Response",
  _DataCheck_Response__cdr_serialize,
  _DataCheck_Response__cdr_deserialize,
  _DataCheck_Response__get_serialized_size,
  _DataCheck_Response__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _DataCheck_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_DataCheck_Response,
  get_message_typesupport_handle_function,
  &weather_interfaces__srv__DataCheck_Response__get_type_hash,
  &weather_interfaces__srv__DataCheck_Response__get_type_description,
  &weather_interfaces__srv__DataCheck_Response__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, weather_interfaces, srv, DataCheck_Response)() {
  return &_DataCheck_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <cstddef>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "weather_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "weather_interfaces/srv/detail/data_check__struct.h"
// already included above
// #include "weather_interfaces/srv/detail/data_check__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "service_msgs/msg/detail/service_event_info__functions.h"  // info

// forward declare type support functions

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_weather_interfaces
bool cdr_serialize_service_msgs__msg__ServiceEventInfo(
  const service_msgs__msg__ServiceEventInfo * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_weather_interfaces
bool cdr_deserialize_service_msgs__msg__ServiceEventInfo(
  eprosima::fastcdr::Cdr & cdr,
  service_msgs__msg__ServiceEventInfo * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_weather_interfaces
size_t get_serialized_size_service_msgs__msg__ServiceEventInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_weather_interfaces
size_t max_serialized_size_service_msgs__msg__ServiceEventInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_weather_interfaces
bool cdr_serialize_key_service_msgs__msg__ServiceEventInfo(
  const service_msgs__msg__ServiceEventInfo * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_weather_interfaces
size_t get_serialized_size_key_service_msgs__msg__ServiceEventInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_weather_interfaces
size_t max_serialized_size_key_service_msgs__msg__ServiceEventInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_weather_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, service_msgs, msg, ServiceEventInfo)();

bool cdr_serialize_weather_interfaces__srv__DataCheck_Request(
  const weather_interfaces__srv__DataCheck_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_weather_interfaces__srv__DataCheck_Request(
  eprosima::fastcdr::Cdr & cdr,
  weather_interfaces__srv__DataCheck_Request * ros_message);

size_t get_serialized_size_weather_interfaces__srv__DataCheck_Request(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_weather_interfaces__srv__DataCheck_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_weather_interfaces__srv__DataCheck_Request(
  const weather_interfaces__srv__DataCheck_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_weather_interfaces__srv__DataCheck_Request(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_weather_interfaces__srv__DataCheck_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, weather_interfaces, srv, DataCheck_Request)();

bool cdr_serialize_weather_interfaces__srv__DataCheck_Response(
  const weather_interfaces__srv__DataCheck_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_weather_interfaces__srv__DataCheck_Response(
  eprosima::fastcdr::Cdr & cdr,
  weather_interfaces__srv__DataCheck_Response * ros_message);

size_t get_serialized_size_weather_interfaces__srv__DataCheck_Response(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_weather_interfaces__srv__DataCheck_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_weather_interfaces__srv__DataCheck_Response(
  const weather_interfaces__srv__DataCheck_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_weather_interfaces__srv__DataCheck_Response(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_weather_interfaces__srv__DataCheck_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, weather_interfaces, srv, DataCheck_Response)();


using _DataCheck_Event__ros_msg_type = weather_interfaces__srv__DataCheck_Event;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_weather_interfaces
bool cdr_serialize_weather_interfaces__srv__DataCheck_Event(
  const weather_interfaces__srv__DataCheck_Event * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: info
  {
    cdr_serialize_service_msgs__msg__ServiceEventInfo(
      &ros_message->info, cdr);
  }

  // Field name: request
  {
    size_t size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_weather_interfaces__srv__DataCheck_Request(
        &array_ptr[i], cdr);
    }
  }

  // Field name: response
  {
    size_t size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_weather_interfaces__srv__DataCheck_Response(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_weather_interfaces
bool cdr_deserialize_weather_interfaces__srv__DataCheck_Event(
  eprosima::fastcdr::Cdr & cdr,
  weather_interfaces__srv__DataCheck_Event * ros_message)
{
  // Field name: info
  {
    cdr_deserialize_service_msgs__msg__ServiceEventInfo(cdr, &ros_message->info);
  }

  // Field name: request
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->request.data) {
      weather_interfaces__srv__DataCheck_Request__Sequence__fini(&ros_message->request);
    }
    if (!weather_interfaces__srv__DataCheck_Request__Sequence__init(&ros_message->request, size)) {
      fprintf(stderr, "failed to create array for field 'request'");
      return false;
    }
    auto array_ptr = ros_message->request.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_weather_interfaces__srv__DataCheck_Request(cdr, &array_ptr[i]);
    }
  }

  // Field name: response
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->response.data) {
      weather_interfaces__srv__DataCheck_Response__Sequence__fini(&ros_message->response);
    }
    if (!weather_interfaces__srv__DataCheck_Response__Sequence__init(&ros_message->response, size)) {
      fprintf(stderr, "failed to create array for field 'response'");
      return false;
    }
    auto array_ptr = ros_message->response.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_weather_interfaces__srv__DataCheck_Response(cdr, &array_ptr[i]);
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_weather_interfaces
size_t get_serialized_size_weather_interfaces__srv__DataCheck_Event(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DataCheck_Event__ros_msg_type * ros_message = static_cast<const _DataCheck_Event__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: info
  current_alignment += get_serialized_size_service_msgs__msg__ServiceEventInfo(
    &(ros_message->info), current_alignment);

  // Field name: request
  {
    size_t array_size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_weather_interfaces__srv__DataCheck_Request(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: response
  {
    size_t array_size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_weather_interfaces__srv__DataCheck_Response(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_weather_interfaces
size_t max_serialized_size_weather_interfaces__srv__DataCheck_Event(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: info
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_service_msgs__msg__ServiceEventInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: request
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_weather_interfaces__srv__DataCheck_Request(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: response
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_weather_interfaces__srv__DataCheck_Response(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = weather_interfaces__srv__DataCheck_Event;
    is_plain =
      (
      offsetof(DataType, response) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_weather_interfaces
bool cdr_serialize_key_weather_interfaces__srv__DataCheck_Event(
  const weather_interfaces__srv__DataCheck_Event * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: info
  {
    cdr_serialize_key_service_msgs__msg__ServiceEventInfo(
      &ros_message->info, cdr);
  }

  // Field name: request
  {
    size_t size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_weather_interfaces__srv__DataCheck_Request(
        &array_ptr[i], cdr);
    }
  }

  // Field name: response
  {
    size_t size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_weather_interfaces__srv__DataCheck_Response(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_weather_interfaces
size_t get_serialized_size_key_weather_interfaces__srv__DataCheck_Event(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DataCheck_Event__ros_msg_type * ros_message = static_cast<const _DataCheck_Event__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: info
  current_alignment += get_serialized_size_key_service_msgs__msg__ServiceEventInfo(
    &(ros_message->info), current_alignment);

  // Field name: request
  {
    size_t array_size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_weather_interfaces__srv__DataCheck_Request(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: response
  {
    size_t array_size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_weather_interfaces__srv__DataCheck_Response(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_weather_interfaces
size_t max_serialized_size_key_weather_interfaces__srv__DataCheck_Event(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: info
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_service_msgs__msg__ServiceEventInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: request
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_weather_interfaces__srv__DataCheck_Request(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: response
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_weather_interfaces__srv__DataCheck_Response(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = weather_interfaces__srv__DataCheck_Event;
    is_plain =
      (
      offsetof(DataType, response) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _DataCheck_Event__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const weather_interfaces__srv__DataCheck_Event * ros_message = static_cast<const weather_interfaces__srv__DataCheck_Event *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_weather_interfaces__srv__DataCheck_Event(ros_message, cdr);
}

static bool _DataCheck_Event__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  weather_interfaces__srv__DataCheck_Event * ros_message = static_cast<weather_interfaces__srv__DataCheck_Event *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_weather_interfaces__srv__DataCheck_Event(cdr, ros_message);
}

static uint32_t _DataCheck_Event__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_weather_interfaces__srv__DataCheck_Event(
      untyped_ros_message, 0));
}

static size_t _DataCheck_Event__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_weather_interfaces__srv__DataCheck_Event(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_DataCheck_Event = {
  "weather_interfaces::srv",
  "DataCheck_Event",
  _DataCheck_Event__cdr_serialize,
  _DataCheck_Event__cdr_deserialize,
  _DataCheck_Event__get_serialized_size,
  _DataCheck_Event__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _DataCheck_Event__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_DataCheck_Event,
  get_message_typesupport_handle_function,
  &weather_interfaces__srv__DataCheck_Event__get_type_hash,
  &weather_interfaces__srv__DataCheck_Event__get_type_description,
  &weather_interfaces__srv__DataCheck_Event__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, weather_interfaces, srv, DataCheck_Event)() {
  return &_DataCheck_Event__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "weather_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "weather_interfaces/srv/data_check.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t DataCheck__callbacks = {
  "weather_interfaces::srv",
  "DataCheck",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, weather_interfaces, srv, DataCheck_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, weather_interfaces, srv, DataCheck_Response)(),
};

static rosidl_service_type_support_t DataCheck__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &DataCheck__callbacks,
  get_service_typesupport_handle_function,
  &_DataCheck_Request__type_support,
  &_DataCheck_Response__type_support,
  &_DataCheck_Event__type_support,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    weather_interfaces,
    srv,
    DataCheck
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    weather_interfaces,
    srv,
    DataCheck
  ),
  &weather_interfaces__srv__DataCheck__get_type_hash,
  &weather_interfaces__srv__DataCheck__get_type_description,
  &weather_interfaces__srv__DataCheck__get_type_description_sources,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, weather_interfaces, srv, DataCheck)() {
  return &DataCheck__handle;
}

#if defined(__cplusplus)
}
#endif
