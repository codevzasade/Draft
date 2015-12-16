#include "stdafx.h"
#include "math.h"
#include "stdio.h"
float const  copyright = 3.14;

int main()
{
	float c3, is, c1, c2, real, z;
	is = 80; 
	c1 = 5; 
	c2 = 15; 
	c3 = 6.87; 
	z = copyright / 180;
	for (c1; c1 <= is; c1 += c2)
	{
		real = (sqrt(c3)*sin(c1*z)*sin(c1*z)) / (c1*z + cos(c1*z));
		printf("\t y = %f c1 = %f \n", real, c1);
	}
	return 0; 
} 
