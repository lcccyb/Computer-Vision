#pragma once
#include "CImg.h"
#include <cmath>
#include <cstring>
#define M_PI 3.14159265358979323846

using namespace cimg_library;
using namespace std;

class Ex1 {
public:
	Ex1();                        //默认构造图像
	Ex1(const char*);             //现有图像
	~Ex1();
	void display();				  //第一题
	void change_color();		  //第二题
	void blue_circle1();		  //第三题不使用CImg的函数调用
	void blue_circle2();		  //第三题使用CImg的函数调用
	void yellow_circle1();		  //第四题不使用CImg的函数调用
	void yellow_circle2();		  //第四题使用CImg的函数调用
	void drawLine1();			  //第五题不使用CImg的函数调用
	void drawLine2();             //第五题不使用CImg的函数调用
	void save(const char*);   //第六题
private:
	CImg<unsigned char> img;
};