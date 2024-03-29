/*
D3 Практик 1
В обратном порядке

Дано целое неотрицательное число N.
Выведите все его цифры по одной, в обратном порядке,
разделяя их пробелами или новыми строками.

Данные на входе:
- Одно целое неотрицательное число
Данные на выходе:
- Последовательность цифр введенного числа в обратном
- порядке через пробел

Пример №1
Данные на входе:  15
Данные на выходе: 5 1

Пример №2
Данные на входе:  54321
Данные на выходе: 1 2 3 4 5
*/

#include <stdio.h>

#define BASE    10

void print_digit(int n)
{
    if (!n)
        return;
    printf("%d ", n % BASE);
    print_digit(n / BASE);
}


int main(void)
{
    int number;
    scanf("%d", &number);

    print_digit(number);
    puts("");

    return 0;
}
