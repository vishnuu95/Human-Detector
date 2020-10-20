#include <bits/stdc++.h>
#include "opencv2/opencv.hpp"
#include <opencv2/tracking/tracker.hpp>
#include <Eigen/Dense>
#include "robot.hpp"

using namespace robot;

int main(int argc, char **argv)
{
	if(argc != 2) {
		cout<<"Please provide a single argument which is a path to the cfg file"<<endl;
		return -1;
	}

    Robot robot(argv[1]);
    robot.processData();

    return 0;

}
