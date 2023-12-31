/*
1. Найти наибольшее из двух чисел

Ввести два числа и вывести их в порядке возрастания.

Данные на входе:  Два целых числа
Данные на выходе: Два целых числа

Пример:

Данные на входе:  15 9
Данные на выходе: 9 15

*/

#include <stdio.h>

int main(void)
{
	int a, b;
	scanf("%d%d", &a, &b);

	int min = a, max = b;
	if (min>max)
		min = b, max = a;
	printf("%d %d\n", min, max);

//	printf("%d %d\n", a<b ? a : b, a>= b ? a : b);

	return 0;
}
