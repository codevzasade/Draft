#include "stdafx.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

const double eps = 1e-4;
double f(double x)
{
	return  exp(-((x*x) / 2) + 1 - cos(x));
}
double fi(double x)
{
	return (-0.5*exp(-((x*x) / 2)) + sin(x));

}

int main()
{

	double  y, x = 1, n = 0, z = 1;

	if (fi(x)<1);
	{
		while (z > eps)
		{



			y = f(x);
			z = (fabs(y - x));
			x = y;
			n = n + 1;
		}
	}

	printf("x=%f f(x)=%f n=%f\n", x, f(x), n); // тут n для вывода нехватало
	return 0;

}