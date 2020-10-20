/**
 *  @file    preprocessing.cpp
 *  @author  Vasista (clueless-bachu)
 *  @author  Vishnuu (vishnuu95)
 *  @brief Main file that runs all unit tests
 *	@copyright MIT License (c) 2020 Vasista and Vishnuu.
 */
#include <gtest/gtest.h>
#include <bits/stdc++.h>
#include "opencv2/opencv.hpp"
#include <opencv2/tracking/tracker.hpp>
#include <Eigen/Dense>
#include "preprocess.hpp"

using namespace vision;
/**
 * @brief Test case to test the preprocessing of the image. 
 * @param None
 * @return None
 */
TEST(preprocessing, imageTest)
{
	string path = "../data/sample_image.png";
	cv::Mat inImg = cv::imread(path);
	cv::Mat outImg;
	pair<int, int> size = pair<int, int>(100, 100);
	Preprocessor::preprocess(size, 0, inImg, outImg);

	EXPECT_EQ(outImg.size().width, size.second);
	EXPECT_EQ(outImg.size().height, size.first);
}
