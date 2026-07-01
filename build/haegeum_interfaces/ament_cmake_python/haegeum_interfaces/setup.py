from setuptools import find_packages
from setuptools import setup

setup(
    name='haegeum_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('haegeum_interfaces', 'haegeum_interfaces.*')),
)
