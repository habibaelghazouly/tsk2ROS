from setuptools import find_packages
from setuptools import setup

setup(
    name='weather_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('weather_interfaces', 'weather_interfaces.*')),
)
