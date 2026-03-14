from setuptools import find_packages, setup
import os  # 추가
from glob import glob #추가 

package_name = 'launch_py'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name, 'launch'), glob(os.path.join('launch', '*launch.[pxy][yma]*')))
        # os.path.join(~): 설치될 경로를 만드는 부분, /share/패키지명/launch가 반환
        # glob(~) 복사할 파일을 찾는 부분. /launch/*launch.[pxy][yam] 조건을 통해 .py, .xml, .yaml 등을 찾는다
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='misys',
    maintainer_email='j20nsuknam@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
        ],
    },
)
