/*
3. Найти максимальную цифру

Дано трёхзначное число, напечатать максимальную цифру.

Данные на входе:  Целое положительное трёхзначное число
Данные на выходе: Одна цифра

Пример:

Данные на входе:  435
Данные на выходе: 5

*/

#include <stdio.h>

int main(void)
{
	int input;
	scanf("%d", &input);
	input %= 1000;

	int max = input % 10;
	input /= 10;
	max = input % 10 > max ? input % 10 : max;
	input /= 10;
	max = input > max ? input : max;

	printf("%d\n", max);

	return 0;
}
