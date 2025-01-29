// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_tutorials_interfaces:srv/CustomCalc.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros2_tutorials_interfaces/srv/custom_calc.hpp"


#ifndef ROS2_TUTORIALS_INTERFACES__SRV__DETAIL__CUSTOM_CALC__BUILDER_HPP_
#define ROS2_TUTORIALS_INTERFACES__SRV__DETAIL__CUSTOM_CALC__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_tutorials_interfaces/srv/detail/custom_calc__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_tutorials_interfaces
{

namespace srv
{

namespace builder
{

class Init_CustomCalc_Request_b
{
public:
  explicit Init_CustomCalc_Request_b(::ros2_tutorials_interfaces::srv::CustomCalc_Request & msg)
  : msg_(msg)
  {}
  ::ros2_tutorials_interfaces::srv::CustomCalc_Request b(::ros2_tutorials_interfaces::srv::CustomCalc_Request::_b_type arg)
  {
    msg_.b = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_tutorials_interfaces::srv::CustomCalc_Request msg_;
};

class Init_CustomCalc_Request_a
{
public:
  Init_CustomCalc_Request_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CustomCalc_Request_b a(::ros2_tutorials_interfaces::srv::CustomCalc_Request::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_CustomCalc_Request_b(msg_);
  }

private:
  ::ros2_tutorials_interfaces::srv::CustomCalc_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_tutorials_interfaces::srv::CustomCalc_Request>()
{
  return ros2_tutorials_interfaces::srv::builder::Init_CustomCalc_Request_a();
}

}  // namespace ros2_tutorials_interfaces


namespace ros2_tutorials_interfaces
{

namespace srv
{

namespace builder
{

class Init_CustomCalc_Response_result
{
public:
  Init_CustomCalc_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros2_tutorials_interfaces::srv::CustomCalc_Response result(::ros2_tutorials_interfaces::srv::CustomCalc_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_tutorials_interfaces::srv::CustomCalc_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_tutorials_interfaces::srv::CustomCalc_Response>()
{
  return ros2_tutorials_interfaces::srv::builder::Init_CustomCalc_Response_result();
}

}  // namespace ros2_tutorials_interfaces


namespace ros2_tutorials_interfaces
{

namespace srv
{

namespace builder
{

class Init_CustomCalc_Event_response
{
public:
  explicit Init_CustomCalc_Event_response(::ros2_tutorials_interfaces::srv::CustomCalc_Event & msg)
  : msg_(msg)
  {}
  ::ros2_tutorials_interfaces::srv::CustomCalc_Event response(::ros2_tutorials_interfaces::srv::CustomCalc_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_tutorials_interfaces::srv::CustomCalc_Event msg_;
};

class Init_CustomCalc_Event_request
{
public:
  explicit Init_CustomCalc_Event_request(::ros2_tutorials_interfaces::srv::CustomCalc_Event & msg)
  : msg_(msg)
  {}
  Init_CustomCalc_Event_response request(::ros2_tutorials_interfaces::srv::CustomCalc_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_CustomCalc_Event_response(msg_);
  }

private:
  ::ros2_tutorials_interfaces::srv::CustomCalc_Event msg_;
};

class Init_CustomCalc_Event_info
{
public:
  Init_CustomCalc_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CustomCalc_Event_request info(::ros2_tutorials_interfaces::srv::CustomCalc_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_CustomCalc_Event_request(msg_);
  }

private:
  ::ros2_tutorials_interfaces::srv::CustomCalc_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_tutorials_interfaces::srv::CustomCalc_Event>()
{
  return ros2_tutorials_interfaces::srv::builder::Init_CustomCalc_Event_info();
}

}  // namespace ros2_tutorials_interfaces

#endif  // ROS2_TUTORIALS_INTERFACES__SRV__DETAIL__CUSTOM_CALC__BUILDER_HPP_
