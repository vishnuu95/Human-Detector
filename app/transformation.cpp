/**
* @file transformation.cpp
* @authors Phase 1 - Vasista Ayyagari (Driver), Vishnuu Appaya Dhanabalan (Navigator)
* @brief This file has all function definitions for Transformation class
* @copyright Vasista Ayyagari, Vishnuu Appaya Dhanabalan, 2020
*/
#include <bits/stdc++.h>
#include <Eigen/Dense>
#include "transformation.hpp"

using namespace vision;

/**
* @brief A constructor function for the Transformation class
* @param None
* @return None
*/
Transformation::Transformation() {

}

/**
* @brief A destructor function for the Transformation class
* @param None
* @return None
*/
Transformation::~Transformation() {

}

/**
* @brief assigns the Transformation matrix from the camera frame to the robot frame
* @param transMat - the transformation matrix from the camera frame to the robot frame
* @return None
*/
void Transformation::setTransform(Eigen::Matrix4f transMat) {
	return;
}

/**
* @brief return the Transformation matrix from the camera frame to the robot frame
* @param None
* @return transMat - the transformation matrix from the camera frame to the robot frame
*/
Eigen::Matrix4f Transformation::getTransform() {
	Eigen::Matrix4f transformationMat;
	return transformationMat;
}

/**
* @brief Transforms a 3D coordinate in the camera frame to the robot frame
* @param camCord - 3D coordinate in the camera frame
* @return newCords - New cordinates in the robot frame
*/
Eigen::Vector4f Transformation::transformToRoboFrame(Eigen::Vector4f camCord) {
	Eigen::Vector4f newCords;
	return newCords;
}