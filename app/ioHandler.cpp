#include "opencv2/opencv.hpp"
#include <opencv2/tracking/tracker.hpp>
#include "ioHandler.hpp"

using namespace vision;

IOHandler::IOHandler() {

}

IOHandler::~IOHandler() {

}

void IOHandler::argParse(string cfgPath) {
	return;
}

bool IOHandler::getInputType() {
	return false;
}

bool IOHandler::isVisualize() {
	return false;
}

string IOHandler::getInFilePath() {
	string path = "";
	return path;
}

string IOHandler::getOutFilePath() {
	string path = "";
	return path;
}

void IOHandler::drawBb(vector<vector<int>>, cv::Mat) {
	return;
}

void IOHandler::addFrame(cv::Mat) {
	return;
}

void IOHandler::seeImg(cv::Mat) {
	return;
}

void IOHandler::seeVideo(vector<cv::Mat>) {
	return;
}

void IOHandler::saveImg(string, cv::Mat) {
	return;
}

void IOHandler::saveVideo(string) {
	return;
}