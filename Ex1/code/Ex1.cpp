#include "Ex1.h"

Ex1::Ex1() {
	CImg<unsigned char> tempImg(300, 300, 1, 3);
	tempImg.fill(0);
	img = tempImg;
}

Ex1::Ex1(const char* str) {
	img.load_bmp(str);
}

Ex1::~Ex1() {}

void Ex1::display() {
	img.display("Ex1");
}

void Ex1::change_color() {
	cimg_forXY(img, x, y) {
		if (img(x, y, 0) == 0 && img(x, y, 1) == 0 && img(x, y, 2) == 0) {
			img(x, y, 0) = 0;
			img(x, y, 1) = 255;
			img(x, y, 2) = 0;
		}
		else if (img(x, y, 0) == 255 && img(x, y, 1) == 255 && img(x, y, 2) == 255) {
			img(x, y, 0) = 255;
			img(x, y, 1) = 0;
			img(x, y, 2) = 0;
		}
	}
}

void Ex1::blue_circle1() {
	cimg_forXY(img, x, y) {
		double dx = (x - 50) * (x - 50);
		double dy = (y - 50) * (y - 50);
		double distance = sqrt(dx + dy);
		if (distance <= 30.0) {
			img(x, y, 0) = 0;
			img(x, y, 1) = 0;
			img(x, y, 2) = 255;
		}
	}
}

void Ex1::blue_circle2() {
	unsigned char blue[] = { 0, 0, 255 };
	img.draw_circle(50, 50, 30, blue);
}

void Ex1::yellow_circle1() {
	cimg_forXY(img, x, y) {
		double dx = (x - 50) * (x - 50);
		double dy = (y - 50) * (y - 50);
		double distance = sqrt(dx + dy);
		if (distance <= 3.0) {
			img(x, y, 0) = 255;
			img(x, y, 1) = 255;
			img(x, y, 2) = 0;
		}
	}
}

void Ex1::yellow_circle2() {
	unsigned char yellow[] = { 255, 255, 0 };
	img.draw_circle(50, 50, 3, yellow);
}

void Ex1::drawLine1() {
	double dx = 100 * cos(35 * M_PI / 180);
	double dy = 100 * sin(35 * M_PI / 180);
	cimg_forXY(img, x, y) {
		if (x == 0 && y == 0) {
			img(x, y, 0) = 0;
			img(x, y, 1) = 0;
			img(x, y, 2) = 255;
		}
		else {
			if(abs(y - x * tan(35 * M_PI / 180)) < 0.5 && x <= dx && y <= dy) {
				img(x, y, 0) = 0;
				img(x, y, 1) = 0;
				img(x, y, 2) = 255;
			}
		}
	}
}

void Ex1::drawLine2() {
	unsigned char blue[] = { 0, 0, 255 };
	img.draw_line(0, 0, 100 * cos(35 * M_PI / 180), 100 * sin(35 * M_PI / 180), blue);
}

void Ex1::save(const char* str) {
	img.save(str);
}