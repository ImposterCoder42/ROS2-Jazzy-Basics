// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from intro_interfaces:msg/LEDState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "intro_interfaces/msg/led_state.hpp"


#ifndef INTRO_INTERFACES__MSG__DETAIL__LED_STATE__STRUCT_HPP_
#define INTRO_INTERFACES__MSG__DETAIL__LED_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__intro_interfaces__msg__LEDState __attribute__((deprecated))
#else
# define DEPRECATED__intro_interfaces__msg__LEDState __declspec(deprecated)
#endif

namespace intro_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LEDState_
{
  using Type = LEDState_<ContainerAllocator>;

  explicit LEDState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->new_state_msg = "";
      this->state = false;
    }
  }

  explicit LEDState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : new_state_msg(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->new_state_msg = "";
      this->state = false;
    }
  }

  // field types and members
  using _new_state_msg_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _new_state_msg_type new_state_msg;
  using _state_type =
    bool;
  _state_type state;

  // setters for named parameter idiom
  Type & set__new_state_msg(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->new_state_msg = _arg;
    return *this;
  }
  Type & set__state(
    const bool & _arg)
  {
    this->state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    intro_interfaces::msg::LEDState_<ContainerAllocator> *;
  using ConstRawPtr =
    const intro_interfaces::msg::LEDState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<intro_interfaces::msg::LEDState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<intro_interfaces::msg::LEDState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      intro_interfaces::msg::LEDState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<intro_interfaces::msg::LEDState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      intro_interfaces::msg::LEDState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<intro_interfaces::msg::LEDState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<intro_interfaces::msg::LEDState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<intro_interfaces::msg::LEDState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__intro_interfaces__msg__LEDState
    std::shared_ptr<intro_interfaces::msg::LEDState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__intro_interfaces__msg__LEDState
    std::shared_ptr<intro_interfaces::msg::LEDState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LEDState_ & other) const
  {
    if (this->new_state_msg != other.new_state_msg) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    return true;
  }
  bool operator!=(const LEDState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LEDState_

// alias to use template instance with default allocator
using LEDState =
  intro_interfaces::msg::LEDState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace intro_interfaces

#endif  // INTRO_INTERFACES__MSG__DETAIL__LED_STATE__STRUCT_HPP_
