from setuptools import find_packages
from setuptools import setup

setup(
    name='delta_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('delta_interfaces', 'delta_interfaces.*')),
)
