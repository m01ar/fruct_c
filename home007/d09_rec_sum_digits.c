/*
D9
Сумма цифр числа

Дано натуральное число N.
Вычислите сумму его цифр.
Необходимо составить рекурсивную функцию.

int sum_digits(int n)

Данные на входе:
- Одно натуральное число.
Данные на выходе:
- Целое число - сумма цифр введенного числа.

Пример №1
Данные на входе:  123
Данные на выходе: 6

Пример №2
Данные на входе:  1000
Данные на выходе: 1
*/

#include <stdio.h>

#define BASE    10

int sum_digits(int n)
{
    if (!n)
        return 0;
    return (n % BASE) + sum_digits(n / BASE);
}


int main(void)
{
	int number;
	scanf("%d", &number);

    printf("%d\n", sum_digits(number));

	return 0;
}
