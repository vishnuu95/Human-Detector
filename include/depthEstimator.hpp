#pragma once

#include<iostream>

using namespace std;

namespace vision {

class DepthEstimator {
 private:
 	double humanHeight;
 	vector<double> intrinsicParams;

 public:
 	DepthEstimator();
 	~DepthEstimator();
 	vector<double> estimateDepth(vector<vector<int>>);
 	vector<vector<double>>  transform2dTo3d(vecotr<vector<int>>);
};

}