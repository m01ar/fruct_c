/*
B6 Урок 5 Практика №2
Две одинаковые цифры рядом

Ввести целое число и определить, верно ли, что в
его записи есть две одинаковые цифры, стоящие рядом. 

Данные на входе:  Одно целое число 
Данные на выходе: Единственное слов: YES или NO 

Пример №1
Данные на входе:  1232 
Данные на выходе: NO 

Пример №2
Данные на входе:  1224 
Данные на выходе: YES 
*/

#include <stdio.h>

#define BASE 10 // Основание системы счисления

int main(void)
{
	int input;
	scanf("%d", &input);

	int cur = 0, prev = 0, flag = 0;
	for (prev = input % BASE, input /= BASE; input > 0 && !flag; input /= BASE) {
		cur = input % BASE;
		if (cur == prev)
			flag = 1;
		prev = cur;
	}

	if (flag)
		printf("YES" "\n");
	else
		printf("NO" "\n");

	return 0;
}
