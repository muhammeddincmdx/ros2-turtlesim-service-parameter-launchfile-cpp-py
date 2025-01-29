

# ros2_tutorials_py file

```
ros2 pkg create --build-type ament_python ros2_tutorials_py
```

## publisher.py

```
#!/usr/bin/env python3
import rclpy
from rclpy.node import Node     
from std_msgs.msg import String

class MyPublisherNode(Node):
    def __init__(self):
        super().__init__("python_publisher")
        self.publisher_ = self.create_publisher(String, 'topic', 10)
        self.timer = self.create_timer(0.5, self.timer_callback)     
        self.i = 0
        self.msg = String()
        self.get_logger().info("Publisher Python has been started.")

    def timer_callback(self):                                      
        self.msg.data = f"Hello, world: {self.i}"
        self.i += 1
        self.get_logger().info(f'Publishing: "{self.msg.data}"')
        self.publisher_.publish(self.msg)

def main(args=None):
    rclpy.init(args=args)
    node = MyPublisherNode() 
    rclpy.spin(node)         
    node.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main()
```
## subscriber.py
```
#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from std_msgs.msg import String

class MySubscriberNode(Node):
    def __init__(self):
        super().__init__("python_subsciber")
        self.subscriber_ = self.create_subscription(String, 'topic', self.subscriber_callback, 10)
        self.get_logger().info("Subsciber Python has been started.")

    def subscriber_callback(self, msg):
        self.get_logger().info(f"I heard: {msg.data}")

def main(args=None):
    rclpy.init(args=args)
    node = MySubscriberNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main()
```
## service_server.py
```
#!/usr/bin/env python3
from ros2_tutorials_interfaces.srv import CustomCalc # Import our own custom service

import rclpy
from rclpy.node import Node

class MyService(Node):
    def __init__(self):
        super().__init__('my_service')
        # Create a service server with a callback function
        self.srv = self.create_service(CustomCalc, 'custom_calc', self.custom_calc_callback)

    # A service callback has request and response parameters
    def custom_calc_callback(self, request, response):
        response.result = request.a + request.b
        self.get_logger().info('Incoming request\na: %d b: %d' % (request.a, request.b))
        return response

def main():
    rclpy.init()
    my_service_server = MyService()
    rclpy.spin(my_service_server)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
```

## service_client.py
```
#!/usr/bin/env python3
import sys

from ros2_tutorials_interfaces.srv import CustomCalc # Import our own custom service

import rclpy
from rclpy.node import Node

class MyServiceClientAsync(Node):
    def __init__(self):
        super().__init__('my_service_client_async')
        # Create a service client
        self.cli = self.create_client(CustomCalc, 'custom_calc')
        # Check if service server is online
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        # Create the service request
        self.req = CustomCalc.Request()

    def send_request(self, a, b):
        self.req.a = a
        self.req.b = b
        # Call the service with the 2 parameters in the request and return result
        return self.cli.call_async(self.req)

def main():
    rclpy.init()
    my_service_client = MyServiceClientAsync()
    future = my_service_client.send_request(int(sys.argv[1]), int(sys.argv[2]))
    # Spin only until response arrives
    rclpy.spin_until_future_complete(my_service_client, future)
    response = future.result()
    my_service_client.get_logger().info(
        'Result of custom_calc: for %d + %d = %d' %
        (int(sys.argv[1]), int(sys.argv[2]), response.result))

    my_service_client.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
```
## template_oop_publisher.py
```
#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from std_msgs.msg import String

class MyPublisherNode(Node):
    def __init__(self):
        super().__init__("python_publisher_with_parameter")
        self.declare_parameter("published_text", "MOGI")        # Add a parameter with a default value
        self.text_ = self.get_parameter("published_text").value # Copy the parameter value into the text_ variable

        self.publisher_ = self.create_publisher(String, 'topic', 10)
        self.timer = self.create_timer(0.5, self.timer_callback)
        self.i = 0
        self.msg = String()
        self.get_logger().info("Publisher OOP has been started.")

    def timer_callback(self):
        self.text_ = self.get_parameter("published_text").value 
        self.msg.data = f"{self.text_}: {self.i}"               # use the text_ variable for the String message
        self.i += 1
        self.get_logger().info(f'Publishing: "{self.msg.data}"')
        self.publisher_.publish(self.msg)

def main(args=None):
    rclpy.init(args=args)
    node = MyPublisherNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main()
```

## setup.py final
```
from setuptools import find_packages, setup

package_name = 'ros2_tutorials_py'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='lenovo',
    maintainer_email='lenovo@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            "publisher_py=ros2_tutorials_py.publisher:main",
            "subscriber_py=ros2_tutorials_py.subscriber:main",
            "template_publisher=ros2_tutorials_py.template_oop_publisher:main",
            "py_service_server=ros2_tutorials_py.service_server:main",
            'py_service_client = ros2_tutorials_py.service_client:main'
        ],
    },
)
```

