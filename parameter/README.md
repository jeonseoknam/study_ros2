**Parameter**
- 노드의 설정값을 의미
- 정수, float, boolean, 문자, list 등의 형태로 존재


**shell command**
- ros2 param list: 현재 실행 중인 노드들의 파라미터 목록을 출력
- ros2 param get /turtlesim background_r: <노드명> <파라미터명> 정보를 출력
- ros2 param dump /turtlesim: Node의 모든 파라미터 정보 출력
- ros2 param dump /turtlesim > ./turtlesim.yaml: Node의 모든 파라미터 정보를 .yaml 파일에 저장
- ros2 param load /turtlesim turtlesim.yaml: 파라미터 관련 로그 확인
- ros2 run turtlesim turtlesim_node --ros-args --params-file turtlesim.yaml: .yaml 파라미터로 노드 실행


**동적 파라미터 제어**
- 실행 중인 노드를 종료하지 않고 파라미터 값을 변경하여 노드 동작을 바꾸는 것
- ros2 param set 명령어 사용
- ros2 param set <node_name> <parameter_name> <value>
