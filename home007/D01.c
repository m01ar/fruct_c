/*
D1
От 1 до N

Составить рекурсивную функцию, печать всех чисел
от 1 до N

Данные на входе:
- Одно натуральное число
Данные на выходе:
- Последовательность чисел от 1 до введенного числа

Пример
Данные на входе:  5
Данные на выходе: 1 2 3 4 5
*/

#include <stdio.h>

void print_num(int n)
{
	if (!n)
		return;
    print_num(n-1);
    printf("%d ", n);
}


int main(void)
{
	int number;
	scanf("%d", &number);

    print_num(number);
    puts("");

	return 0;
}
