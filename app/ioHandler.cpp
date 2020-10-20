/**
 *  @file    ioHandler.cpp
 *  @author  Vasista (clueless-bachu)
 *  @author  Vishnuu (vishnuu95)
 *  @brief This file has all function definitions for IOHandler class
 *	@copyright MIT License (c) 2020 Vasista and Vishnuu.
 */
#include "opencv2/opencv.hpp"
#include <opencv2/tracking/tracker.hpp>
#include "ioHandler.hpp"

using namespace vision;

/**
* @brief A constructor function for the IOHandler class
* @param None
* @return None
*/
IOHandler::IOHandler() {

}

/**
* @brief A destructor function for the IOHandler class
* @param None
* @return None
*/
IOHandler::~IOHandler() {

}

/**
* @brief parses the config file and assigns all its attributes to the appropriate value
* @param cfgPath - A path to the cfg file 
* @return None
*/
void IOHandler::argParse(string cfgPath) {
	return;
}

/**
* @brief returns the input type: either image or video
* @param None
* @return a boolean, if true then type is image, if false then type is video
*/
bool IOHandler::getInputType() {
	return false;
}

/**
* @brief returns condition to visualize data or not
* @param cfgPath - A path to the cfg file 
* @return None
*/
bool IOHandler::isVisualize() {
	return false;
}

/**
* @brief returns the input image/video path
* @param None
* @return path - path to the data file
*/
string IOHandler::getInFilePath() {
	string path = "";
	return path;
}

/**
* @brief returns the image/video path where the output data should be stored
* @param None
* @return path - path to the data file
*/
string IOHandler::getOutFilePath() {
	string path = "";
	return path;
}

/**
* @brief draws the bounding boxes over an image
* @param bb - a set of bounding boxes that needs to be drawn
* @param frame - the image on which the bounding boxes need to be drawn on
* @return None
*/
void IOHandler::drawBb(vector<vector<int>> bb, cv::Mat frame) {
	return;
}

/**
* @brief adds frame to the video writer
* @param frame - the image which needs to be appended to the video
* @return None
*/
void IOHandler::addFrame(cv::Mat frame) {
	return;
}

/**
* @brief visualizes an image
* @param frame - the image on which the bounding boxes need to be drawn on
* @return None
*/
void IOHandler::seeImg(cv::Mat frame) {
	return;
}

/**
* @brief visualizes an video
* @param frames - A list of frames in sequential order
* @return None
*/
void IOHandler::seeVideo(vector<cv::Mat> frames) {
	return;
}

/**
* @brief save the image to a particular path
* @param path - The path where the image should be saved
* @param frame - the image to be saved
* @return None
*/
void IOHandler::saveImg(string path, cv::Mat frame) {
	return;
}

/**
* @brief save the video to a particular path
* @param path - The path where the image should be saved
* @return None
*/
void IOHandler::saveVideo(string path) {
	return;
}