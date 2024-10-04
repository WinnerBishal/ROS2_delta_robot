from setuptools import find_packages, setup

package_name = 'delta_vision'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (f'share/{package_name}/resource', ['resource/best.pt']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='winner_bishal',
    maintainer_email='winner_bishal@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'camera_publisher = delta_vision.camera_publisher:main',
            'camera_subscriber = delta_vision.camera_subscriber:main',
            'object_tracker = delta_vision.object_tracker:main'
        ],
    },
)
