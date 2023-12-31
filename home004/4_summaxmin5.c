/*
4. Найти сумму максимума и минимума

Напечатать сумму максимума и минимума.

Данные на входе:  Пять целых чисел через пробел
Данные на выходе: Одно целое число - сумма максимума и минимума

Пример:
Данные на входе:  4 15 9 56 4
Данные на выходе: 60

*/

#include <stdio.h>

int main(void)
{
	int i1, i2, i3, i4, i5;
	scanf("%d%d%d%d%d", &i1, &i2, &i3, &i4, &i5);

	int min = i1, max = i1; // Don't repeat yourself!
	min = i2 < min ? i2: min; max = i2 > max ? i2 : max;
	min = i3 < min ? i3: min; max = i3 > max ? i3 : max;
	min = i4 < min ? i4: min; max = i4 > max ? i4 : max;
	min = i5 < min ? i5: min; max = i5 > max ? i5 : max;

	printf("%d\n", min+max);

	return 0;
}
