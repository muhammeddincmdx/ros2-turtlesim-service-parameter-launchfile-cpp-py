// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2_tutorials_interfaces:srv/CustomCalc.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros2_tutorials_interfaces/srv/custom_calc.hpp"


#ifndef ROS2_TUTORIALS_INTERFACES__SRV__DETAIL__CUSTOM_CALC__TRAITS_HPP_
#define ROS2_TUTORIALS_INTERFACES__SRV__DETAIL__CUSTOM_CALC__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros2_tutorials_interfaces/srv/detail/custom_calc__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ros2_tutorials_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const CustomCalc_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: a
  {
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
    out << ", ";
  }

  // member: b
  {
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CustomCalc_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
    out << "\n";
  }

  // member: b
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CustomCalc_Request & msg, bool use_flow_style = false)
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

}  // namespace ros2_tutorials_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use ros2_tutorials_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ros2_tutorials_interfaces::srv::CustomCalc_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_tutorials_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_tutorials_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const ros2_tutorials_interfaces::srv::CustomCalc_Request & msg)
{
  return ros2_tutorials_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_tutorials_interfaces::srv::CustomCalc_Request>()
{
  return "ros2_tutorials_interfaces::srv::CustomCalc_Request";
}

template<>
inline const char * name<ros2_tutorials_interfaces::srv::CustomCalc_Request>()
{
  return "ros2_tutorials_interfaces/srv/CustomCalc_Request";
}

template<>
struct has_fixed_size<ros2_tutorials_interfaces::srv::CustomCalc_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ros2_tutorials_interfaces::srv::CustomCalc_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ros2_tutorials_interfaces::srv::CustomCalc_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace ros2_tutorials_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const CustomCalc_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: result
  {
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CustomCalc_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CustomCalc_Response & msg, bool use_flow_style = false)
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

}  // namespace ros2_tutorials_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use ros2_tutorials_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ros2_tutorials_interfaces::srv::CustomCalc_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_tutorials_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_tutorials_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const ros2_tutorials_interfaces::srv::CustomCalc_Response & msg)
{
  return ros2_tutorials_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_tutorials_interfaces::srv::CustomCalc_Response>()
{
  return "ros2_tutorials_interfaces::srv::CustomCalc_Response";
}

template<>
inline const char * name<ros2_tutorials_interfaces::srv::CustomCalc_Response>()
{
  return "ros2_tutorials_interfaces/srv/CustomCalc_Response";
}

template<>
struct has_fixed_size<ros2_tutorials_interfaces::srv::CustomCalc_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ros2_tutorials_interfaces::srv::CustomCalc_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ros2_tutorials_interfaces::srv::CustomCalc_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace ros2_tutorials_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const CustomCalc_Event & msg,
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
  const CustomCalc_Event & msg,
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

inline std::string to_yaml(const CustomCalc_Event & msg, bool use_flow_style = false)
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

}  // namespace ros2_tutorials_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use ros2_tutorials_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ros2_tutorials_interfaces::srv::CustomCalc_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_tutorials_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_tutorials_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const ros2_tutorials_interfaces::srv::CustomCalc_Event & msg)
{
  return ros2_tutorials_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_tutorials_interfaces::srv::CustomCalc_Event>()
{
  return "ros2_tutorials_interfaces::srv::CustomCalc_Event";
}

template<>
inline const char * name<ros2_tutorials_interfaces::srv::CustomCalc_Event>()
{
  return "ros2_tutorials_interfaces/srv/CustomCalc_Event";
}

template<>
struct has_fixed_size<ros2_tutorials_interfaces::srv::CustomCalc_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros2_tutorials_interfaces::srv::CustomCalc_Event>
  : std::integral_constant<bool, has_bounded_size<ros2_tutorials_interfaces::srv::CustomCalc_Request>::value && has_bounded_size<ros2_tutorials_interfaces::srv::CustomCalc_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<ros2_tutorials_interfaces::srv::CustomCalc_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ros2_tutorials_interfaces::srv::CustomCalc>()
{
  return "ros2_tutorials_interfaces::srv::CustomCalc";
}

template<>
inline const char * name<ros2_tutorials_interfaces::srv::CustomCalc>()
{
  return "ros2_tutorials_interfaces/srv/CustomCalc";
}

template<>
struct has_fixed_size<ros2_tutorials_interfaces::srv::CustomCalc>
  : std::integral_constant<
    bool,
    has_fixed_size<ros2_tutorials_interfaces::srv::CustomCalc_Request>::value &&
    has_fixed_size<ros2_tutorials_interfaces::srv::CustomCalc_Response>::value
  >
{
};

template<>
struct has_bounded_size<ros2_tutorials_interfaces::srv::CustomCalc>
  : std::integral_constant<
    bool,
    has_bounded_size<ros2_tutorials_interfaces::srv::CustomCalc_Request>::value &&
    has_bounded_size<ros2_tutorials_interfaces::srv::CustomCalc_Response>::value
  >
{
};

template<>
struct is_service<ros2_tutorials_interfaces::srv::CustomCalc>
  : std::true_type
{
};

template<>
struct is_service_request<ros2_tutorials_interfaces::srv::CustomCalc_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ros2_tutorials_interfaces::srv::CustomCalc_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ROS2_TUTORIALS_INTERFACES__SRV__DETAIL__CUSTOM_CALC__TRAITS_HPP_
