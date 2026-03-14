from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, ExecuteProcess, TimerAction
from launch.conditions import IfCondition
from launch.substitutions import LaunchConfiguration, PythonExpression
from launch_ros.actions import Node


def generate_launch_description():

    turtlesim_ns = LaunchConfiguration('turtlesim_ns')  # LaunchConfiguration: launch 실행 시 전달된 인자값을 참조
    use_provided_red = LaunchConfiguration('use_provided_red')
    new_background_r = LaunchConfiguration('new_background_r')

    turtlesim_ns_launch_arg = DeclareLaunchArgument(   # launch에서 사용할 설정값을 정의한다. 정의된 argument는 launch 실행 시 외부에서 전달 가능
        'turtlesim_ns',
        default_value='turtlesim1'
    )

    use_provided_red_launch_arg = DeclareLaunchArgument(
        'use_provided_red',
        default_value='True'
    )

    new_background_r_launch_arg = DeclareLaunchArgument(
        'new_background_r',
        default_value='200'
    )

    turtlesim_node = Node(
        package='turtlesim',
        namespace=turtlesim_ns,  # launch argument로 전달된 네임스페이스 사용(/turtlesim1/sim)
        executable='turtlesim_node',
        name='sim'
    )

    spawn_turtle_late = TimerAction(  # TimerAction(): period= -> launch 실행 후 period 초가 지난 뒤에 actions를 실행하는 Action
        period=0.5,  
        actions=[
            ExecuteProcess(
                cmd=[
                    'ros2', 'service', 'call', 
                    PythonExpression(["'", turtlesim_ns, "/spawn'"]), # turtlesim_ns는 Sbustitution 객체이다. 문자열로 직접 더할 수 없기 때문에 PythonExpression 사용
                    'turtlesim/srv/Spawn',                            # ros2 service call turtlesim1/spawn  turtlesim/srv/Spawn "{x: 2, y: 2, theta: 0.2}"
                    '{x: 2, y: 2, theta: 0.2}'
                ]
            )
        ]
    )

    change_background_late = TimerAction(
        period=1.0,
        actions=[
            ExecuteProcess(
                condition=IfCondition(
                    PythonExpression([
                        use_provided_red,
                        ' == True'
                    ])
                ),
                cmd=[
                    'ros2', 'param', 'set',
                    PythonExpression(['"', turtlesim_ns, '/sim"']),
                    'background_r',
                    new_background_r
                ]
            )
        ]
    )

    return LaunchDescription([
        turtlesim_ns_launch_arg,
        use_provided_red_launch_arg,
        new_background_r_launch_arg,

        turtlesim_node,
        spawn_turtle_late,
        change_background_late,
    ])