/*
E19 ДЗ *
Цифры по порядку

Вывести в порядке следования цифры, 
входящие в десятичную запись натурального 
числа N.

Данные на входе:  Одно натуральное число N
Данные на выходе: Цифры через пробел

Пример
Данные на входе:  54412
Данные на выходе: 5 4 4 1 2
*/

#include <stdio.h>

#define BASE    10

/// Выводит на экран все разряды переданного на вход числа
/// от старшего к младшему через пробел
/// Параметры:
///   int n - исходное число (натуральное)

void print_each_digit(int n)
{
    int cnt = n ? 0 : 1;
    int m = 0;

    while (n > 0)
    {
        m = m * BASE + n % BASE;
        n /= BASE;
        cnt++;
    }

    while (cnt--)
    {
        printf("%d ", m % BASE);
        m /= BASE;
    }
}

int main(void)
{
    int n;
    scanf("%d", &n);
    print_each_digit(n);
    puts("");
    return 0;
}
