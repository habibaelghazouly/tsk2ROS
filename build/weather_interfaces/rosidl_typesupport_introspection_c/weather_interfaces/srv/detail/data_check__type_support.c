// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from weather_interfaces:srv/DataCheck.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "weather_interfaces/srv/detail/data_check__rosidl_typesupport_introspection_c.h"
#include "weather_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "weather_interfaces/srv/detail/data_check__functions.h"
#include "weather_interfaces/srv/detail/data_check__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void weather_interfaces__srv__DataCheck_Request__rosidl_typesupport_introspection_c__DataCheck_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  weather_interfaces__srv__DataCheck_Request__init(message_memory);
}

void weather_interfaces__srv__DataCheck_Request__rosidl_typesupport_introspection_c__DataCheck_Request_fini_function(void * message_memory)
{
  weather_interfaces__srv__DataCheck_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember weather_interfaces__srv__DataCheck_Request__rosidl_typesupport_introspection_c__DataCheck_Request_message_member_array[3] = {
  {
    "temperature",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(weather_interfaces__srv__DataCheck_Request, temperature),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pressure",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(weather_interfaces__srv__DataCheck_Request, pressure),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "humidity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(weather_interfaces__srv__DataCheck_Request, humidity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers weather_interfaces__srv__DataCheck_Request__rosidl_typesupport_introspection_c__DataCheck_Request_message_members = {
  "weather_interfaces__srv",  // message namespace
  "DataCheck_Request",  // message name
  3,  // number of fields
  sizeof(weather_interfaces__srv__DataCheck_Request),
  false,  // has_any_key_member_
  weather_interfaces__srv__DataCheck_Request__rosidl_typesupport_introspection_c__DataCheck_Request_message_member_array,  // message members
  weather_interfaces__srv__DataCheck_Request__rosidl_typesupport_introspection_c__DataCheck_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  weather_interfaces__srv__DataCheck_Request__rosidl_typesupport_introspection_c__DataCheck_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t weather_interfaces__srv__DataCheck_Request__rosidl_typesupport_introspection_c__DataCheck_Request_message_type_support_handle = {
  0,
  &weather_interfaces__srv__DataCheck_Request__rosidl_typesupport_introspection_c__DataCheck_Request_message_members,
  get_message_typesupport_handle_function,
  &weather_interfaces__srv__DataCheck_Request__get_type_hash,
  &weather_interfaces__srv__DataCheck_Request__get_type_description,
  &weather_interfaces__srv__DataCheck_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_weather_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, weather_interfaces, srv, DataCheck_Request)() {
  if (!weather_interfaces__srv__DataCheck_Request__rosidl_typesupport_introspection_c__DataCheck_Request_message_type_support_handle.typesupport_identifier) {
    weather_interfaces__srv__DataCheck_Request__rosidl_typesupport_introspection_c__DataCheck_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &weather_interfaces__srv__DataCheck_Request__rosidl_typesupport_introspection_c__DataCheck_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "weather_interfaces/srv/detail/data_check__rosidl_typesupport_introspection_c.h"
// already included above
// #include "weather_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "weather_interfaces/srv/detail/data_check__functions.h"
// already included above
// #include "weather_interfaces/srv/detail/data_check__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void weather_interfaces__srv__DataCheck_Response__rosidl_typesupport_introspection_c__DataCheck_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  weather_interfaces__srv__DataCheck_Response__init(message_memory);
}

void weather_interfaces__srv__DataCheck_Response__rosidl_typesupport_introspection_c__DataCheck_Response_fini_function(void * message_memory)
{
  weather_interfaces__srv__DataCheck_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember weather_interfaces__srv__DataCheck_Response__rosidl_typesupport_introspection_c__DataCheck_Response_message_member_array[3] = {
  {
    "temp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(weather_interfaces__srv__DataCheck_Response, temp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "press",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(weather_interfaces__srv__DataCheck_Response, press),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "humid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(weather_interfaces__srv__DataCheck_Response, humid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers weather_interfaces__srv__DataCheck_Response__rosidl_typesupport_introspection_c__DataCheck_Response_message_members = {
  "weather_interfaces__srv",  // message namespace
  "DataCheck_Response",  // message name
  3,  // number of fields
  sizeof(weather_interfaces__srv__DataCheck_Response),
  false,  // has_any_key_member_
  weather_interfaces__srv__DataCheck_Response__rosidl_typesupport_introspection_c__DataCheck_Response_message_member_array,  // message members
  weather_interfaces__srv__DataCheck_Response__rosidl_typesupport_introspection_c__DataCheck_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  weather_interfaces__srv__DataCheck_Response__rosidl_typesupport_introspection_c__DataCheck_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t weather_interfaces__srv__DataCheck_Response__rosidl_typesupport_introspection_c__DataCheck_Response_message_type_support_handle = {
  0,
  &weather_interfaces__srv__DataCheck_Response__rosidl_typesupport_introspection_c__DataCheck_Response_message_members,
  get_message_typesupport_handle_function,
  &weather_interfaces__srv__DataCheck_Response__get_type_hash,
  &weather_interfaces__srv__DataCheck_Response__get_type_description,
  &weather_interfaces__srv__DataCheck_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_weather_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, weather_interfaces, srv, DataCheck_Response)() {
  if (!weather_interfaces__srv__DataCheck_Response__rosidl_typesupport_introspection_c__DataCheck_Response_message_type_support_handle.typesupport_identifier) {
    weather_interfaces__srv__DataCheck_Response__rosidl_typesupport_introspection_c__DataCheck_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &weather_interfaces__srv__DataCheck_Response__rosidl_typesupport_introspection_c__DataCheck_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "weather_interfaces/srv/detail/data_check__rosidl_typesupport_introspection_c.h"
// already included above
// #include "weather_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "weather_interfaces/srv/detail/data_check__functions.h"
// already included above
// #include "weather_interfaces/srv/detail/data_check__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "weather_interfaces/srv/data_check.h"
// Member `request`
// Member `response`
// already included above
// #include "weather_interfaces/srv/detail/data_check__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void weather_interfaces__srv__DataCheck_Event__rosidl_typesupport_introspection_c__DataCheck_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  weather_interfaces__srv__DataCheck_Event__init(message_memory);
}

void weather_interfaces__srv__DataCheck_Event__rosidl_typesupport_introspection_c__DataCheck_Event_fini_function(void * message_memory)
{
  weather_interfaces__srv__DataCheck_Event__fini(message_memory);
}

size_t weather_interfaces__srv__DataCheck_Event__rosidl_typesupport_introspection_c__size_function__DataCheck_Event__request(
  const void * untyped_member)
{
  const weather_interfaces__srv__DataCheck_Request__Sequence * member =
    (const weather_interfaces__srv__DataCheck_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * weather_interfaces__srv__DataCheck_Event__rosidl_typesupport_introspection_c__get_const_function__DataCheck_Event__request(
  const void * untyped_member, size_t index)
{
  const weather_interfaces__srv__DataCheck_Request__Sequence * member =
    (const weather_interfaces__srv__DataCheck_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * weather_interfaces__srv__DataCheck_Event__rosidl_typesupport_introspection_c__get_function__DataCheck_Event__request(
  void * untyped_member, size_t index)
{
  weather_interfaces__srv__DataCheck_Request__Sequence * member =
    (weather_interfaces__srv__DataCheck_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void weather_interfaces__srv__DataCheck_Event__rosidl_typesupport_introspection_c__fetch_function__DataCheck_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const weather_interfaces__srv__DataCheck_Request * item =
    ((const weather_interfaces__srv__DataCheck_Request *)
    weather_interfaces__srv__DataCheck_Event__rosidl_typesupport_introspection_c__get_const_function__DataCheck_Event__request(untyped_member, index));
  weather_interfaces__srv__DataCheck_Request * value =
    (weather_interfaces__srv__DataCheck_Request *)(untyped_value);
  *value = *item;
}

void weather_interfaces__srv__DataCheck_Event__rosidl_typesupport_introspection_c__assign_function__DataCheck_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  weather_interfaces__srv__DataCheck_Request * item =
    ((weather_interfaces__srv__DataCheck_Request *)
    weather_interfaces__srv__DataCheck_Event__rosidl_typesupport_introspection_c__get_function__DataCheck_Event__request(untyped_member, index));
  const weather_interfaces__srv__DataCheck_Request * value =
    (const weather_interfaces__srv__DataCheck_Request *)(untyped_value);
  *item = *value;
}

bool weather_interfaces__srv__DataCheck_Event__rosidl_typesupport_introspection_c__resize_function__DataCheck_Event__request(
  void * untyped_member, size_t size)
{
  weather_interfaces__srv__DataCheck_Request__Sequence * member =
    (weather_interfaces__srv__DataCheck_Request__Sequence *)(untyped_member);
  weather_interfaces__srv__DataCheck_Request__Sequence__fini(member);
  return weather_interfaces__srv__DataCheck_Request__Sequence__init(member, size);
}

size_t weather_interfaces__srv__DataCheck_Event__rosidl_typesupport_introspection_c__size_function__DataCheck_Event__response(
  const void * untyped_member)
{
  const weather_interfaces__srv__DataCheck_Response__Sequence * member =
    (const weather_interfaces__srv__DataCheck_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * weather_interfaces__srv__DataCheck_Event__rosidl_typesupport_introspection_c__get_const_function__DataCheck_Event__response(
  const void * untyped_member, size_t index)
{
  const weather_interfaces__srv__DataCheck_Response__Sequence * member =
    (const weather_interfaces__srv__DataCheck_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * weather_interfaces__srv__DataCheck_Event__rosidl_typesupport_introspection_c__get_function__DataCheck_Event__response(
  void * untyped_member, size_t index)
{
  weather_interfaces__srv__DataCheck_Response__Sequence * member =
    (weather_interfaces__srv__DataCheck_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void weather_interfaces__srv__DataCheck_Event__rosidl_typesupport_introspection_c__fetch_function__DataCheck_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const weather_interfaces__srv__DataCheck_Response * item =
    ((const weather_interfaces__srv__DataCheck_Response *)
    weather_interfaces__srv__DataCheck_Event__rosidl_typesupport_introspection_c__get_const_function__DataCheck_Event__response(untyped_member, index));
  weather_interfaces__srv__DataCheck_Response * value =
    (weather_interfaces__srv__DataCheck_Response *)(untyped_value);
  *value = *item;
}

void weather_interfaces__srv__DataCheck_Event__rosidl_typesupport_introspection_c__assign_function__DataCheck_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  weather_interfaces__srv__DataCheck_Response * item =
    ((weather_interfaces__srv__DataCheck_Response *)
    weather_interfaces__srv__DataCheck_Event__rosidl_typesupport_introspection_c__get_function__DataCheck_Event__response(untyped_member, index));
  const weather_interfaces__srv__DataCheck_Response * value =
    (const weather_interfaces__srv__DataCheck_Response *)(untyped_value);
  *item = *value;
}

bool weather_interfaces__srv__DataCheck_Event__rosidl_typesupport_introspection_c__resize_function__DataCheck_Event__response(
  void * untyped_member, size_t size)
{
  weather_interfaces__srv__DataCheck_Response__Sequence * member =
    (weather_interfaces__srv__DataCheck_Response__Sequence *)(untyped_member);
  weather_interfaces__srv__DataCheck_Response__Sequence__fini(member);
  return weather_interfaces__srv__DataCheck_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember weather_interfaces__srv__DataCheck_Event__rosidl_typesupport_introspection_c__DataCheck_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(weather_interfaces__srv__DataCheck_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(weather_interfaces__srv__DataCheck_Event, request),  // bytes offset in struct
    NULL,  // default value
    weather_interfaces__srv__DataCheck_Event__rosidl_typesupport_introspection_c__size_function__DataCheck_Event__request,  // size() function pointer
    weather_interfaces__srv__DataCheck_Event__rosidl_typesupport_introspection_c__get_const_function__DataCheck_Event__request,  // get_const(index) function pointer
    weather_interfaces__srv__DataCheck_Event__rosidl_typesupport_introspection_c__get_function__DataCheck_Event__request,  // get(index) function pointer
    weather_interfaces__srv__DataCheck_Event__rosidl_typesupport_introspection_c__fetch_function__DataCheck_Event__request,  // fetch(index, &value) function pointer
    weather_interfaces__srv__DataCheck_Event__rosidl_typesupport_introspection_c__assign_function__DataCheck_Event__request,  // assign(index, value) function pointer
    weather_interfaces__srv__DataCheck_Event__rosidl_typesupport_introspection_c__resize_function__DataCheck_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(weather_interfaces__srv__DataCheck_Event, response),  // bytes offset in struct
    NULL,  // default value
    weather_interfaces__srv__DataCheck_Event__rosidl_typesupport_introspection_c__size_function__DataCheck_Event__response,  // size() function pointer
    weather_interfaces__srv__DataCheck_Event__rosidl_typesupport_introspection_c__get_const_function__DataCheck_Event__response,  // get_const(index) function pointer
    weather_interfaces__srv__DataCheck_Event__rosidl_typesupport_introspection_c__get_function__DataCheck_Event__response,  // get(index) function pointer
    weather_interfaces__srv__DataCheck_Event__rosidl_typesupport_introspection_c__fetch_function__DataCheck_Event__response,  // fetch(index, &value) function pointer
    weather_interfaces__srv__DataCheck_Event__rosidl_typesupport_introspection_c__assign_function__DataCheck_Event__response,  // assign(index, value) function pointer
    weather_interfaces__srv__DataCheck_Event__rosidl_typesupport_introspection_c__resize_function__DataCheck_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers weather_interfaces__srv__DataCheck_Event__rosidl_typesupport_introspection_c__DataCheck_Event_message_members = {
  "weather_interfaces__srv",  // message namespace
  "DataCheck_Event",  // message name
  3,  // number of fields
  sizeof(weather_interfaces__srv__DataCheck_Event),
  false,  // has_any_key_member_
  weather_interfaces__srv__DataCheck_Event__rosidl_typesupport_introspection_c__DataCheck_Event_message_member_array,  // message members
  weather_interfaces__srv__DataCheck_Event__rosidl_typesupport_introspection_c__DataCheck_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  weather_interfaces__srv__DataCheck_Event__rosidl_typesupport_introspection_c__DataCheck_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t weather_interfaces__srv__DataCheck_Event__rosidl_typesupport_introspection_c__DataCheck_Event_message_type_support_handle = {
  0,
  &weather_interfaces__srv__DataCheck_Event__rosidl_typesupport_introspection_c__DataCheck_Event_message_members,
  get_message_typesupport_handle_function,
  &weather_interfaces__srv__DataCheck_Event__get_type_hash,
  &weather_interfaces__srv__DataCheck_Event__get_type_description,
  &weather_interfaces__srv__DataCheck_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_weather_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, weather_interfaces, srv, DataCheck_Event)() {
  weather_interfaces__srv__DataCheck_Event__rosidl_typesupport_introspection_c__DataCheck_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  weather_interfaces__srv__DataCheck_Event__rosidl_typesupport_introspection_c__DataCheck_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, weather_interfaces, srv, DataCheck_Request)();
  weather_interfaces__srv__DataCheck_Event__rosidl_typesupport_introspection_c__DataCheck_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, weather_interfaces, srv, DataCheck_Response)();
  if (!weather_interfaces__srv__DataCheck_Event__rosidl_typesupport_introspection_c__DataCheck_Event_message_type_support_handle.typesupport_identifier) {
    weather_interfaces__srv__DataCheck_Event__rosidl_typesupport_introspection_c__DataCheck_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &weather_interfaces__srv__DataCheck_Event__rosidl_typesupport_introspection_c__DataCheck_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "weather_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "weather_interfaces/srv/detail/data_check__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers weather_interfaces__srv__detail__data_check__rosidl_typesupport_introspection_c__DataCheck_service_members = {
  "weather_interfaces__srv",  // service namespace
  "DataCheck",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // weather_interfaces__srv__detail__data_check__rosidl_typesupport_introspection_c__DataCheck_Request_message_type_support_handle,
  NULL,  // response message
  // weather_interfaces__srv__detail__data_check__rosidl_typesupport_introspection_c__DataCheck_Response_message_type_support_handle
  NULL  // event_message
  // weather_interfaces__srv__detail__data_check__rosidl_typesupport_introspection_c__DataCheck_Response_message_type_support_handle
};


static rosidl_service_type_support_t weather_interfaces__srv__detail__data_check__rosidl_typesupport_introspection_c__DataCheck_service_type_support_handle = {
  0,
  &weather_interfaces__srv__detail__data_check__rosidl_typesupport_introspection_c__DataCheck_service_members,
  get_service_typesupport_handle_function,
  &weather_interfaces__srv__DataCheck_Request__rosidl_typesupport_introspection_c__DataCheck_Request_message_type_support_handle,
  &weather_interfaces__srv__DataCheck_Response__rosidl_typesupport_introspection_c__DataCheck_Response_message_type_support_handle,
  &weather_interfaces__srv__DataCheck_Event__rosidl_typesupport_introspection_c__DataCheck_Event_message_type_support_handle,
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

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, weather_interfaces, srv, DataCheck_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, weather_interfaces, srv, DataCheck_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, weather_interfaces, srv, DataCheck_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_weather_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, weather_interfaces, srv, DataCheck)(void) {
  if (!weather_interfaces__srv__detail__data_check__rosidl_typesupport_introspection_c__DataCheck_service_type_support_handle.typesupport_identifier) {
    weather_interfaces__srv__detail__data_check__rosidl_typesupport_introspection_c__DataCheck_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)weather_interfaces__srv__detail__data_check__rosidl_typesupport_introspection_c__DataCheck_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, weather_interfaces, srv, DataCheck_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, weather_interfaces, srv, DataCheck_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, weather_interfaces, srv, DataCheck_Event)()->data;
  }

  return &weather_interfaces__srv__detail__data_check__rosidl_typesupport_introspection_c__DataCheck_service_type_support_handle;
}
