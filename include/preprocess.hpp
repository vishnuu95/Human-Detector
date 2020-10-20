/**
 *  @file    preprocess.hpp
 *  @author  Vasista (clueless-bachu)
 *  @author  Vishnuu (vishnuu95)
 *  @brief preprocess Module that preprocesses the input image helping the detection module
 *  @copyright MIT License (c) 2020 Vasista and Vishnuu
 */
#pragma once

using namespace std;

namespace vision {

    class Preprocessor {
     private:
     public:
        static void preprocess(pair<int, int>, int, cv::Mat &, cv::Mat &);
    };

}  // namespace vision
