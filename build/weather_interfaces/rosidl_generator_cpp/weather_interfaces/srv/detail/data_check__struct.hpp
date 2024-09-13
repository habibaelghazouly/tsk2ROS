// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from weather_interfaces:srv/DataCheck.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "weather_interfaces/srv/data_check.hpp"


#ifndef WEATHER_INTERFACES__SRV__DETAIL__DATA_CHECK__STRUCT_HPP_
#define WEATHER_INTERFACES__SRV__DETAIL__DATA_CHECK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__weather_interfaces__srv__DataCheck_Request __attribute__((deprecated))
#else
# define DEPRECATED__weather_interfaces__srv__DataCheck_Request __declspec(deprecated)
#endif

namespace weather_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct DataCheck_Request_
{
  using Type = DataCheck_Request_<ContainerAllocator>;

  explicit DataCheck_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->temperature = 0.0f;
      this->pressure = 0.0f;
      this->humidity = 0.0f;
    }
  }

  explicit DataCheck_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->temperature = 0.0f;
      this->pressure = 0.0f;
      this->humidity = 0.0f;
    }
  }

  // field types and members
  using _temperature_type =
    float;
  _temperature_type temperature;
  using _pressure_type =
    float;
  _pressure_type pressure;
  using _humidity_type =
    float;
  _humidity_type humidity;

  // setters for named parameter idiom
  Type & set__temperature(
    const float & _arg)
  {
    this->temperature = _arg;
    return *this;
  }
  Type & set__pressure(
    const float & _arg)
  {
    this->pressure = _arg;
    return *this;
  }
  Type & set__humidity(
    const float & _arg)
  {
    this->humidity = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    weather_interfaces::srv::DataCheck_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const weather_interfaces::srv::DataCheck_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<weather_interfaces::srv::DataCheck_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<weather_interfaces::srv::DataCheck_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      weather_interfaces::srv::DataCheck_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<weather_interfaces::srv::DataCheck_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      weather_interfaces::srv::DataCheck_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<weather_interfaces::srv::DataCheck_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<weather_interfaces::srv::DataCheck_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<weather_interfaces::srv::DataCheck_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__weather_interfaces__srv__DataCheck_Request
    std::shared_ptr<weather_interfaces::srv::DataCheck_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__weather_interfaces__srv__DataCheck_Request
    std::shared_ptr<weather_interfaces::srv::DataCheck_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DataCheck_Request_ & other) const
  {
    if (this->temperature != other.temperature) {
      return false;
    }
    if (this->pressure != other.pressure) {
      return false;
    }
    if (this->humidity != other.humidity) {
      return false;
    }
    return true;
  }
  bool operator!=(const DataCheck_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DataCheck_Request_

// alias to use template instance with default allocator
using DataCheck_Request =
  weather_interfaces::srv::DataCheck_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace weather_interfaces


#ifndef _WIN32
# define DEPRECATED__weather_interfaces__srv__DataCheck_Response __attribute__((deprecated))
#else
# define DEPRECATED__weather_interfaces__srv__DataCheck_Response __declspec(deprecated)
#endif

namespace weather_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct DataCheck_Response_
{
  using Type = DataCheck_Response_<ContainerAllocator>;

  explicit DataCheck_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->temp = false;
      this->press = false;
      this->humid = false;
    }
  }

  explicit DataCheck_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->temp = false;
      this->press = false;
      this->humid = false;
    }
  }

  // field types and members
  using _temp_type =
    bool;
  _temp_type temp;
  using _press_type =
    bool;
  _press_type press;
  using _humid_type =
    bool;
  _humid_type humid;

  // setters for named parameter idiom
  Type & set__temp(
    const bool & _arg)
  {
    this->temp = _arg;
    return *this;
  }
  Type & set__press(
    const bool & _arg)
  {
    this->press = _arg;
    return *this;
  }
  Type & set__humid(
    const bool & _arg)
  {
    this->humid = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    weather_interfaces::srv::DataCheck_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const weather_interfaces::srv::DataCheck_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<weather_interfaces::srv::DataCheck_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<weather_interfaces::srv::DataCheck_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      weather_interfaces::srv::DataCheck_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<weather_interfaces::srv::DataCheck_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      weather_interfaces::srv::DataCheck_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<weather_interfaces::srv::DataCheck_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<weather_interfaces::srv::DataCheck_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<weather_interfaces::srv::DataCheck_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__weather_interfaces__srv__DataCheck_Response
    std::shared_ptr<weather_interfaces::srv::DataCheck_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__weather_interfaces__srv__DataCheck_Response
    std::shared_ptr<weather_interfaces::srv::DataCheck_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DataCheck_Response_ & other) const
  {
    if (this->temp != other.temp) {
      return false;
    }
    if (this->press != other.press) {
      return false;
    }
    if (this->humid != other.humid) {
      return false;
    }
    return true;
  }
  bool operator!=(const DataCheck_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DataCheck_Response_

// alias to use template instance with default allocator
using DataCheck_Response =
  weather_interfaces::srv::DataCheck_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace weather_interfaces


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__weather_interfaces__srv__DataCheck_Event __attribute__((deprecated))
#else
# define DEPRECATED__weather_interfaces__srv__DataCheck_Event __declspec(deprecated)
#endif

namespace weather_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct DataCheck_Event_
{
  using Type = DataCheck_Event_<ContainerAllocator>;

  explicit DataCheck_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit DataCheck_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<weather_interfaces::srv::DataCheck_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<weather_interfaces::srv::DataCheck_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<weather_interfaces::srv::DataCheck_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<weather_interfaces::srv::DataCheck_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<weather_interfaces::srv::DataCheck_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<weather_interfaces::srv::DataCheck_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<weather_interfaces::srv::DataCheck_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<weather_interfaces::srv::DataCheck_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    weather_interfaces::srv::DataCheck_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const weather_interfaces::srv::DataCheck_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<weather_interfaces::srv::DataCheck_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<weather_interfaces::srv::DataCheck_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      weather_interfaces::srv::DataCheck_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<weather_interfaces::srv::DataCheck_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      weather_interfaces::srv::DataCheck_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<weather_interfaces::srv::DataCheck_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<weather_interfaces::srv::DataCheck_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<weather_interfaces::srv::DataCheck_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__weather_interfaces__srv__DataCheck_Event
    std::shared_ptr<weather_interfaces::srv::DataCheck_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__weather_interfaces__srv__DataCheck_Event
    std::shared_ptr<weather_interfaces::srv::DataCheck_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DataCheck_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const DataCheck_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DataCheck_Event_

// alias to use template instance with default allocator
using DataCheck_Event =
  weather_interfaces::srv::DataCheck_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace weather_interfaces

namespace weather_interfaces
{

namespace srv
{

struct DataCheck
{
  using Request = weather_interfaces::srv::DataCheck_Request;
  using Response = weather_interfaces::srv::DataCheck_Response;
  using Event = weather_interfaces::srv::DataCheck_Event;
};

}  // namespace srv

}  // namespace weather_interfaces

#endif  // WEATHER_INTERFACES__SRV__DETAIL__DATA_CHECK__STRUCT_HPP_
