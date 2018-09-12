#include "Ex1.h"

int main() {
	Ex1 SrcImg("1.bmp");
	SrcImg.change_color();
	SrcImg.blue_circle1();
	SrcImg.yellow_circle1();
	SrcImg.drawLine1();
	SrcImg.save("2.bmp");
	SrcImg.display();

	return 0;
}