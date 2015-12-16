#include "stdafx.h" 
#include <math.h> 
#include <stdio.h> 
#include <stdlib.h> 

const double eps = 1e-3;

double s(double x)
{
	return (2 * x*sin(x) - cos(x));
}
double f(double x)
{
	return (cos(x) / (2 * sin(x)));
}
double fi(double x)
{
	return (-1 / (2 * pow(sin(x), 2)));

}

int main()
{

	double y, x, z;
	int n = 0;
	x = 1;
	if (fabs(fi(x))<1);
	{
		do
		{
			y = f(x);
			z = (fabs(y - x));
			x = y;
			n = n + 1;
		} while (z > eps);
	}

	printf("x=%.3f f(x)=%.2f n=%d\n", x, s(x), n);
	return 0;

}
