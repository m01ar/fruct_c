/*
C15 Практ 
Цифры по возрастанию

Составить функцию логическую функцию, которая определяет, верно ли, что в заданном числе все цифры стоят по возрастанию. Используя данную функцию решить задачу.

int grow_up(int n)

Данные на входе:  Одно целое не отрицательное число 
Данные на выходе: YES или NO 

Пример №1
Данные на входе:  258 
Данные на выходе: YES 

Пример №2
Данные на входе:  528 
Данные на выходе: NO
*/

#include <stdio.h>

#define BASE	10

// Возвращает младший разряд числа, после чего число сдвигается (делится) на порядок
int next_digit(int *num)
{
	int result;
	if (*num == 0)
		return -1;
	result = *num % BASE;
	*num /= BASE;
	return result;
}


// Возвращает 1, если сумма цифр в числе чётна, иначе 0
int is_num_ascending(int num)
{
	int prev_digit = next_digit(&num);

	while (num > 0)
	{
		if (num % BASE > prev_digit)
			return 0;
		prev_digit = next_digit(&num);
	}
	return 1;
}


int main(void)
{
	int number;
	scanf("%d", &number);

	if (is_num_ascending(number))
		printf("YES" "\n");
	else
		printf("NO" "\n");

	return 0;
}
