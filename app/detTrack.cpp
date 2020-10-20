#include <bits/stdc++.h>
#include "opencv2/opencv.hpp"
#include <opencv2/tracking/tracker.hpp>
#include "detTrack.hpp"

using namespace std;
using namespace vision;

DetTrack::DetTrack(string modelPath) {

}

DetTrack::~DetTrack() {

}

void DetTrack::addTrackers(vector<vector<int>> bbDet, vector<vector<int>> bbTrack) {
	return;
}

vector<vector<int>> DetTrack::detectHumans(cv::Mat* inImg) {

}

vector<vector<int>> DetTrack::trackHumans(cv::Mat* inImg) {

}