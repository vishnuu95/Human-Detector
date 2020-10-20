/**
* @file robot.cpp
* @authors Phase 1 - Vasista Ayyagari (Driver), Vishnuu Appaya Dhanabalan (Navigator)
* @brief This file has all function definitions for Robot class
* @copyright Vasista Ayyagari, Vishnuu Appaya Dhanabalan, 2020
*/
#include <bits/stdc++.h>
#include "opencv2/opencv.hpp"
#include <opencv2/tracking/tracker.hpp>
#include <Eigen/Dense>
#include "robot.hpp"

using namespace robot;

/**
* @brief A constructor function for the Transformation class
* @param modelPath:string - path to the config file
* @return None
*/
Robot::Robot(string cfgPath) {

}

/**
* @brief A destructor function for the Robot class
* @param None
* @return None
*/
Robot::~Robot() {

}

/**
* @brief this reads from the video/image, detect all humans using YOLO and tracks them using 
* a MultiTracker. Then it draws the bounding boxes and writes the 3D cordinates onto the 
* image, displays and saves it in the output file
* @param modelPath:string - path to the DNN model file
* @return None
*/
void Robot::processData() {
	return;
}