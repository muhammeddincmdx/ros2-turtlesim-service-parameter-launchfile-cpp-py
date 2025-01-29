// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_tutorials_interfaces:srv/CustomCalc.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros2_tutorials_interfaces/srv/custom_calc.hpp"


#ifndef ROS2_TUTORIALS_INTERFACES__SRV__DETAIL__CUSTOM_CALC__STRUCT_HPP_
#define ROS2_TUTORIALS_INTERFACES__SRV__DETAIL__CUSTOM_CALC__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ros2_tutorials_interfaces__srv__CustomCalc_Request __attribute__((deprecated))
#else
# define DEPRECATED__ros2_tutorials_interfaces__srv__CustomCalc_Request __declspec(deprecated)
#endif

namespace ros2_tutorials_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CustomCalc_Request_
{
  using Type = CustomCalc_Request_<ContainerAllocator>;

  explicit CustomCalc_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->a = 0ll;
      this->b = 0ll;
    }
  }

  explicit CustomCalc_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->a = 0ll;
      this->b = 0ll;
    }
  }

  // field types and members
  using _a_type =
    int64_t;
  _a_type a;
  using _b_type =
    int64_t;
  _b_type b;

  // setters for named parameter idiom
  Type & set__a(
    const int64_t & _arg)
  {
    this->a = _arg;
    return *this;
  }
  Type & set__b(
    const int64_t & _arg)
  {
    this->b = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_tutorials_interfaces::srv::CustomCalc_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_tutorials_interfaces::srv::CustomCalc_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_tutorials_interfaces::srv::CustomCalc_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_tutorials_interfaces::srv::CustomCalc_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_tutorials_interfaces::srv::CustomCalc_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_tutorials_interfaces::srv::CustomCalc_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_tutorials_interfaces::srv::CustomCalc_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_tutorials_interfaces::srv::CustomCalc_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_tutorials_interfaces::srv::CustomCalc_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_tutorials_interfaces::srv::CustomCalc_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_tutorials_interfaces__srv__CustomCalc_Request
    std::shared_ptr<ros2_tutorials_interfaces::srv::CustomCalc_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_tutorials_interfaces__srv__CustomCalc_Request
    std::shared_ptr<ros2_tutorials_interfaces::srv::CustomCalc_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CustomCalc_Request_ & other) const
  {
    if (this->a != other.a) {
      return false;
    }
    if (this->b != other.b) {
      return false;
    }
    return true;
  }
  bool operator!=(const CustomCalc_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CustomCalc_Request_

// alias to use template instance with default allocator
using CustomCalc_Request =
  ros2_tutorials_interfaces::srv::CustomCalc_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ros2_tutorials_interfaces


#ifndef _WIN32
# define DEPRECATED__ros2_tutorials_interfaces__srv__CustomCalc_Response __attribute__((deprecated))
#else
# define DEPRECATED__ros2_tutorials_interfaces__srv__CustomCalc_Response __declspec(deprecated)
#endif

namespace ros2_tutorials_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CustomCalc_Response_
{
  using Type = CustomCalc_Response_<ContainerAllocator>;

  explicit CustomCalc_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = 0ll;
    }
  }

  explicit CustomCalc_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = 0ll;
    }
  }

  // field types and members
  using _result_type =
    int64_t;
  _result_type result;

  // setters for named parameter idiom
  Type & set__result(
    const int64_t & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_tutorials_interfaces::srv::CustomCalc_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_tutorials_interfaces::srv::CustomCalc_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_tutorials_interfaces::srv::CustomCalc_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_tutorials_interfaces::srv::CustomCalc_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_tutorials_interfaces::srv::CustomCalc_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_tutorials_interfaces::srv::CustomCalc_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_tutorials_interfaces::srv::CustomCalc_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_tutorials_interfaces::srv::CustomCalc_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_tutorials_interfaces::srv::CustomCalc_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_tutorials_interfaces::srv::CustomCalc_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_tutorials_interfaces__srv__CustomCalc_Response
    std::shared_ptr<ros2_tutorials_interfaces::srv::CustomCalc_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_tutorials_interfaces__srv__CustomCalc_Response
    std::shared_ptr<ros2_tutorials_interfaces::srv::CustomCalc_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CustomCalc_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const CustomCalc_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CustomCalc_Response_

// alias to use template instance with default allocator
using CustomCalc_Response =
  ros2_tutorials_interfaces::srv::CustomCalc_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ros2_tutorials_interfaces


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros2_tutorials_interfaces__srv__CustomCalc_Event __attribute__((deprecated))
#else
# define DEPRECATED__ros2_tutorials_interfaces__srv__CustomCalc_Event __declspec(deprecated)
#endif

namespace ros2_tutorials_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CustomCalc_Event_
{
  using Type = CustomCalc_Event_<ContainerAllocator>;

  explicit CustomCalc_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit CustomCalc_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<ros2_tutorials_interfaces::srv::CustomCalc_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_tutorials_interfaces::srv::CustomCalc_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<ros2_tutorials_interfaces::srv::CustomCalc_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_tutorials_interfaces::srv::CustomCalc_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<ros2_tutorials_interfaces::srv::CustomCalc_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_tutorials_interfaces::srv::CustomCalc_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<ros2_tutorials_interfaces::srv::CustomCalc_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_tutorials_interfaces::srv::CustomCalc_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_tutorials_interfaces::srv::CustomCalc_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_tutorials_interfaces::srv::CustomCalc_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_tutorials_interfaces::srv::CustomCalc_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_tutorials_interfaces::srv::CustomCalc_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_tutorials_interfaces::srv::CustomCalc_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_tutorials_interfaces::srv::CustomCalc_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_tutorials_interfaces::srv::CustomCalc_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_tutorials_interfaces::srv::CustomCalc_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_tutorials_interfaces::srv::CustomCalc_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_tutorials_interfaces::srv::CustomCalc_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_tutorials_interfaces__srv__CustomCalc_Event
    std::shared_ptr<ros2_tutorials_interfaces::srv::CustomCalc_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_tutorials_interfaces__srv__CustomCalc_Event
    std::shared_ptr<ros2_tutorials_interfaces::srv::CustomCalc_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CustomCalc_Event_ & other) const
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
  bool operator!=(const CustomCalc_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CustomCalc_Event_

// alias to use template instance with default allocator
using CustomCalc_Event =
  ros2_tutorials_interfaces::srv::CustomCalc_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ros2_tutorials_interfaces

namespace ros2_tutorials_interfaces
{

namespace srv
{

struct CustomCalc
{
  using Request = ros2_tutorials_interfaces::srv::CustomCalc_Request;
  using Response = ros2_tutorials_interfaces::srv::CustomCalc_Response;
  using Event = ros2_tutorials_interfaces::srv::CustomCalc_Event;
};

}  // namespace srv

}  // namespace ros2_tutorials_interfaces

#endif  // ROS2_TUTORIALS_INTERFACES__SRV__DETAIL__CUSTOM_CALC__STRUCT_HPP_
