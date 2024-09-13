// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from weather_interfaces:srv/DataCheck.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "weather_interfaces/srv/data_check.hpp"


#ifndef WEATHER_INTERFACES__SRV__DETAIL__DATA_CHECK__BUILDER_HPP_
#define WEATHER_INTERFACES__SRV__DETAIL__DATA_CHECK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "weather_interfaces/srv/detail/data_check__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace weather_interfaces
{

namespace srv
{

namespace builder
{

class Init_DataCheck_Request_humidity
{
public:
  explicit Init_DataCheck_Request_humidity(::weather_interfaces::srv::DataCheck_Request & msg)
  : msg_(msg)
  {}
  ::weather_interfaces::srv::DataCheck_Request humidity(::weather_interfaces::srv::DataCheck_Request::_humidity_type arg)
  {
    msg_.humidity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::weather_interfaces::srv::DataCheck_Request msg_;
};

class Init_DataCheck_Request_pressure
{
public:
  explicit Init_DataCheck_Request_pressure(::weather_interfaces::srv::DataCheck_Request & msg)
  : msg_(msg)
  {}
  Init_DataCheck_Request_humidity pressure(::weather_interfaces::srv::DataCheck_Request::_pressure_type arg)
  {
    msg_.pressure = std::move(arg);
    return Init_DataCheck_Request_humidity(msg_);
  }

private:
  ::weather_interfaces::srv::DataCheck_Request msg_;
};

class Init_DataCheck_Request_temperature
{
public:
  Init_DataCheck_Request_temperature()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DataCheck_Request_pressure temperature(::weather_interfaces::srv::DataCheck_Request::_temperature_type arg)
  {
    msg_.temperature = std::move(arg);
    return Init_DataCheck_Request_pressure(msg_);
  }

private:
  ::weather_interfaces::srv::DataCheck_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::weather_interfaces::srv::DataCheck_Request>()
{
  return weather_interfaces::srv::builder::Init_DataCheck_Request_temperature();
}

}  // namespace weather_interfaces


namespace weather_interfaces
{

namespace srv
{

namespace builder
{

class Init_DataCheck_Response_humid
{
public:
  explicit Init_DataCheck_Response_humid(::weather_interfaces::srv::DataCheck_Response & msg)
  : msg_(msg)
  {}
  ::weather_interfaces::srv::DataCheck_Response humid(::weather_interfaces::srv::DataCheck_Response::_humid_type arg)
  {
    msg_.humid = std::move(arg);
    return std::move(msg_);
  }

private:
  ::weather_interfaces::srv::DataCheck_Response msg_;
};

class Init_DataCheck_Response_press
{
public:
  explicit Init_DataCheck_Response_press(::weather_interfaces::srv::DataCheck_Response & msg)
  : msg_(msg)
  {}
  Init_DataCheck_Response_humid press(::weather_interfaces::srv::DataCheck_Response::_press_type arg)
  {
    msg_.press = std::move(arg);
    return Init_DataCheck_Response_humid(msg_);
  }

private:
  ::weather_interfaces::srv::DataCheck_Response msg_;
};

class Init_DataCheck_Response_temp
{
public:
  Init_DataCheck_Response_temp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DataCheck_Response_press temp(::weather_interfaces::srv::DataCheck_Response::_temp_type arg)
  {
    msg_.temp = std::move(arg);
    return Init_DataCheck_Response_press(msg_);
  }

private:
  ::weather_interfaces::srv::DataCheck_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::weather_interfaces::srv::DataCheck_Response>()
{
  return weather_interfaces::srv::builder::Init_DataCheck_Response_temp();
}

}  // namespace weather_interfaces


namespace weather_interfaces
{

namespace srv
{

namespace builder
{

class Init_DataCheck_Event_response
{
public:
  explicit Init_DataCheck_Event_response(::weather_interfaces::srv::DataCheck_Event & msg)
  : msg_(msg)
  {}
  ::weather_interfaces::srv::DataCheck_Event response(::weather_interfaces::srv::DataCheck_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::weather_interfaces::srv::DataCheck_Event msg_;
};

class Init_DataCheck_Event_request
{
public:
  explicit Init_DataCheck_Event_request(::weather_interfaces::srv::DataCheck_Event & msg)
  : msg_(msg)
  {}
  Init_DataCheck_Event_response request(::weather_interfaces::srv::DataCheck_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_DataCheck_Event_response(msg_);
  }

private:
  ::weather_interfaces::srv::DataCheck_Event msg_;
};

class Init_DataCheck_Event_info
{
public:
  Init_DataCheck_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DataCheck_Event_request info(::weather_interfaces::srv::DataCheck_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_DataCheck_Event_request(msg_);
  }

private:
  ::weather_interfaces::srv::DataCheck_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::weather_interfaces::srv::DataCheck_Event>()
{
  return weather_interfaces::srv::builder::Init_DataCheck_Event_info();
}

}  // namespace weather_interfaces

#endif  // WEATHER_INTERFACES__SRV__DETAIL__DATA_CHECK__BUILDER_HPP_
