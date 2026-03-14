from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription
from launch.substitutions import PathJoinSubstitution, TextSubstitution
from launch_ros.substitutions import FindPackageShare

def generate_launch_description():
    colors = {
        'background_r': '200'
    }

    return LaunchDescription([
        IncludeLaunchDescription(
            PathJoinSubstitution([ # PathJoinSubstitution([]): [] 안의 경로들을 결합하여 share에 복제된 패키지의 launch 파일의 경로를 반환
                FindPackageShare('substitutions_py'), # ()안의 패키지를 공유 디렉토리(colcon build 후 생기는 share 폴더)의 경로에서 찾아 반환
                'launch',
                'substitutions_launch.py'
            ]),
            launch_arguments={ # IncludeLaunchDescription에 전달한 argument를 정의. 정의된 argument는 다른 launch 파일에 전달되어 동적으로 포함 실행됨
                'turtlesim_ns': 'turtlesim2',  # key: value 형태
                'use_provided_red': 'True',
                'new_background_r': TextSubstitution(text='200'), # TextSubstitution(): text 값을 동적으로 설정 가능
            }.items()
        )
    ])