## package.xml
```
<?xml version="1.0"?>
<?xml-model href="http://download.ros.org/schema/package_format3.xsd" schematypens="http://www.w3.org/2001/XMLSchema"?>
<package format="3">
  <name>ros2_tutorials_py</name>
  <version>0.0.0</version>
  <description>TODO: Package description</description>
  <maintainer email="lenovo@todo.todo">lenovo</maintainer>
  <license>TODO: License declaration</license>

  <test_depend>ament_copyright</test_depend>
  <test_depend>ament_flake8</test_depend>
  <test_depend>ament_pep257</test_depend>
  <test_depend>python3-pytest</test_depend>
  <depend>ros2_tutorials_interfaces</depend>
  <export>
    <build_type>ament_python</build_type>
  </export>
</package>
```

---
# ros2_tutorials_cpp file
```
ros2 pkg create --build-type ament_cmake ros2_tutorials_cpp
```
```
lenovo@lenovo:~/Desktop/mogi_ws/src$ tree -L 3
.
├── ros2_tutorials_bringup
│   ├── CMakeLists.txt
│   ├── launch
│   │   └── publisher_subscriber.launch.py
│   └── package.xml
├── ros2_tutorials_cpp
│   ├── CMakeLists.txt
│   ├── include
│   │   └── ros2_tutorials_cpp
│   ├── package.xml
│   └── src
│       ├── publisher.cpp
│       └── subscriber.cpp
├── ros2_tutorials_interfaces
│   ├── CMakeLists.txt
│   ├── package.xml
│   └── srv
│       └── CustomCalc.srv
└── ros2_tutorials_py
    ├── package.xml
    ├── resource
    │   └── ros2_tutorials_py
    ├── ros2_tutorials_py
    │   ├── __init__.py
    │   ├── publisher.py
    │   ├── service_client.py
    │   ├── service_server.py
    │   ├── subscriber.py
    │   └── template_oop_publisher.py
    ├── setup.cfg
    ├── setup.py
    └── test
        ├── test_copyright.py
        ├── test_flake8.py
        └── test_pep257.py

13 directories, 23 files

```
## publisher.cpp
```
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"

class MyPublisherNode : public rclcpp::Node
{
public:
    MyPublisherNode() : Node("cpp_publisher"), count_(0)
    {
        publisher_ = this->create_publisher<std_msgs::msg::String>("topic", 10);
        timer_     = this->create_wall_timer(std::chrono::milliseconds(500),
                                                std::bind(&MyPublisherNode::publishString, this));
        RCLCPP_INFO(this->get_logger(), "CPP publisher has been started.");
    }

private:
    void publishString()
    {
        auto msg = std_msgs::msg::String();
        msg.data = "Hello, world: " + std::to_string(this->count_++);
        RCLCPP_INFO(this->get_logger(), "Publishing: '%s'", msg.data.c_str());
        publisher_->publish(msg);
    }

    size_t count_;
    rclcpp::Publisher<std_msgs::msg::String>::SharedPtr publisher_;
    rclcpp::TimerBase::SharedPtr timer_;
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<MyPublisherNode>());
    rclcpp::shutdown();
    return 0;
}
```
## subscriber.cpp
```
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"

class MySubscriberNode : public rclcpp::Node
{
public:
    MySubscriberNode() : Node("cpp_subscriber")
    {
        subscriber_ = this->create_subscription<std_msgs::msg::String>(
            "topic", 10, std::bind(&MySubscriberNode::subscriber_callback, this, std::placeholders::_1));
    }

private:
    void subscriber_callback(const std_msgs::msg::String & msg) const
    {
        RCLCPP_INFO(this->get_logger(), "I heard: '%s'", msg.data.c_str());
    }

    rclcpp::Subscription<std_msgs::msg::String>::SharedPtr subscriber_;
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<MySubscriberNode>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
```
## CMakeLists.txt
```
cmake_minimum_required(VERSION 3.8)
project(ros2_tutorials_cpp)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)


add_executable(publisher_cpp src/publisher.cpp)
add_executable(subscriber_cpp src/subscriber.cpp)
ament_target_dependencies(publisher_cpp rclcpp std_msgs)
ament_target_dependencies(subscriber_cpp rclcpp std_msgs)


install(TARGETS
  publisher_cpp
  subscriber_cpp
  DESTINATION lib/${PROJECT_NAME})

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
```
## package.xml
```
<?xml version="1.0"?>
<?xml-model href="http://download.ros.org/schema/package_format3.xsd" schematypens="http://www.w3.org/2001/XMLSchema"?>
<package format="3">
  <name>ros2_tutorials_cpp</name>
  <version>0.0.0</version>
  <description>TODO: Package description</description>
  <maintainer email="lenovo@todo.todo">lenovo</maintainer>
  <license>TODO: License declaration</license>

  <buildtool_depend>ament_cmake</buildtool_depend>

  <test_depend>ament_lint_auto</test_depend>
  <test_depend>ament_lint_common</test_depend>
  <depend>rclcpp</depend>
  <depend>std_msgs</depend>

  <export>
    <build_type>ament_cmake</build_type>
  </export>
</package>
```

