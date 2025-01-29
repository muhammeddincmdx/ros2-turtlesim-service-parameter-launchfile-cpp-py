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
