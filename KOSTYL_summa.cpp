#include "stdafx.h"
#include "math.h"
#include "stdio.h"
#include "stdlib.h"

double f(double x)
{
	return x+2;
}

int main()
{
	double sum, x;
	int k, n;
	n = 0;
	x = 1;
	sum = 0;
	for (x; x <= 5; x += 0.5)
	{
		sum += f(x);
		n = n + 1;
	}
	printf("sum = %f  n = %d\n", sum, n );
	return 0;
}
