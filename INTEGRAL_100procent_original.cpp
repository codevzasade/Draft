#include "stdafx.h"
#include "math.h"
#include "stdio.h"
#include "stdlib.h"
#include "locale.h"
const double pi = 3.14;
const double eps = 1e-10;
double hello(double kity)
{
	return pow(cos(kity), 3)*pow(sin(kity), 2);
}
int main()
{
	double dx, left, a, b, s0, s2, s1, bl;
	int n, z, k;
	setlocale(LC_ALL, "RUS");
	printf("Введите количество разбиений:");
	scanf_s("%d", &n);
	a = 0; 
	b = pi/3; 
	dx = (b - a) / n;
	s0 = 0; 
	s1 = 0; 
	left = ((hello(a) + hello(b))*0.5);
	for (z = 1; z <= n; z++)
	{
		s0 += hello(a + (z - 1)*dx);
	}
	s2 = (left + s0)*dx;

	if (fabs(s2) < 1)
		k = 1;
	else
		k = 2;
	do
	{
		n = 2 * n;
		dx = (b - a) / n; 
		s1 = s2; 
		s2 = 0; 
		s0 = 0;
		for (z = 1; z <= n; z++)
		{
			s0 += hello(a + (z - 1)*dx);
		}
		s2 = (left + s0)*dx;
		switch (k)
		{
		case 1: bl = (fabs((s2 - s1))>eps); break;
		case 2: bl = (fabs((s2 - s1) / s2)>eps); break;
		}
	 printf("\t n=%d s2 = %lf \t\n", n, s2);
	} while (bl);
	return 0;
}