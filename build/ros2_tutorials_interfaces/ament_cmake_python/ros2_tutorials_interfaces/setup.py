from setuptools import find_packages
from setuptools import setup

setup(
    name='ros2_tutorials_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('ros2_tutorials_interfaces', 'ros2_tutorials_interfaces.*')),
)
