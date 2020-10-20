#pragma once

using namespace std;
namespace vision {

class DetTrack {
 private:
 	cv::MultiTracker* trackers;
 	cv::dnn::Net* yoloModel;
 public:
 	DetTrack(string);
 	~DetTrack();
 	void addTrackers(vector<vector<int>>, vector<vector<int>>);
 	vector<vector<int>> detectHumans(cv::Mat*);
 	vector<vector<int>> trackHumans(cv::Mat*);
};

}