#include <gtest/gtest.h>
#include <bits/stdc++.h>
#include "opencv2/opencv.hpp"
#include <opencv2/tracking/tracker.hpp>
#include <Eigen/Dense>
#include "robot.hpp"

using namespace robot;

TEST(robotTest, initialisation) {
  string cfgPath = "../cfg/test.cfg";
  Robot robot(cfgPath);
  EXPECT_EQ(1, 1);
}


TEST(robotTest, dataProcessing) {
  string cfgPath = "../cfg/test.cfg";
  Robot robot(cfgPath);
  robot.processData();
  EXPECT_EQ(1, 1);
}