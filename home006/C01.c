/*
C1 Решена на лекции
Модуль числа
Составить функцию, модуль числа и привести пример ее использования. 
Данные на входе:  Целое число 
Данные на выходе: Целое не отрицательное число 

Пример
Данные на входе:  -100 
Данные на выходе:  100
*/

#include <stdio.h>

int abs(int n)
{
	return n < 0 ? -n : n;
}


int main(void)
{
	int number;
	scanf("%d", &number);

	printf("%d\n", abs(number));

	return 0;
}
