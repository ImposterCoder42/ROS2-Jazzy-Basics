from setuptools import find_packages, setup

package_name = 'timed_led'

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
    maintainer='optimus',
    maintainer_email='optimus@todo.todo',
    description='TODO: Package description',
    license='Apache-2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'led_timer = timed_led.publisher_timed_led:main',
            'timed_led = timed_led.subscriber_timed_led:main',
            'server_led_tracker = timed_led.service_led_tracker:main',
            'client_led_tracker = timed_led.client_led_tracker:main',
            'led_action_server = timed_led.led_action_server:main',
            'led_action_client = timed_led.led_action_client:main',
            'ps4_controller = timed_led.ps4_controller:main',
        ],
    },
)
