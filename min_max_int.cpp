#include "stdafx.h"
#include "stdio.h"
#include "math.h"


int main()
{
	int i;
	i = 1;
	while (i > 0)
	{
		i = i + i;
		// help ==== printf("i = %d \n", i);
		if (i < 0)
		{
			printf("imin = %d \n", i);
			printf("imax = %d \n", i + i / 2 + (i - 1) / 2);

		}

	}
	return 0;
}