// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from intro_interfaces:srv/LEDTracker.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "intro_interfaces/srv/led_tracker.hpp"


#ifndef INTRO_INTERFACES__SRV__DETAIL__LED_TRACKER__STRUCT_HPP_
#define INTRO_INTERFACES__SRV__DETAIL__LED_TRACKER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__intro_interfaces__srv__LEDTracker_Request __attribute__((deprecated))
#else
# define DEPRECATED__intro_interfaces__srv__LEDTracker_Request __declspec(deprecated)
#endif

namespace intro_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct LEDTracker_Request_
{
  using Type = LEDTracker_Request_<ContainerAllocator>;

  explicit LEDTracker_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->num_of_sys_blinks = 0ll;
      this->led_state = false;
    }
  }

  explicit LEDTracker_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->num_of_sys_blinks = 0ll;
      this->led_state = false;
    }
  }

  // field types and members
  using _num_of_sys_blinks_type =
    int64_t;
  _num_of_sys_blinks_type num_of_sys_blinks;
  using _led_state_type =
    bool;
  _led_state_type led_state;

  // setters for named parameter idiom
  Type & set__num_of_sys_blinks(
    const int64_t & _arg)
  {
    this->num_of_sys_blinks = _arg;
    return *this;
  }
  Type & set__led_state(
    const bool & _arg)
  {
    this->led_state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    intro_interfaces::srv::LEDTracker_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const intro_interfaces::srv::LEDTracker_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<intro_interfaces::srv::LEDTracker_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<intro_interfaces::srv::LEDTracker_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      intro_interfaces::srv::LEDTracker_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<intro_interfaces::srv::LEDTracker_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      intro_interfaces::srv::LEDTracker_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<intro_interfaces::srv::LEDTracker_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<intro_interfaces::srv::LEDTracker_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<intro_interfaces::srv::LEDTracker_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__intro_interfaces__srv__LEDTracker_Request
    std::shared_ptr<intro_interfaces::srv::LEDTracker_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__intro_interfaces__srv__LEDTracker_Request
    std::shared_ptr<intro_interfaces::srv::LEDTracker_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LEDTracker_Request_ & other) const
  {
    if (this->num_of_sys_blinks != other.num_of_sys_blinks) {
      return false;
    }
    if (this->led_state != other.led_state) {
      return false;
    }
    return true;
  }
  bool operator!=(const LEDTracker_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LEDTracker_Request_

// alias to use template instance with default allocator
using LEDTracker_Request =
  intro_interfaces::srv::LEDTracker_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace intro_interfaces


#ifndef _WIN32
# define DEPRECATED__intro_interfaces__srv__LEDTracker_Response __attribute__((deprecated))
#else
# define DEPRECATED__intro_interfaces__srv__LEDTracker_Response __declspec(deprecated)
#endif

namespace intro_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct LEDTracker_Response_
{
  using Type = LEDTracker_Response_<ContainerAllocator>;

  explicit LEDTracker_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->num_of_cycles_completed = 0ll;
      this->is_total_blinks_in_series_of_ten = false;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->num_of_cycles_completed = 0ll;
      this->is_total_blinks_in_series_of_ten = false;
    }
  }

  explicit LEDTracker_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->num_of_cycles_completed = 0ll;
      this->is_total_blinks_in_series_of_ten = false;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->num_of_cycles_completed = 0ll;
      this->is_total_blinks_in_series_of_ten = false;
    }
  }

  // field types and members
  using _num_of_cycles_completed_type =
    int64_t;
  _num_of_cycles_completed_type num_of_cycles_completed;
  using _is_total_blinks_in_series_of_ten_type =
    bool;
  _is_total_blinks_in_series_of_ten_type is_total_blinks_in_series_of_ten;

  // setters for named parameter idiom
  Type & set__num_of_cycles_completed(
    const int64_t & _arg)
  {
    this->num_of_cycles_completed = _arg;
    return *this;
  }
  Type & set__is_total_blinks_in_series_of_ten(
    const bool & _arg)
  {
    this->is_total_blinks_in_series_of_ten = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    intro_interfaces::srv::LEDTracker_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const intro_interfaces::srv::LEDTracker_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<intro_interfaces::srv::LEDTracker_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<intro_interfaces::srv::LEDTracker_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      intro_interfaces::srv::LEDTracker_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<intro_interfaces::srv::LEDTracker_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      intro_interfaces::srv::LEDTracker_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<intro_interfaces::srv::LEDTracker_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<intro_interfaces::srv::LEDTracker_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<intro_interfaces::srv::LEDTracker_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__intro_interfaces__srv__LEDTracker_Response
    std::shared_ptr<intro_interfaces::srv::LEDTracker_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__intro_interfaces__srv__LEDTracker_Response
    std::shared_ptr<intro_interfaces::srv::LEDTracker_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LEDTracker_Response_ & other) const
  {
    if (this->num_of_cycles_completed != other.num_of_cycles_completed) {
      return false;
    }
    if (this->is_total_blinks_in_series_of_ten != other.is_total_blinks_in_series_of_ten) {
      return false;
    }
    return true;
  }
  bool operator!=(const LEDTracker_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LEDTracker_Response_

// alias to use template instance with default allocator
using LEDTracker_Response =
  intro_interfaces::srv::LEDTracker_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace intro_interfaces


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__intro_interfaces__srv__LEDTracker_Event __attribute__((deprecated))
#else
# define DEPRECATED__intro_interfaces__srv__LEDTracker_Event __declspec(deprecated)
#endif

namespace intro_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct LEDTracker_Event_
{
  using Type = LEDTracker_Event_<ContainerAllocator>;

  explicit LEDTracker_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit LEDTracker_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<intro_interfaces::srv::LEDTracker_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<intro_interfaces::srv::LEDTracker_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<intro_interfaces::srv::LEDTracker_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<intro_interfaces::srv::LEDTracker_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<intro_interfaces::srv::LEDTracker_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<intro_interfaces::srv::LEDTracker_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<intro_interfaces::srv::LEDTracker_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<intro_interfaces::srv::LEDTracker_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    intro_interfaces::srv::LEDTracker_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const intro_interfaces::srv::LEDTracker_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<intro_interfaces::srv::LEDTracker_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<intro_interfaces::srv::LEDTracker_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      intro_interfaces::srv::LEDTracker_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<intro_interfaces::srv::LEDTracker_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      intro_interfaces::srv::LEDTracker_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<intro_interfaces::srv::LEDTracker_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<intro_interfaces::srv::LEDTracker_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<intro_interfaces::srv::LEDTracker_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__intro_interfaces__srv__LEDTracker_Event
    std::shared_ptr<intro_interfaces::srv::LEDTracker_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__intro_interfaces__srv__LEDTracker_Event
    std::shared_ptr<intro_interfaces::srv::LEDTracker_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LEDTracker_Event_ & other) const
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
  bool operator!=(const LEDTracker_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LEDTracker_Event_

// alias to use template instance with default allocator
using LEDTracker_Event =
  intro_interfaces::srv::LEDTracker_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace intro_interfaces

namespace intro_interfaces
{

namespace srv
{

struct LEDTracker
{
  using Request = intro_interfaces::srv::LEDTracker_Request;
  using Response = intro_interfaces::srv::LEDTracker_Response;
  using Event = intro_interfaces::srv::LEDTracker_Event;
};

}  // namespace srv

}  // namespace intro_interfaces

#endif  // INTRO_INTERFACES__SRV__DETAIL__LED_TRACKER__STRUCT_HPP_
