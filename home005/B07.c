/*
B7 Урок 5 Демонстрация 2
Две одинаковые цифры

Ввести целое число и определить, верно ли, что
в его записи есть две одинаковые цифры, НЕ
обязательно стоящие рядом.

Данные на входе:  Одно целое число 
Данные на выходе: Одно слово: YES или NO 

Пример №1
Данные на входе:  1234 
Данные на выходе: NO 

Пример №2
Данные на входе:  1242 
Данные на выходе: YES 
*/

#include <stdio.h>

#define BASE 10 // Основание системы счисления

int main(void)
{
	int number;
	scanf("%d", &number);

	int flag = 0,  // Флаг выхода из циклов
		subnumber, // Область поиска парной цифры
		digit_R,   // Правая цифра (искомая)
		digit_L;   // Левая цифра (сравниваемая)

	while (number > 0 && !flag)
	{
		digit_R = number % BASE;
		number /= BASE;
		subnumber = number;
		while (subnumber > 0 && !flag)
		{
			digit_L = subnumber % BASE;
			if (digit_L == digit_R)
				flag = 1;
			else
				subnumber /= BASE;
		}
	}

	if (flag)
		printf("YES" "\n");
	else
		printf("NO" "\n");

	return 0;
}
