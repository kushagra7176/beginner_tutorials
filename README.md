## Software Development for Robotics (ENPM 808X) ROS Exercise

## Overview of the Project

Followed the following tutorials:

1. http://wiki.ros.org/ROS/Tutorials/Getting%20started%20with%20roswtf (Links to an external site.)

2. http://wiki.ros.org/ROS/Tutorials/UnderstandingServicesParams (Links to an external site.)

3. http://wiki.ros.org/ROS/Tutorials/UsingRqtconsoleRoslaunch

## Dependencies

1. ROS Melodic
2. Catkin
3. Ubuntu 18.04 LTS

## Standard Install Via Command Line
```
cd ~/catkin_ws/src
git clone --recursive https://github.com/kushagra7176/beginner_tutorials.git
cd ~/catkin_ws
source ./devel/setup.bash
catkin_make
```
Open a new terminal and run the commands given below:

Open terminal 1 and run:
```
  cd ~/catkin_ws
  source ./devel/setup.bash
  roscore
```
Open terminal 2 and run:
```
  cd ~/catkin_ws
  source ./devel/setup.bash
  roslaunch beginner_tutorials talkerlistener.launch frequency:=1
```  
Open terminal 3 and to use default frequency run:
```
  cd ~/catkin_ws
  source ./devel/setup.bash
  roslaunch beginner_tutorials talkerlistener.launch
```  
Open a new terminal and run following to change the message via command line:
```
rosservice call /ModifyString "Kushagra Agrawal"
```
To stop the program press Ctrl + c in each terminal
