// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from weather_interfaces:srv/DataCheck.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "weather_interfaces/srv/data_check.hpp"


#ifndef WEATHER_INTERFACES__SRV__DETAIL__DATA_CHECK__TRAITS_HPP_
#define WEATHER_INTERFACES__SRV__DETAIL__DATA_CHECK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "weather_interfaces/srv/detail/data_check__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace weather_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const DataCheck_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: temperature
  {
    out << "temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature, out);
    out << ", ";
  }

  // member: pressure
  {
    out << "pressure: ";
    rosidl_generator_traits::value_to_yaml(msg.pressure, out);
    out << ", ";
  }

  // member: humidity
  {
    out << "humidity: ";
    rosidl_generator_traits::value_to_yaml(msg.humidity, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DataCheck_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature, out);
    out << "\n";
  }

  // member: pressure
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pressure: ";
    rosidl_generator_traits::value_to_yaml(msg.pressure, out);
    out << "\n";
  }

  // member: humidity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "humidity: ";
    rosidl_generator_traits::value_to_yaml(msg.humidity, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DataCheck_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace weather_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use weather_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const weather_interfaces::srv::DataCheck_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  weather_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use weather_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const weather_interfaces::srv::DataCheck_Request & msg)
{
  return weather_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<weather_interfaces::srv::DataCheck_Request>()
{
  return "weather_interfaces::srv::DataCheck_Request";
}

template<>
inline const char * name<weather_interfaces::srv::DataCheck_Request>()
{
  return "weather_interfaces/srv/DataCheck_Request";
}

template<>
struct has_fixed_size<weather_interfaces::srv::DataCheck_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<weather_interfaces::srv::DataCheck_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<weather_interfaces::srv::DataCheck_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace weather_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const DataCheck_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: temp
  {
    out << "temp: ";
    rosidl_generator_traits::value_to_yaml(msg.temp, out);
    out << ", ";
  }

  // member: press
  {
    out << "press: ";
    rosidl_generator_traits::value_to_yaml(msg.press, out);
    out << ", ";
  }

  // member: humid
  {
    out << "humid: ";
    rosidl_generator_traits::value_to_yaml(msg.humid, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DataCheck_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: temp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temp: ";
    rosidl_generator_traits::value_to_yaml(msg.temp, out);
    out << "\n";
  }

  // member: press
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "press: ";
    rosidl_generator_traits::value_to_yaml(msg.press, out);
    out << "\n";
  }

  // member: humid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "humid: ";
    rosidl_generator_traits::value_to_yaml(msg.humid, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DataCheck_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace weather_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use weather_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const weather_interfaces::srv::DataCheck_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  weather_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use weather_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const weather_interfaces::srv::DataCheck_Response & msg)
{
  return weather_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<weather_interfaces::srv::DataCheck_Response>()
{
  return "weather_interfaces::srv::DataCheck_Response";
}

template<>
inline const char * name<weather_interfaces::srv::DataCheck_Response>()
{
  return "weather_interfaces/srv/DataCheck_Response";
}

template<>
struct has_fixed_size<weather_interfaces::srv::DataCheck_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<weather_interfaces::srv::DataCheck_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<weather_interfaces::srv::DataCheck_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace weather_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const DataCheck_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DataCheck_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DataCheck_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace weather_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use weather_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const weather_interfaces::srv::DataCheck_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  weather_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use weather_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const weather_interfaces::srv::DataCheck_Event & msg)
{
  return weather_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<weather_interfaces::srv::DataCheck_Event>()
{
  return "weather_interfaces::srv::DataCheck_Event";
}

template<>
inline const char * name<weather_interfaces::srv::DataCheck_Event>()
{
  return "weather_interfaces/srv/DataCheck_Event";
}

template<>
struct has_fixed_size<weather_interfaces::srv::DataCheck_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<weather_interfaces::srv::DataCheck_Event>
  : std::integral_constant<bool, has_bounded_size<service_msgs::msg::ServiceEventInfo>::value && has_bounded_size<weather_interfaces::srv::DataCheck_Request>::value && has_bounded_size<weather_interfaces::srv::DataCheck_Response>::value> {};

template<>
struct is_message<weather_interfaces::srv::DataCheck_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<weather_interfaces::srv::DataCheck>()
{
  return "weather_interfaces::srv::DataCheck";
}

template<>
inline const char * name<weather_interfaces::srv::DataCheck>()
{
  return "weather_interfaces/srv/DataCheck";
}

template<>
struct has_fixed_size<weather_interfaces::srv::DataCheck>
  : std::integral_constant<
    bool,
    has_fixed_size<weather_interfaces::srv::DataCheck_Request>::value &&
    has_fixed_size<weather_interfaces::srv::DataCheck_Response>::value
  >
{
};

template<>
struct has_bounded_size<weather_interfaces::srv::DataCheck>
  : std::integral_constant<
    bool,
    has_bounded_size<weather_interfaces::srv::DataCheck_Request>::value &&
    has_bounded_size<weather_interfaces::srv::DataCheck_Response>::value
  >
{
};

template<>
struct is_service<weather_interfaces::srv::DataCheck>
  : std::true_type
{
};

template<>
struct is_service_request<weather_interfaces::srv::DataCheck_Request>
  : std::true_type
{
};

template<>
struct is_service_response<weather_interfaces::srv::DataCheck_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // WEATHER_INTERFACES__SRV__DETAIL__DATA_CHECK__TRAITS_HPP_
