#include "stdafx.h"
#include "math.h"
#include "stdio.h"


int main()
{
	float a, c, b, x, y;
	a = 1.84;
	c = 1.5;
	b = 0;
	x = 0.1571;
	double pi = 3.14;
	for (b; b + x <= c; b += x)
	{
		y = (a*sin(b) + pow(sin(b)+cos(b)*cos(b)-sin(b*sin(b)), 2))/(sin(b)+0.5*pi);
		printf("\t y = %f b = %f \n", y, b);

	}
	return 0;
}