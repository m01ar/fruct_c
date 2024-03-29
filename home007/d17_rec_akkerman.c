/*
D17 ДЗ 5 ДЗ*
Функция Аккермана

Функция Аккермана определяется рекурсивно для
неотрицательных целых чисел m и n следующим образом:

A(0,   m)   = m+1
A(n+1, 0)   = A(n, 1)
A(n+1, m+1) = A(n, A(n+1, m))

https://ru.wikipedia.org/wiki/%D0%A4%D1%83%D0%BD%D0%BA%D1%86%D0%B8%D1%8F_%D0%90%D0%BA%D0%BA%D0%B5%D1%80%D0%BC%D0%B0%D0%BD%D0%B0

Реализуйте данную функцию по прототипу
int akkerman(int m, int n)

Данные на входе:  Даны неотрицательные целые числа m и n
Данные на выходе: Одно целое число

Пример №1
Данные на входе:  2 1
Данные на выходе: 5

Пример №2
Данные на входе:  2 4
Данные на выходе: 11
*/

#include <stdio.h>

int akkerman(int n, int m)
{
    if (!n)
        return m+1;

    if (!m)
        return akkerman(n-1, 1);

    return akkerman(n-1, akkerman(n, m-1));
}

int main(void)
{
    int num1, num2;
    scanf("%d%d", &num1, &num2);
    printf("%d\n", akkerman(num1, num2));
    return 0;
}
