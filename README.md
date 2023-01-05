# Buggy Project

This repository states a developed project in ROS2 using Foxy and Ubuntu 20 which uses different sensors to carry out specific tasks. These tasks are mapping, object detection and navigation. 

# Requirements

- UBUNTU 20
- Foxy version
- python v3
- GAZEBO
- Specific packages from ROS 2:
   - Joint State Publisher
   - Robot State Publisher
   - SLAM Toolbox
   - Nav2
   - TEB local planner

# Content
The project is divided in two stages:
- Simulated stage
- Real stage

Each stage carry out the same functionalities:
- [Mapping](#Mapping)
- [Object detection](#Object-detection)
- [Navigation](#Navigation)


## Simulated Stage

The simulation stage contains a simulated model of the real buggy. Is it importante to consider the measurements of each joint and the location of each sensor. The next picture shows the measured distances taken from the real one. 

<img src="fotosbuggy/distances.png" width="900"> 

### MODEL AND ENVIRONMENT
Using these measurements, the model of the buggy is made with the Universal Robot Description Format (URDF), the standard ROS format for robot modeling. The body of the buggy is integrated of links and joints. Links are the chassis, wheels, sensors, frame and joints connects the links together. To visualise the model, RVIZ is a good tool which offers different options the track different parameters. The next picture shows the buggy in RVIZ.

Launch:

```bash
ros2 launch buggy_mobile_robot buggy_simulated_description.launch.py
```
<img src="fotosbuggy/buggy_description.png" width="900"> 

To place the buggy in a simulated enviroment, using GAZEBO, it is fundamental to create a Simulated Description Format (SDF) file. This file should be similar to the URDF. In the SDF file is possible to add the plugins of the sensors (camera, IMU, LiDAR).

Launch:

```bash
ros2 launch buggy_mobile_robot buggy_simulated_gazebo.launch.py
```
<img src="fotosbuggy/buggy_gazebo.png" width="800"> 

As a SDF file is used to define what a robot looks like, a SDF file to define the robot's environment is necessary to test the algorithms. The scenario is a copy of the Eupen race track.

<img src="fotosbuggy/enviroment_buggy.png" width="900"> 

### Mapping
For mapping, the slam_toolbox package from ROS2 is used. Using the concept of Simultaneous and Localization Mapping (SLAM) is possible to create a map. However the node in ROS2 requires some input topics; these are /odom and /scan. To get the odometry of the buggy two propioceptive sensors, the enconders of the wheels and the Inertial Measurement Unit (IMU), are taken in consideration. A LiDAR sensor is implemented to obtain the data to be published on the topic /scan.


```bash
ros2 launch buggy_mobile_robot buggy_simulated_mapping.launch.py
```

<img src="fotosbuggy/mapping_rviz_simulated.png" width="700"> 


### Object detection

### Navigation

The use of Nav 2 in combination with Time Elastic Band(TEB) planner for navigation and control of the buggy.

<img src="fotosbuggy/buggy_simulation_navigation_1.png" width="700"> 
<img src="fotosbuggy/buggy_simulation_navigation_2.png" width="700"> 