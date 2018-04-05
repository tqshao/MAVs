#!/bin/bash

case_file_path=`rosparam get /case_params_path`
num_of_obstacles=`rosparam get /case/actual/obstacle/num`
for ((idx=0; idx<$num_of_obstacles; idx++))
do
roslaunch vehicle_description obstacles.launch case_params_file:=/home/sumit/Documents/workspace/MAVs/ros/src/system/config/case/case1.yaml obstacle_idx:=$idx
done
