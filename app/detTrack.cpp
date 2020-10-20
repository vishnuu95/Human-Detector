/**
* @file detTrack.cpp
* @authors Phase 1 - Vasista Ayyagari (Driver), Vishnuu Appaya Dhanabalan (Navigator)
* @brief This file has all function definitions for DetTrack class
* @copyright Vasista Ayyagari, Vishnuu Appaya Dhanabalan, 2020
*/
/**
 *  @file    detTrack.cpp
 *  @author  Vasista (clueless-bachu)
 *  @author  Vishnuu (vishnuu95)
 *  @brief This file has all function definitions for DetTrack class
 *	@copyright MIT License (c) 2020 Vasista and Vishnuu.
 */
#include <bits/stdc++.h>
#include "opencv2/opencv.hpp"
#include <opencv2/tracking/tracker.hpp>
#include "detTrack.hpp"

using namespace std;
using namespace vision;

/**
* @brief A constructor function for the DetTrack class
* @param modelPath:string - path to the DNN model file
* @return None
*/
DetTrack::DetTrack(string modelPath) {

}

/**
* @brief A destructor function for the DetTrack class
* @param None
* @return None
*/
DetTrack::~DetTrack() {

}

/**
* @brief checks if new humans have entered the scene and assigns each new human a tracker
* @param bbDet - Bounding boxes obtained by running detection using YOLO
* @param bbDet - Bounding boxes obtained from the MultiTracker on the new frame
* @return None
*/
void DetTrack::addTrackers(vector<vector<int>> bbDet, vector<vector<int>> bbTrack) {
	return;
}

/**
* @brief runs rYOLO on a processed input image and detects all the humans
* @param inImg - input image which needs to have th humans detected
* @return None
*/
vector<vector<int>> DetTrack::detectHumans(cv::Mat* inImg) {
	vector<vector<int>> bbs;
	return bbs;
}

/**
* @brief detects all humans using YOLO and tracks them using the MultiTracker
* @param inImg - input image which needs to have th humans detected and tracked
* @return None
*/
vector<vector<int>> DetTrack::trackHumans(cv::Mat* inImg) {

}