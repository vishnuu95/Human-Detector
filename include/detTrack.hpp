/**
 *  @file    detTrack.hpp
 *  @author  Vasista (clueless-bachu)
 *  @author  Vishnuu (vishnuu95)
 *  @date    10/20/2020
 *  @brief Detection and Tracking Module decleration.
 *  @copyright MIT License (c) 2020 Vasista and Vishnuu
 */
#pragma once
#include <string>
#include <vector>

using std::string;
using std::vector;
namespace vision {

class DetTrack {
 private:
    cv::MultiTracker *trackers;
    cv::dnn::Net *yoloModel;

 public:
    explicit DetTrack(string);
    ~DetTrack();
    void addTrackers(vector<vector<int>>, vector<vector<int>>);
    vector<vector<int>> detectHumans(cv::Mat *);
    vector<vector<int>> trackHumans(cv::Mat *);
};

}  // namespace vision
