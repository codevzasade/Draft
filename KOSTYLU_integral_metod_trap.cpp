#include "stdafx.h"
#include "math.h"
#include "stdio.h"
#include "stdlib.h"

const double pi = 3.14;
const double eps = 1e-5;

double f(double x)
{
	return exp(x)*sin(x);
}

int main()
{
	double a, s2, dx, s1, g1;
	int k, n, z;
	scanf_s("%d", &n);
	a = 0;
	s2 = 0;
	s1 = 0;
	g1 = 0;
	dx = (pi - a) / n;
	z = n;
	for (z; z > 0; z += -1)
	{
		s2 += ((0.5*(f(a) + f(pi)) + f(a + (z - 1)*dx))*dx);
	}
	if (fabs(s2) < 1)
		k = 1;
	else
		k = 2;
	switch (k)
	{
	case 1:
		do
		{
			n = 2 * n;
			z = n;
			for (z; z > 0; z += -1)
			{
				s2 += ((0.5*(f(a) + f(pi)) + f(a + (z - 1)*dx))*dx);
			}
			s1 = s2;
		} while (fabs(s2 - s1) > eps);
		break;
	case 2:
		while (fabs((s2 - s1)/s2) > eps)
		{
			n = 2 * n;
			z = n;
			dx = (pi - a) / n;
			s1 = s2;
			s2 = 0;
			for (z; z > 0; z += -1)
			{
				s2 += ((0.5*(f(a) + f(pi)) + f(a + (z - 1)*dx))*dx);
			}
			g1 = s2 - s1;
			printf("\ts1 = %lf s2 = %lf n = %d dx = %lf g1 = %lf\t\n", s1, s2, n, dx, g1);
		}
		break;
		
	}

	return 0;
}