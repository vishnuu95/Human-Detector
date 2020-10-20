/**
 *  @file    ioHandling.cpp
 *  @author  Vasista (clueless-bachu)
 *  @author  Vishnuu (vishnuu95)
 *  @brief This file contains all test cases for ioHandler class
 *  @copyright MIT License (c) 2020 Vasista and Vishnuu.
 */
#include <gtest/gtest.h>
#include <bits/stdc++.h>
#include "opencv2/opencv.hpp"
#include <opencv2/tracking/tracker.hpp>
#include <Eigen/Dense>
#include "robot.hpp"

/**
 * @brief Test case to test the parsing of the cfg file
 * @param None
 * @return None
 */
TEST(ioHandling, parsing)
{
  IOHandler ioh;
  string path = "../cfg/arg.cfg";
  string inFile = "../data/sample_image.png";
  string outFile = "../result/sample_img.png";
  ioh.argParse(path);
  EXPECT_EQ(ioh.getInputType(), false);
  EXPECT_EQ(ioh.isVisualize(), true);
  EXPECT_EQ(ioh.getInFilePath(), inFile);
  EXPECT_EQ(ioh.getOutFilePath(), outFile);
}

/**
 * @brief Test case to test all the utility functions such as seeImg, saveImg etc
 * @param None
 * @return None
 */
TEST(ioHandling, utilTesting)
{
  IOHandler ioh;
  string path = "../cfg/arg.cfg";
  string inFile = "../data/sample_image.png";
  string outFile = "../result/sample_img.png";
  ioh.argParse(path);

  cv::Mat inImg = cv::imread(inFile);
  vector<vector<int>> bbs = {
      {169, 43, 108, 268},
      {55, 45, 101, 287}};

  ioh.drawBb(bbs, inImg);
  ioh.addFrame(inImg);
  ioh.seeImg(inImg);
  ioh.saveImg(outFile, inImg);
  EXPECT_EQ(1, 1);
}
