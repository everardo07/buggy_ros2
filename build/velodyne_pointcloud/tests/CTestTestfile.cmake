# CMake generated Testfile for 
# Source directory: /home/manuel/buggy_ws_beta.a/src/velodyne/velodyne_pointcloud/tests
# Build directory: /home/manuel/buggy_ws_beta.a/build/velodyne_pointcloud/tests
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(test_row_step "/usr/bin/python3" "-u" "/opt/ros/foxy/share/ament_cmake_test/cmake/run_test.py" "/home/manuel/buggy_ws_beta.a/build/velodyne_pointcloud/test_results/velodyne_pointcloud/test_row_step.gtest.xml" "--package-name" "velodyne_pointcloud" "--output-file" "/home/manuel/buggy_ws_beta.a/build/velodyne_pointcloud/ament_cmake_gtest/test_row_step.txt" "--command" "/home/manuel/buggy_ws_beta.a/build/velodyne_pointcloud/tests/test_row_step" "--gtest_output=xml:/home/manuel/buggy_ws_beta.a/build/velodyne_pointcloud/test_results/velodyne_pointcloud/test_row_step.gtest.xml")
set_tests_properties(test_row_step PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/manuel/buggy_ws_beta.a/build/velodyne_pointcloud/tests/test_row_step" TIMEOUT "60" WORKING_DIRECTORY "/home/manuel/buggy_ws_beta.a/build/velodyne_pointcloud/tests" _BACKTRACE_TRIPLES "/opt/ros/foxy/share/ament_cmake_test/cmake/ament_add_test.cmake;118;add_test;/opt/ros/foxy/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;86;ament_add_test;/opt/ros/foxy/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/home/manuel/buggy_ws_beta.a/src/velodyne/velodyne_pointcloud/tests/CMakeLists.txt;4;ament_add_gtest;/home/manuel/buggy_ws_beta.a/src/velodyne/velodyne_pointcloud/tests/CMakeLists.txt;0;")
subdirs("../gtest")
