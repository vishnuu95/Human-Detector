#pragma once

#include<iostream>

using namespace std;

namespace vision {

class Transformation {
 private:
 	Eigen::Matrix4f* transform;
 public:
 	Transformation();
 	~Transformation();
 	void setTransform(Eigen::Matrix4f);
 	Eigen::Matrix4f getTransform();
 	Eigen::Vector4f transform(Eigen::Vector4f);
};

}