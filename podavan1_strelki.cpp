#include "stdafx.h"
#include "math.h"
#include "stdio.h"


int main()
{
	float a, c, b, x, y;
	a = 3.65;
	c = 1.2; 
	b = 0; 
	x = 0.1745; 
	for (b; b + x <= c; b += x)
	{
			y = atan(sqrt(sin((a - b)/a)));
			printf("\t y = %f b = %f \n", y, b);
		
	}
	return 0;
}