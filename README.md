## Software Development for Robotics (ENPM 808X) ROS Exercise

## Overview of the Project

Followed the following tutorials:

1. http://wiki.ros.org/rostest/Writing (Links to an external site.)

2. http://wiki.ros.org/gtest (Links to an external site.)

3. http://wiki.ros.org/ROS/Tutorials/Recording%20and%20playing%20back%20data (Links to an external site.)

4. http://wiki.ros.org/tf/Tutorials/Introduction%20to%20tf (Links to an external site.)

5. http://wiki.ros.org/tf/Tutorials/Writing%20a%20tf%20broadcaster%20%28C%2B%2B%29 (Links to an external site.)

6. http://wiki.ros.org/tf/Tutorials/Writing%20a%20tf%20listener%20%28C%2B%2B%29 (Links to an external site.)

7. http://wiki.ros.org/tf/Tutorials/Adding%20a%20frame%20%28C%2B%2B%29 (Links to an external site.)

8. http://wiki.ros.org/tf/Tutorials/tf%20and%20Time%20%28C%2B%2B%29 (Links to an external site.)

9. http://wiki.ros.org/tf/Tutorials/Time%20travel%20with%20tf%20%28C%2B%2B%29
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
cd catkin_ws
source ./devel/setup.bash
rosservice call /ModifyString "Kushagra Agrawal"
```
## Inspecting TF frames
```
cd ~/catkin_ws
source ./devel/setup.bash
rosrun rqt_tf_tree rqt_tf_tree
```
To inspect the values run the following command
```
cd ~/catkin_ws
source ./devel/setup.bash
rosrun tf tf_echo /world /talk
```
To view the frames while running the demo run the following command
```
cd ~/catkin_ws
source ./devel/setup.bash
rosrun tf view_frames
```

### How to run ROS unit test
 Open a new terminal and run the following command:
```
cd ~/catkin_ws
source ./devel/setup.bash
rostest beginner_tutorials talkerNodeTest.launch
```

## How to record bag files
```
cd ~/catkin_ws
source ./devel/setup.bash
roslaunch beginner_tutorials talkerlistener.launch StartRecording:=true
```

## How to play bag files

Open a new terminal and run:
```
roscore
```
Open a new terminal and run:
```
cd ~/catkin_ws
source ./devel/setup.bash
rosrun beginner_tutorials listener
```
Open a new terminal and run:
```
cd ~/catkin_ws/src/beginner_tutorials/Results
rosbag play beginner_tutorials.bag
```
To stop the program press Ctrl + c in each terminal
