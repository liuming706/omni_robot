from setuptools import find_packages
from setuptools import setup

setup(
    name='uline_patrol_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('uline_patrol_msgs', 'uline_patrol_msgs.*')),
)
