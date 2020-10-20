/**
* @file depthEstimator.cpp
* @authors Phase 1 - Vasista Ayyagari (Driver), Vishnuu Appaya Dhanabalan (Navigator)
* @brief This file has all function definitions for DepthEstimator class
* @copyright Vasista Ayyagari, Vishnuu Appaya Dhanabalan, 2020
*/
#include <bits/stdc++.h>
#include "depthEstimator.hpp"

using namespace vision;
using namespace std;

/**
* @brief A constructor function for the DepthEstimator class
* @param None
* @return None
*/
DepthEstimator::DepthEstimator() {

}

/**
* @brief A destructor function for the DepthEstimator class
* @param None
* @return None
*/
DepthEstimator::~DepthEstimator() {
	
}

/**
* @brief Estimates the depths for a set of humans represented by a vector of bounding boxes
* @param bbs - a vector of bounding boxes where each bounding box is a vector of int 
* representing a human
* @return depths - a vector of doubles representing the depth values of each bounding box
*/
vector<double> DepthEstimator::estimateDepth(vector<vector<int>> bbs) {
	vector<double> depths;
	return depths;
}

/**
* @brief takes image cordinates of each human and computes the 3D cordinates of the human
* in camera coordinate system
* @param bbs - a vector of bounding boxes where each bounding box is a vector of int 
* representing a human
* @return depths - a vector of cordinates representing the x,y,z values with
* respect to the camera coordinate frame
*/
vector<vector<double>> DepthEstimator::transform2dTo3d(vector<vector<int>> bbs) {
	vector<vector<double>> cords3d;
	return cords3d;
}