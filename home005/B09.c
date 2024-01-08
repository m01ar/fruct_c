/*
B9 Урок 5 ДЗ 3
Все цифры четные

Ввести целое число и определить, верно ли, что все
его цифры четные. 

Данные на входе:  Одно целое число 
Данные на выходе: YES или NO 

Пример №1
Данные на входе:  2684 
Данные на выходе: YES 

Пример №2
Данные на входе:  2994 
Данные на выходе: NO 
*/

#include <stdio.h>

#define BASE	10  // Основание системы счисления

int main(void)
{
	int number;
	scanf("%d", &number);

	int has_odd = 0; // Флаг наличия нечетной цифры
	for (int digit; number > 0 && !has_odd; number /= BASE)
		if (digit = number % BASE, digit % 2)
			has_odd = 1;

	if (has_odd)
		printf("NO" "\n");
	else
		printf("YES" "\n");

	return 0;
}
