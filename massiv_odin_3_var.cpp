#include "stdafx.h"
#include "math.h"
#include "stdlib.h"
#include "locale.h"
#include "time.h"
int main()
{
	const unsigned int N = 5;
	unsigned int a, b, i, babaika22;
	unsigned int Zachet[N];
	setlocale(LC_ALL, "Russian");
	srand(time(0));
	babaika22 = 0;
	printf("\n Вывод массива:\t| Номера элементов: ");
	for (i = 0; i < N; i++)
	{
		Zachet[i] = rand() % 100 + 1;
		printf("\n Zachet[%d]=%d\t", i, Zachet[i]);
		if (Zachet[i] % 3 == 0)
		{
			babaika22 += 1;
			printf("<- Zachet[%d] - CONFIRMED<3", i);
		}
	}
	printf("\n\n Всего=%d", babaika22);
	getchar();
	return 0;
}
