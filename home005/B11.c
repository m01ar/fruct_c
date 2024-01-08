/*
B11 ДЗ 5
Перевернуть число

Ввести целое число и «перевернуть» его, так чтобы
первая цифра стала последней и т.д. 

Данные на входе:  Целое неотрицательное число 
Данные на выходе: Целое неотрицательное число
                   наоборот 

Пример №1
Данные на входе:  1234 
Данные на выходе: 4321 

Пример №2
Данные на входе:  782 
Данные на выходе: 287 
*/

#include <stdio.h>

#define BASE	10  // Количество пальцев на ногах

int main(void)
{
	int num;
	scanf("%d", &num);

	int result;
	result = num % BASE;
	num /= BASE;
	while (num > 0)
	{
		result *= BASE;
		result += num % BASE;
		num /= BASE;
	}

	printf("%d\n", result);

	return 0;
}
