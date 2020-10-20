#include <gtest/gtest.h>
#include <bits/stdc++.h>
#include "opencv2/opencv.hpp"
#include <opencv2/tracking/tracker.hpp>
#include <Eigen/Dense>
#include "robot.hpp"

// using namespace vision;

TEST(ioHandling, parsing) {
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


TEST(ioHandling, utilTesting) {
  IOHandler ioh;
  string path = "../cfg/arg.cfg";
  string inFile = "../data/sample_image.png";
  string outFile = "../result/sample_img.png";
  ioh.argParse(path);

  cv::Mat inImg = cv::imread(inFile);
  vector<vector<int>> bbs = {
  	{169, 43, 108, 268},
  	{55, 45, 101, 287}
  };

  ioh.drawBb(bbs, inImg);
  ioh.addFrame(inImg);
  ioh.seeImg(inImg);
  ioh.saveImg(outFile, inImg);
  EXPECT_EQ(1, 1);
}
