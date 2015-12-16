#include "stdafx.h"
#include "math.h"
#include "stdio.h"
#include "stdlib.h"
#include "locale"

int main()
{
	const int n = 12;
	float det, d1, d2, d3, x1, x2, x3;
	float a[n] = { 4, 2, -3, -2, 2, 8, -1, 8, 9, 1, 8, 0 };
	det = (a[0] * a[5] * a[10]) + (a[4] * a[2] * a[9]) + (a[1] * a[6] * a[8]) - (a[8] * a[5] * a[2]) - (a[4] * a[1] * a[10]) - (a[9] * a[6] * a[0]);
	d1 = (a[3] * a[5] * a[10]) + (a[7] * a[2] * a[9]) + (a[1] * a[6] * a[11]) - (a[11] * a[5] * a[2]) - (a[7] * a[1] * a[10]) - (a[9] * a[6] * a[0]);
	d2 = (a[0] * a[7] * a[10]) + (a[4] * a[2] * a[9]) + (a[3] * a[6] * a[11]) - (a[11] * a[7] * a[2]) - (a[4] * a[3] * a[10]) - (a[9] * a[6] * a[0]);
	d3 = (a[0] * a[5] * a[10]) + (a[4] * a[3] * a[9]) + (a[1] * a[7] * a[8]) - (a[8] * a[5] * a[3]) - (a[4] * a[1] * a[10]) - (a[9] * a[7] * a[0]);
	x1 = d1/det;
	x2 = d2/det;
	x3 = d3/det;
	printf("x1 = %f x2 = %f x3 = %f \n\t", x1, x2, x3);
	return 0;
}