#include <bits/stdc++.h>
#include <Eigen/Dense>
#include "transformation.hpp"

using namespace vision;

Transformation::Transformation() {

}

Transformation::~Transformation() {

}

void Transformation::setTransform(Eigen::Matrix4f) {
	return;
}

Eigen::Matrix4f getTransform() {
	Eigen::Matrix4f transformationMat;
	return transformationMat;
}

Eigen::Vector4f Transform(Eigen::Vector4f) {
	Eigen::Vector4f newCords;
	return newCords;
}