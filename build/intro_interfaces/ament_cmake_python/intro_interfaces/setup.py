from setuptools import find_packages
from setuptools import setup

setup(
    name='intro_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('intro_interfaces', 'intro_interfaces.*')),
)
