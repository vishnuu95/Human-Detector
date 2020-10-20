#pragma once

using namespace std;

namespace vision {

class Preprocessor {
 private:

 public:
 	static void preprocess(pair<int, int>, int, cv::Mat&, cv::Mat&);
};

}