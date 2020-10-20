/**
 *  @file    ioHandler.hpp
 *  @author  Vasista (clueless-bachu)
 *  @author  Vishnuu (vishnuu95)
 *  @brief IOHandler module handles input data, user options etc
 *	@copyright MIT License (c) 2020 Vasista and Vishnuu
 */
#pragma once

using namespace std;
namespace vision
{

	class IOHandler
	{
	private:
		string outPath = NULL;
		string inPath = NULL;
		bool isImg = false, ifVisualize = false;
		cv::VideoWriter *video;

	public:
		IOHandler();
		~IOHandler();
		void argParse(string);
		bool getInputType();
		bool isVisualize();
		string getInFilePath();
		string getOutFilePath();

		void drawBb(vector<vector<int>>, cv::Mat);
		void addFrame(cv::Mat);
		static void seeImg(cv::Mat);
		static void seeVideo(vector<cv::Mat>);
		void saveImg(string, cv::Mat);
		void saveVideo(string);
	};

} // namespace vision
