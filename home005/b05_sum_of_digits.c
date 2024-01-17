/*
B5 Решена на лекции
Сумма цифр

Ввести целое число и найти сумму его цифр. 

Данные на входе:
  Одно целое число большее или равное нулю. 
Данные на выходе:
  Одно число - сумма цифр 

Пример №1
Данные на входе:  1234 
Данные на выходе: 10 

Пример №2
Данные на входе:  111 
Данные на выходе: 3 
*/

#include <stdio.h>

#define BASE 10 // Основание системы счисления

int main(void)
{'
	int input;
	scanf("%d", &input);

	int sum;
	for(sum = 0; input > 0; sum += input % BASE, input /= BASE);
	printf("%d\n");

	return 0;
}