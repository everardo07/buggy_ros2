# Buggy Project

This repository states a developed project in ROS2 using Foxy and Ubuntu 20 which uses different sensors to carry out specific tasks. These tasks are mapping, object detection and navigation. 

# Requirements

- [UBUNTU 20.04](https://releases.ubuntu.com/focal/)
- [Foxy](https://docs.ros.org/en/foxy/Installation/Ubuntu-Install-Debians.html)
- Python v3
- GAZEBO
- Specific packages from ROS 2:
   - Joint State Publisher
   - SLAM Toolbox
   - Nav2
   - TEB local planner
 
 For installing the packages you must go directly to the root of your workspace and copy the next commands
 
```bash
 sudo apt install ros-foxy-gazebo-ros-pkgs
 sudo apt install ros-foxy-joint-state-publisher-gui
 sudo apt install ros-foxy-xacro
 sudo apt install ros-foxy-slam-toolbox
 sudo apt install ros-foxy-navigation2
 sudo apt install ros-foxy-nav2-bringup
```
Some packages are installed from source in your folder (work_space_name)\src and do not forget install the dependencies.
```bash
 $ cd <colcon_workspace>/src # Access the source folder of your colcon workspace
 $ git clone -b foxy-devel https://github.com/rst-tu-dortmund/teb_local_planner.git
 $ cd ..
 $ sudo rosdep init
 $ rosdep update
 $ rosdep install --from-paths src -y --ignore-src
```
To use the real sensors, some drivers have to be installed. In this project a sick Lidar, a zed2 camera and a velodyne Lidar are used. For this reason the next packages must be installed. These packages are installed also in the src folder.

### ZED2 camera
```bash
$ cd <colcon_workspace>/src # Access the source folder of your colcon workspace
$ git clone https://github.com/ros-perception/image_common.git --branch 3.0.0 --single-branch # clone the "v3.0.0" branch of the "image_common" repository
$ git clone  --recursive https://github.com/stereolabs/zed-ros2-wrapper.git
$ cd ..
$ rosdep install --from-paths src --ignore-src -r -y
$ colcon build --symlink-install --cmake-args=-DCMAKE_BUILD_TYPE=Release
```
### Sick Lidar

To install the driver for the sick LiDAR click on the next link and follow the instruccions for building on ROS 2.

https://github.com/SICKAG/sick_scan_xd

### Velodyne LiDAR

```bash
 $ cd <colcon_workspace>/src # Access the source folder of your colcon workspace
 $ git clone -b foxy-devel https://github.com/ros-drivers/velodyne.git
 $ cd ..
 $ sudo rosdep init
 $ rosdep update
 $ rosdep install --from-paths src -y --ignore-src
```



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
Using these measurements, the model of the buggy is made with the Universal Robot Description Format (URDF), the standard ROS format for robot modeling. The body of the buggy is integrated of links and joints. Links are the chassis, wheels, sensors, frame and joints connects the links together. To visualise the model, RVIZ is a good tool which offers different options to track different parameters. The next picture shows the buggy in RVIZ.

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

As a SDF file is used to define what a robot looks like, a SDF file to define the robot's environment is necessary for testing the algorithms. The scenario is a copy of the Eupen race track.

<img src="fotosbuggy/enviroment_buggy.png" width="900"> 

### Mapping
For mapping, the slam_toolbox package from ROS2 is used. Using the concept of Simultaneous and Localization Mapping (SLAM) is possible to create a map. However the node in ROS2 requires some input topics; these are /odom and /scan. To get the odometry of the buggy two propioceptive sensors, the enconders of the wheels and the Inertial Measurement Unit (IMU), are taken in consideration. A LiDAR sensor is implemented to obtain the data to be published on the topic /scan.

```bash
ros2 launch buggy_mobile_robot buggy_simulated_mapping.launch.py
```

https://user-images.githubusercontent.com/87071682/216587941-19e39ae6-57ef-4fb9-96a7-67c3ef838401.mp4


### Object detection

In this section, the concept of convolution neural networks is applied. YOLOV3 is a CNN which integrates several layers to classify different kind of objects, therefore the selection of YOLOV3 was made in order to detect a varity of objects (pediastrans, cars, traffic lights, signs, etc). 

```bash
ros2 launch darknet_ros darknet_ros.launch.py
```

<img src="fotosbuggy/busdetection.png" width="700"> 

### Navigation

The use of Nav 2 in combination with Time Elastic Band(TEB) planner for navigation and control of the buggy.

```bash
ros2 launch buggy_mobile_navigation buggy_simulated_navigation.launch.py
```


https://user-images.githubusercontent.com/87071682/216848389-3886b2d0-69dc-4510-b8ec-173a085394bb.mp4


<img src="fotosbuggy/buggy_simulation_navigation_1.png" width="700"> 
<img src="fotosbuggy/buggy_simulation_navigation_2.png" width="700"> 
