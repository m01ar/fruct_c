/*
D7
От 1 до N

Составить рекурсивную функцию, печать всех чисел от
N до 1.

Данные на входе:
- Одно натуральное число
Данные на выходе:
- Последовательность целых чисел от введенного
- числа до 1, через пробел.

Пример
Данные на входе:  5
Данные на выходе: 5 4 3 2 1
*/

#include <stdio.h>

void print_num(int n)
{
	if (!n)
		return;
    printf("%d ", n);
    print_num(n-1);
}


int main(void)
{
	int number;
	scanf("%d", &number);

    print_num(number);
    puts("");

	return 0;
}
