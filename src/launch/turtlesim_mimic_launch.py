from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description(): # launch할 노드들 등록
    return LaunchDescription([
        Node(
            package='turtlesim',   
            namespace='turtlesim1',
            executable='turtlesim_node',
            name='sim',  # sim이라는 이름으로 turtlesim_node 실행
            arguments=['--ros-args', '--log-level', 'info']
        ),

        Node(
            package='turtlesim',
            namespace='turtlesim2',
            executable='turtlesim_node',
            name='sim',  # 위에랑 같은 sim이라는 이름이지만, namespace가 달라서 구분된다.
            arguments=['--log-level', 'warn']
        ),
        Node(
            package='turtlesim',
            executable='mimic',  # turtlesim1를 turtlesim2 노드가 따라하게 만드는 mimic 노드
            name='mimic',
            remappings=[
                ('/input/pose', '/turtlesim1/turtle1/pose'),  # input을 turtlesim1의 pose로,
                ('/output/cmd_vel', '/turtlesim2/turtle1/cmd_vel'),  # output을 turtlesim2의 pose로 해주기 위한 리맵핑
                # 노드가 사용하는 이름을 바꾼것 뿐이다.
            ]
        )
    ])
