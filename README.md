# study_ros2

# index
**custom_message**
- ROS2에서 custom message를 만들고 사용하는 예제

**launch**
- ROS2의 launch 파일에 대한 예제
- .py, .yaml, .xml 런치파일 사용 가능
- 뿐만 아니라 쉘 스크립트(.sh) 방식으로도 런치 파일 생성이 가능하다.

**cpp_parameters**
- ROS2의 파라미터에 대한 예제 

**cpp_pubsub**
- ROS2 Humble 공식 튜토리얼의 publisher / subscriber 및 custom interface(msg, srv) 기본 예제 (cpp_pubsub, tutorial_interfaces, more_interfaces)

**point_display**
- RViz 커스텀 display 플러그인(point_display, upstream: MetroRobots/rviz_plugin_tutorial) 및 visualization_msgs Marker 예제(box_maker)

**bag_recorder_nodes**
- simple_bag_recorder.cpp: "chatter" 토픽을 구독해서 "my_bag"이라는 rosbag 파일로 저장하는 코드
- data_generator_node.cpp: 타이머 콜백을 이용해서 1초마다 증가하는 정수를 생성하고 rosbag 녹화하는 코드
- data_generator_executable.cpp: 0부터 99까지 증가하는 정수 메시지 100개를 생성하고, 각 메시지의 타임스탬프를 1초씩 증가시키면서 rosbag에 저장하는 코드
   - 콜백은 어디서 사용되느냐에 따라 여러 종류가 있다
   1. Timer Callback: 설정한 시간이 지날 때마다 실행 (시간 기반)
   2. Subscription Callback: 메시지가 도착할 때마다 실행 (이벤트 기반)
   3. Service Callback: 서비스 요청이 들어왔을 때 실행 (이벤트 기반)

**bag_reading_cpp**
- simple_bag_reader.cpp: 이미 존재하는 ros bag 파일에서 /turtle1/pose 토픽을 읽어서 터미널에 (x, y)를 출력하는 코드