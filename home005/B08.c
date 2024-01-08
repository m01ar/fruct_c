/*
B8
Ровно одна цифра 9

Ввести целое число и определить, верно ли, что в нём
ровно одна цифра «9». 

Данные на входе:  Одно целое число 
Данные на выходе: Одно слово: YES или NO  

Пример №1
Данные на входе:  193 
Данные на выходе: YES 

Пример №2
Данные на входе:  1994 
Данные на выходе: NO 
*/

#include <stdio.h>

#define BASE	10 // Основание системы счисления
#define TARGET	9  // Искомая цифра

int main(void)
{
	int number;
	scanf("%d", &number);

	int exit_flag = 0, found_flag = 0;
	for (int digit; number > 0 && !exit_flag; number /= BASE)
	{
		digit = number % BASE;
		if (digit != TARGET)
			continue;
		if (found_flag)
			exit_flag = 1;
		else
			found_flag = 1;
	}

	if (found_flag && !exit_flag)
		printf("YES" "\n");
	else
		printf("NO" "\n");

	return 0;
}
