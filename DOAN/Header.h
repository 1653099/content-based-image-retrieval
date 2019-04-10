#pragma once
#include"Libraries/Headers/opencv2/core/core.hpp"
#include"Libraries/Headers/opencv2/highgui/highgui.hpp"
#include"Libraries/Headers/opencv2/imgproc/imgproc.hpp"
#include<cmath>
#include<string>
#include<ctime>

class IMAGE
{
public:
	std::string addr;
	cv::Mat mat;
	double cmpResult;
	double detectCmpResult;
};
std::vector<IMAGE> list;
std::string fileQuerry;
int myCHoice =0;
void toStringx(System::String^ s, std::string& out);
void sortListImage(int type);
void searchImage();
double MAP(double correctPoint, int numReturn, int fn);
int calNumRight( double correctPoint);

//require 2
int calNumRight(double correctPoint);

void CannyDetection(cv::Mat query, cv::Mat& edgeOfQuery, std::vector<cv::Mat>& edgeOfListImg);
void getResultCompare( cv::Mat edgeOfQuery, std::vector<cv::Mat> edgeOfListImg);
void updateSearchResult();

void CannyDetection(cv::Mat query, cv::Mat& edgeOfQuery, std::vector<cv::Mat>& edgeOfListImg);
void searchImgWithEdgeDetect(int size);
