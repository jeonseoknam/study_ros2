#! /bin/bash
source /opt/ros/humble/setup.bash

terminator -u -x bash -c "source /opt/ros/humble/setup.bash; 
ros2 run turtlesim turtlesim_node" & sleep 1
terminator -u -x bash -c "source /opt/ros/humble/setup.bash; 
ros2 run turtlesim turtle_teleop_key"


