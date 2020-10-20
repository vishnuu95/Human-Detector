/**
 *  @file    transformation.hpp
 *  @author  Vasista (clueless-bachu)
 *  @author  Vishnuu (vishnuu95)
 *  @brief Transformation module that transforms Human coordinates from Camera frame to Robot Frame. 
 *  @copyright MIT License (c) 2020 Vasista and Vishnuu.
 */
#pragma once
#include<bits/stdc++.h>

using namespace std;

namespace vision {

class Transformation {
 private:
    Eigen::Matrix4f *transform;

 public:
    Transformation();
    ~Transformation();
    void setTransform(Eigen::Matrix4f);
    Eigen::Matrix4f getTransform();
    Eigen::Vector4f transformToRoboFrame(Eigen::Vector4f);
};

}  // namespace vision