----
# ros2_tutorials_bringup file
```
ros2 pkg create ros2_tutorials_bringup (default cmake)
```
```
cd ros2_tutorials_bringup
rm -rf include/ src/
mkdir launch 
cd launch
touch publisher_subscriber.launch.py
```
## publisher_subscriber.launch.py
```
#!/usr/bin/env python3
from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    ld = LaunchDescription()



    cpp_publisher_node=Node(
        package="ros2_tutorials_cpp",
        executable="publisher_cpp",
        name="my_cpp_publisher"
    )


    cpp_subscriber_node=Node(
        package="ros2_tutorials_cpp",
        executable="subscriber_cpp",
        name="my_cpp_subscriber"
    )

    publisher_node = Node(
        package="ros2_tutorials_py",
        executable="publisher_py",
        name="my_publisher_py",
        remappings=[("topic","another_topic")]
    )

    subscriber_node = Node(
        package="ros2_tutorials_py",
        executable="subscriber_py",
        name="my_subscriber_py",
        remappings=[("topic","another_topic")]
    )

    publisher_second_node = Node(
        package="ros2_tutorials_py",
        executable="publisher_py",
        name="my_second_publisher_py"
    )

    subscriber_second_node = Node(
        package="ros2_tutorials_py",
        executable="subscriber_py",
        name="my_second_subscriber"
    )

    with_parameter_node = Node(
        package="ros2_tutorials_py",
        executable="template_publisher",
        name="template_with_parameter",
        parameters=[{"published_text": "from_launch_file"}]
    )



    ld.add_action(with_parameter_node)
    """
    ld.add_action(publisher_second_node)
    ld.add_action(subscriber_second_node)
    ld.add_action(cpp_publisher_node)
    ld.add_action(cpp_subscriber_node)
    ld.add_action(publisher_node)
    ld.add_action(subscriber_node)

    """
    return ld
```
## CMakeLists.txt
```
cmake_minimum_required(VERSION 3.8)
project(ros2_tutorials_bringup)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)

install(DIRECTORY
  launch
  DESTINATION share/${PROJECT_NAME}
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
```
## package.xml (default)
```
<?xml version="1.0"?>
<?xml-model href="http://download.ros.org/schema/package_format3.xsd" schematypens="http://www.w3.org/2001/XMLSchema"?>
<package format="3">
  <name>ros2_tutorials_bringup</name>
  <version>0.0.0</version>
  <description>TODO: Package description</description>
  <maintainer email="lenovo@todo.todo">lenovo</maintainer>
  <license>TODO: License declaration</license>

  <buildtool_depend>ament_cmake</buildtool_depend>

  <test_depend>ament_lint_auto</test_depend>
  <test_depend>ament_lint_common</test_depend>

  <export>
    <build_type>ament_cmake</build_type>
  </export>
</package>
```

---
# ros2_tutorials_interfaces file
```

ros2 pkg create build-type ament_cmake ros2_tutorials_interfaces
cd ros2_tutorials_interfaces
rm -rf include/ src/
mkdir srv
cd srv 
touch CustomCalc.srv
```
## CustomCalc.srv
```
int64 a
int64 b
---
int64 result
```

## CMakeListst.txt
```
cmake_minimum_required(VERSION 3.8)
project(ros2_tutorials_interfaces)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)
find_package(rosidl_default_generators REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
  "srv/CustomCalc.srv"
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
```
## package.xml
```
<?xml version="1.0"?>
<?xml-model href="http://download.ros.org/schema/package_format3.xsd" schematypens="http://www.w3.org/2001/XMLSchema"?>
<package format="3">
  <name>ros2_tutorials_interfaces</name>
  <version>0.0.0</version>
  <description>TODO: Package description</description>
  <maintainer email="lenovo@todo.todo">lenovo</maintainer>
  <license>TODO: License declaration</license>

  <buildtool_depend>ament_cmake</buildtool_depend>
  <buildtool_depend>rosidl_default_generators</buildtool_depend>
  <exec_depend>rosidl_default_runtime</exec_depend>
  <member_of_group>rosidl_interface_packages</member_of_group>

  <test_depend>ament_lint_auto</test_depend>
  <test_depend>ament_lint_common</test_depend>

  

  <export>
    <build_type>ament_cmake</build_type>
  </export>
</package>
```


---

* # Notes


C++ codes are weird; they run but still show a "file missing" error in VSC.

After creating a new package, you have to colcon build or colcon build --packages-select packagename.

Always run colcon build below the workspace.
Add the package under the src folder.

Add source install/setup.bash to ~/.bashrc.

If autocomplete does not work, check these:

    Wrong code
    Wrong text formatting
    Or run source install/setup.bash in the workspace

To remove a folder:
rm -rf /selected_folder

ROS2 commands:

    ros2 param [list, get, set]
    ros2 node list
    ros2 topic list

If the changed parameter is only in the constructor function, it will not show changes. We have to add a timer_callback function.
