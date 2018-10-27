#pragma once
#ifndef EDGE_DETECT_H
#define EDGE_DETECT_H

#include <iostream>
#include <string>
#include <vector>
#include "CImg.h"

using namespace std;
using namespace cimg_library;

class EdgeDetect {
public:
	EdgeDetect(string, string, string, int, int minR = 0, int maxR = 0); // ���캯��
	void toGrayScale(); // �ҶȻ�����
	vector<vector<float>> createFilter(int, int, float); // ������˹�˲���
	CImg<float> useFilter(CImg<float>&, vector<vector<float>>&); // ���и�˹�˲�
	CImg<float> sobel(CImg<float>&, CImg<float>&); // ����sobel����
	CImg<float> nonMaxSupp(CImg<float>&, CImg<float>&); // ���з��������
	CImg<float> threshold(CImg<float>&, int, int); // ˫��ֵ����

	void houghLinesTransform(CImg<float>&); // ����ֱ�߱任
	void houghLinesDetect(); // ����ֱ�߼��
	int getMaxHough(CImg<float>&, int&, int&, int&); // �������ռ�ֱ�߽���
	void drawEdge(); // �������ı�Ե
	void drawPoint(); // �������Ľǵ�

	void houghCirclesTransform(CImg<float>&, int, int); // ����Բ�任
	void houghCirclesDetect(); // ����Բ���
	void drawCircle(int); // ��������Բ��
private:
	CImg<float> image; // ԭͼ��
	CImg<float> grayImage; // �Ҷ�ͼ��
	CImg<float> thresholdImage; // ������ֵ������ͼ��
	CImg<float> houghImage; // ����ռ�ͼ��
	CImg<float> outputImage; // ����任��������ͼ��
	vector<vector<float>> filter; // �˲���
	vector<float> setSin; // sin����
	vector<float> setCos; // cos����

	int pointNumber; // �ǵ���
	vector<pair<int, int>> lines; // ��⵽��ֱ�߼���
	vector<int> lineWeight; // �ۼӾ���
	vector<int> sortLineWeight; // �Ӵ�С������ۼӾ���
	CImg<float> edge; // ��Եֱ��

	int circleNumber; // ���Բ����
	int minRadius; // Բ����С�뾶
	int maxRadius; // Բ�����뾶
	vector<pair<int, int>> circles; // ��⵽��Բ�ļ���
	vector<pair<int, int>> voteSet; // ͶƱ����
	vector<pair<int, int>> center; // ����ۼ�ֵ����Բ�Ķ�Ӧ����
	vector<int> circleWeight;      // �ۼӾ���
	vector<int> sortCircleWeight; // �Ӵ�С������ۼӾ���
};

#endif 

