//
//  main.cpp
//  Canny Edge Detector
//
//  Created by Hasan AkgÃ¼n on 21/03/14.
//  Copyright (c) 2014 Hasan AkgÃ¼n. All rights reserved.
//

#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>
#include <vector>
#include "CImg.h"
#include "canny.h"

using namespace cimg_library;
using namespace std;

int main()
{
	char path[4][50] = { "stpietro.bmp", "bigben.bmp", "lena.bmp", "twows.bmp" }; //Filepath of input image
	for (int i = 0; i < 4; i++) {
		canny res(path[i]);
	}
	return 0;
}

