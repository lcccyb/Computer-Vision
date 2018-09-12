#pragma once
#include "CImg.h"
#include <cmath>
#include <cstring>
#define M_PI 3.14159265358979323846

using namespace cimg_library;
using namespace std;

class Ex1 {
public:
	Ex1();                        //Ĭ�Ϲ���ͼ��
	Ex1(const char*);             //����ͼ��
	~Ex1();
	void display();				  //��һ��
	void change_color();		  //�ڶ���
	void blue_circle1();		  //�����ⲻʹ��CImg�ĺ�������
	void blue_circle2();		  //������ʹ��CImg�ĺ�������
	void yellow_circle1();		  //�����ⲻʹ��CImg�ĺ�������
	void yellow_circle2();		  //������ʹ��CImg�ĺ�������
	void drawLine1();			  //�����ⲻʹ��CImg�ĺ�������
	void drawLine2();             //�����ⲻʹ��CImg�ĺ�������
	void save(const char*);   //������
private:
	CImg<unsigned char> img;
};