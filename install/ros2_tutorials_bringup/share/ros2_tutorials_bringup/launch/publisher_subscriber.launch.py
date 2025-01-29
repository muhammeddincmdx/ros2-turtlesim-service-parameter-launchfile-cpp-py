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