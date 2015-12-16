#include <stdafx.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


const double eps = 1e-2;

double f(double x) {
	return x-2+sin(1/x);
}

int main() {
	double a, b, c;
	a = 1.2;
	b = 2;
	while (b-a>eps) {
		c = (a + b) / 2;
		if (f(b)*f(c)<0) 
			a = c;
		else 
			b = c;
	}
	printf("\nx=%lf, f(x)=%lf\n", c, f(c));
	return 0;
}