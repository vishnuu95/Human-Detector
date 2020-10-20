/**
 *  @file    robot.hpp
 *  @author  Vasista (clueless-bachu)
 *  @author  Vishnuu (vishnuu95)
 *  @brief robot class definition for demo purposes of the perception module. Takes in all other modules as attributes.
 *  @copyright MIT License (c) 2020 Vasista and Vishnuu
 */
#pragma once
#include<string>
#include "./depthEstimator.hpp"
#include "./transformation.hpp"
#include "./ioHandler.hpp"
#include "./preprocess.hpp"
#include "./detTrack.hpp"

using std::string;
using std::vector;
using vision::IOHandler;
using vision::DetTrack;
using vision::Preprocessor;
using vision::DepthEstimator;
using vision::Transformation;

namespace robot {

class Robot {
 private:
 public:
    IOHandler *ioh;
    DetTrack *humanDetector;
    Preprocessor *preprocessor;
    DepthEstimator *depthEstimator;
    Transformation *transformer;

    explicit Robot(string);
    ~Robot();
    void processData();
};
}  // namespace robot
