/**
* @file preprocess.cpp
* @authors Phase 1 - Vasista Ayyagari (Driver), Vishnuu Appaya Dhanabalan (Navigator)
* @brief This file has all function definitions for Preprocessor class
* @copyright Vasista Ayyagari, Vishnuu Appaya Dhanabalan, 2020
*/
#include <bits/stdc++.h>
#include "opencv2/opencv.hpp"
#include "preprocess.hpp"

using namespace vision;

/**
* @brief applies various prprocessing steps to raw images to condition them for detection
* and tracking. This includes resizing, gaussian blur, 
* @param size - The final size of the preprocessed image
* @param blurKernel - Kernel size for gaussian blur
* @param inImg - the pointer to the image that needs to be processed
* @param inImg - the output pointer to the image where the final processed image is written
* @return None
*/
void Preprocessor::preprocess
(
	pair<int, int> size, int blurKernel, cv::Mat& inImg, cv::Mat& outImg
) {
	return;	
}