#include "stdafx.h"
#include "math.h"
#include "stdio.h"
#include "stdlib.h"
int main()
{
	double x, a, S, y;
	int n;
	for (x = 0.14; x <= 0.5; x += 0.1)
	{
		a = x;
		S = x;
		for (n = 1; n <= 40; n++)
		{
				a = -a*x*x;
				S = S + a / (2 * n + 1);
		}
		y = atan(x);
		printf("x=%3.2f  S=%8.5f  y=%8.5f \n", x, S, y);
	};
	getchar();            /* ожидание нажатия клавиши пользователем */
	return 0;
}