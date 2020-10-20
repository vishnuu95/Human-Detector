#include <gtest/gtest.h>
#include <bits/stdc++.h>
#include "opencv2/opencv.hpp"
#include <opencv2/tracking/tracker.hpp>
#include <Eigen/Dense>
#include "transformation.hpp"

using namespace vision;

TEST(trans, initialisation) {
	Transformation transformer;
	Eigen::Matrix4f cam2roboTrans;
	cam2roboTrans <<  1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1;
	transformer.setTransform(cam2roboTrans);
  EXPECT_EQ(transformer.getTransform(), cam2roboTrans);
}

TEST(transformation, transformCords) {
	Transformation transformer;
Eigen::Matrix4f cam2roboTrans;
cam2roboTrans <<  1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1;
transformer.setTransform(cam2roboTrans);

  Eigen::Vector4f camCords;
  camCords << 1, 2, 3, 4;
  EXPECT_EQ(transformer.transformToRoboFrame(camCords), camCords);
}

