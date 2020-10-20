#pragma once

using namespace std;
namespace vision {

class IOHandler {
 private:
 	string outPath = NULL;
 	string inPath = NULL;
 	bool isImg = false, ifVisualize = false;
 	cv::VideoWriter* video;

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

}
