#pragma once

#include<iostream>

using namespace std;
using namespace vision;

namespace robot {

class Robot {
 private:

 public:
 	IOHandler* ioh;
 	DetTrack* humanDetector;
 	Preprocessor* preprocessor;
 	DepthEstimator* depthEstimator;
 	Transformation* transformer;

 	Robot(string);
 	~Robot();
};

}