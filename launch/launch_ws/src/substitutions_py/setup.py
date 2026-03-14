from setuptools import find_packages, setup
import os  # 추가
from glob import glob #추가


package_name = 'substitutions_py'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        # launch 파일을 패키지 설치 경로에 같이 복사해 넣기 위해 os.path.join(~), glob(~) 작성
        # os.path.join(): 어디에 설치할지 / glob(): 무슨 파일들을 설치할지
        # os.path.join을 안 쓰고 직접 문자열로 'share/' + package_name + '/launch'로 써도 동작하지만,
        # 경로 구분자를 더 안전하게 처리하기 위해 os.path.join을 쓰면 파이썬이 운영체제별 차이까지도 알아서 처리해준다.
        # 아래 문장이 없으면 launch 폴더 안의 파일들이 설치되지 않아서 패키지는 찾아도 launch 파일은 찾지 못한다
        (os.path.join('share', package_name, 'launch'), glob(os.path.join('launch', '*launch.[pxy][yma]*')))
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
