// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from weather_interfaces:srv/DataCheck.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "weather_interfaces/srv/detail/data_check__functions.h"
#include "weather_interfaces/srv/detail/data_check__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace weather_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void DataCheck_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) weather_interfaces::srv::DataCheck_Request(_init);
}

void DataCheck_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<weather_interfaces::srv::DataCheck_Request *>(message_memory);
  typed_message->~DataCheck_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember DataCheck_Request_message_member_array[3] = {
  {
    "temperature",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(weather_interfaces::srv::DataCheck_Request, temperature),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "pressure",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(weather_interfaces::srv::DataCheck_Request, pressure),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "humidity",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(weather_interfaces::srv::DataCheck_Request, humidity),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers DataCheck_Request_message_members = {
  "weather_interfaces::srv",  // message namespace
  "DataCheck_Request",  // message name
  3,  // number of fields
  sizeof(weather_interfaces::srv::DataCheck_Request),
  false,  // has_any_key_member_
  DataCheck_Request_message_member_array,  // message members
  DataCheck_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  DataCheck_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t DataCheck_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &DataCheck_Request_message_members,
  get_message_typesupport_handle_function,
  &weather_interfaces__srv__DataCheck_Request__get_type_hash,
  &weather_interfaces__srv__DataCheck_Request__get_type_description,
  &weather_interfaces__srv__DataCheck_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace weather_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<weather_interfaces::srv::DataCheck_Request>()
{
  return &::weather_interfaces::srv::rosidl_typesupport_introspection_cpp::DataCheck_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, weather_interfaces, srv, DataCheck_Request)() {
  return &::weather_interfaces::srv::rosidl_typesupport_introspection_cpp::DataCheck_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "weather_interfaces/srv/detail/data_check__functions.h"
// already included above
// #include "weather_interfaces/srv/detail/data_check__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace weather_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void DataCheck_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) weather_interfaces::srv::DataCheck_Response(_init);
}

void DataCheck_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<weather_interfaces::srv::DataCheck_Response *>(message_memory);
  typed_message->~DataCheck_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember DataCheck_Response_message_member_array[3] = {
  {
    "temp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(weather_interfaces::srv::DataCheck_Response, temp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "press",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(weather_interfaces::srv::DataCheck_Response, press),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "humid",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(weather_interfaces::srv::DataCheck_Response, humid),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers DataCheck_Response_message_members = {
  "weather_interfaces::srv",  // message namespace
  "DataCheck_Response",  // message name
  3,  // number of fields
  sizeof(weather_interfaces::srv::DataCheck_Response),
  false,  // has_any_key_member_
  DataCheck_Response_message_member_array,  // message members
  DataCheck_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  DataCheck_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t DataCheck_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &DataCheck_Response_message_members,
  get_message_typesupport_handle_function,
  &weather_interfaces__srv__DataCheck_Response__get_type_hash,
  &weather_interfaces__srv__DataCheck_Response__get_type_description,
  &weather_interfaces__srv__DataCheck_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace weather_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<weather_interfaces::srv::DataCheck_Response>()
{
  return &::weather_interfaces::srv::rosidl_typesupport_introspection_cpp::DataCheck_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, weather_interfaces, srv, DataCheck_Response)() {
  return &::weather_interfaces::srv::rosidl_typesupport_introspection_cpp::DataCheck_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "weather_interfaces/srv/detail/data_check__functions.h"
// already included above
// #include "weather_interfaces/srv/detail/data_check__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace weather_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void DataCheck_Event_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) weather_interfaces::srv::DataCheck_Event(_init);
}

void DataCheck_Event_fini_function(void * message_memory)
{
  auto typed_message = static_cast<weather_interfaces::srv::DataCheck_Event *>(message_memory);
  typed_message->~DataCheck_Event();
}

size_t size_function__DataCheck_Event__request(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<weather_interfaces::srv::DataCheck_Request> *>(untyped_member);
  return member->size();
}

const void * get_const_function__DataCheck_Event__request(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<weather_interfaces::srv::DataCheck_Request> *>(untyped_member);
  return &member[index];
}

void * get_function__DataCheck_Event__request(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<weather_interfaces::srv::DataCheck_Request> *>(untyped_member);
  return &member[index];
}

void fetch_function__DataCheck_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const weather_interfaces::srv::DataCheck_Request *>(
    get_const_function__DataCheck_Event__request(untyped_member, index));
  auto & value = *reinterpret_cast<weather_interfaces::srv::DataCheck_Request *>(untyped_value);
  value = item;
}

void assign_function__DataCheck_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<weather_interfaces::srv::DataCheck_Request *>(
    get_function__DataCheck_Event__request(untyped_member, index));
  const auto & value = *reinterpret_cast<const weather_interfaces::srv::DataCheck_Request *>(untyped_value);
  item = value;
}

void resize_function__DataCheck_Event__request(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<weather_interfaces::srv::DataCheck_Request> *>(untyped_member);
  member->resize(size);
}

size_t size_function__DataCheck_Event__response(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<weather_interfaces::srv::DataCheck_Response> *>(untyped_member);
  return member->size();
}

const void * get_const_function__DataCheck_Event__response(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<weather_interfaces::srv::DataCheck_Response> *>(untyped_member);
  return &member[index];
}

void * get_function__DataCheck_Event__response(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<weather_interfaces::srv::DataCheck_Response> *>(untyped_member);
  return &member[index];
}

void fetch_function__DataCheck_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const weather_interfaces::srv::DataCheck_Response *>(
    get_const_function__DataCheck_Event__response(untyped_member, index));
  auto & value = *reinterpret_cast<weather_interfaces::srv::DataCheck_Response *>(untyped_value);
  value = item;
}

void assign_function__DataCheck_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<weather_interfaces::srv::DataCheck_Response *>(
    get_function__DataCheck_Event__response(untyped_member, index));
  const auto & value = *reinterpret_cast<const weather_interfaces::srv::DataCheck_Response *>(untyped_value);
  item = value;
}

void resize_function__DataCheck_Event__response(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<weather_interfaces::srv::DataCheck_Response> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember DataCheck_Event_message_member_array[3] = {
  {
    "info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<service_msgs::msg::ServiceEventInfo>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(weather_interfaces::srv::DataCheck_Event, info),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "request",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<weather_interfaces::srv::DataCheck_Request>(),  // members of sub message
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(weather_interfaces::srv::DataCheck_Event, request),  // bytes offset in struct
    nullptr,  // default value
    size_function__DataCheck_Event__request,  // size() function pointer
    get_const_function__DataCheck_Event__request,  // get_const(index) function pointer
    get_function__DataCheck_Event__request,  // get(index) function pointer
    fetch_function__DataCheck_Event__request,  // fetch(index, &value) function pointer
    assign_function__DataCheck_Event__request,  // assign(index, value) function pointer
    resize_function__DataCheck_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<weather_interfaces::srv::DataCheck_Response>(),  // members of sub message
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(weather_interfaces::srv::DataCheck_Event, response),  // bytes offset in struct
    nullptr,  // default value
    size_function__DataCheck_Event__response,  // size() function pointer
    get_const_function__DataCheck_Event__response,  // get_const(index) function pointer
    get_function__DataCheck_Event__response,  // get(index) function pointer
    fetch_function__DataCheck_Event__response,  // fetch(index, &value) function pointer
    assign_function__DataCheck_Event__response,  // assign(index, value) function pointer
    resize_function__DataCheck_Event__response  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers DataCheck_Event_message_members = {
  "weather_interfaces::srv",  // message namespace
  "DataCheck_Event",  // message name
  3,  // number of fields
  sizeof(weather_interfaces::srv::DataCheck_Event),
  false,  // has_any_key_member_
  DataCheck_Event_message_member_array,  // message members
  DataCheck_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  DataCheck_Event_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t DataCheck_Event_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &DataCheck_Event_message_members,
  get_message_typesupport_handle_function,
  &weather_interfaces__srv__DataCheck_Event__get_type_hash,
  &weather_interfaces__srv__DataCheck_Event__get_type_description,
  &weather_interfaces__srv__DataCheck_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace weather_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<weather_interfaces::srv::DataCheck_Event>()
{
  return &::weather_interfaces::srv::rosidl_typesupport_introspection_cpp::DataCheck_Event_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, weather_interfaces, srv, DataCheck_Event)() {
  return &::weather_interfaces::srv::rosidl_typesupport_introspection_cpp::DataCheck_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "weather_interfaces/srv/detail/data_check__functions.h"
// already included above
// #include "weather_interfaces/srv/detail/data_check__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace weather_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers DataCheck_service_members = {
  "weather_interfaces::srv",  // service namespace
  "DataCheck",  // service name
  // the following fields are initialized below on first access
  // see get_service_type_support_handle<weather_interfaces::srv::DataCheck>()
  nullptr,  // request message
  nullptr,  // response message
  nullptr,  // event message
};

static const rosidl_service_type_support_t DataCheck_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &DataCheck_service_members,
  get_service_typesupport_handle_function,
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<weather_interfaces::srv::DataCheck_Request>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<weather_interfaces::srv::DataCheck_Response>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<weather_interfaces::srv::DataCheck_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<weather_interfaces::srv::DataCheck>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<weather_interfaces::srv::DataCheck>,
  &weather_interfaces__srv__DataCheck__get_type_hash,
  &weather_interfaces__srv__DataCheck__get_type_description,
  &weather_interfaces__srv__DataCheck__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace weather_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<weather_interfaces::srv::DataCheck>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::weather_interfaces::srv::rosidl_typesupport_introspection_cpp::DataCheck_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure all of the service_members are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr ||
    service_members->event_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::weather_interfaces::srv::DataCheck_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::weather_interfaces::srv::DataCheck_Response
      >()->data
      );
    // initialize the event_members_ with the static function from the external library
    service_members->event_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::weather_interfaces::srv::DataCheck_Event
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, weather_interfaces, srv, DataCheck)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<weather_interfaces::srv::DataCheck>();
}

#ifdef __cplusplus
}
#endif
