/**
 *  @file    robot.hpp
 *  @author  Vasista (clueless-bachu)
 *  @author  Vishnuu (vishnuu95)
 *  @brief robot class definition for demo purposes of the perception module. Takes in all other modules as attributes.
 *	@copyright MIT License (c) 2020 Vasista and Vishnuu
 */
#pragma once
#include "./depthEstimator.hpp"
#include "./transformation.hpp"
#include "./ioHandler.hpp"
#include "./preprocess.hpp"
#include "./detTrack.hpp"

using namespace std;
using namespace vision;

namespace robot
{

	class Robot
	{
	private:
	public:
		IOHandler *ioh;
		DetTrack *humanDetector;
		Preprocessor *preprocessor;
		DepthEstimator *depthEstimator;
		Transformation *transformer;

		Robot(string);
		~Robot();
	};

} // namespace robot