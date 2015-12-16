#include "stdafx.h"
#include <stdio.h>
#include <math.h>

int main()
{
	float a, b, c, x, y;
	a = 2.4;
	b = 10;
	c = 50;
	double pi = 3.14;
	x = 10;
	for (b; b <= c; b += x)
	{
		y = sin(sqrt(3.2 + b*(pi/180))) / (a + cos(b*(pi/180) + pi / 7));
		printf("\t y=%f b=%f\n", y, b);

	}


	return 0;
}