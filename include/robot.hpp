#pragma once
#include "./depthEstimator.hpp"
#include "./transformation.hpp"
#include "./ioHandler.hpp"
#include "./preprocess.hpp"
#include "./detTrack.hpp"

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