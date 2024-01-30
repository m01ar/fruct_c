/*
E20 ДЗ *
Переставить цифры

Переставить цифры в числе так, чтобы 
получилось максимальное число.

Данные на входе:
  Одно целое неотрицательное число
Данные на выходе:
  Целое неотрицательное число

Пример №1
Данные на входе:  1229
Данные на выходе: 9221

Пример №2
Данные на входе:  19
Данные на выходе: 91
*/

#include <stdio.h>

#define BASE    10

/// Извлечение наибольшего по значению разряда числа
/// Параметры:
///   int *n - исходное число (указатель),
///            при возврате содержит исходное число
///            без наибольшего разряда
/// Возврат:
///   Наибольший по значеню разряд исходного числа

int pop_max_digit(int *n)
{
    int result = 0;

    int m = 0, dm = 0;
    int cnt = 0;
    int d;

    // Перекладываем все цифры в обратном порядке
    // Подсчитываем их количество и находим самую большую
    // Цикл по остатку от деления исходного числа
    while (*n > 0)
    {
        d = *n % BASE;
        if (d > dm)
            dm = d;
        m = m * BASE + d;
        *n /= BASE;
        cnt++;            // Количество нужно, чтобы
    }                     // не потерять младшие нули

    // Перекладываем цифры обратно, кроме одной наибольшей
    // Наибольшая попадает в возврат
    // Цикл по количеству цифр в исходном числе
    while (cnt--)
    {
        d = m % BASE;
        if (d == dm)
            result = dm, dm = -1;
        else
            *n = *n * BASE + d;
        m /= BASE;
    }

    return result;
}

/// Подсчет количества разрядов (десятичных) в числе
/// Параметры:
///   int n - исходное число
/// Возврат:
///   Количество разрядов

int count_digits(int n)
{
    if (!n)
        return 1;

    int cnt;
    for (cnt = 0; n > 0; n /= BASE, cnt++);
    return cnt;
}

/// Соритировка разрядов числа по убыванию цифр
/// Параметры:
///   int n - исходное число
/// Возврат:
///   Число, разряды которого отсортированы по убыванию

int sort_digits(int n)
{
    int result = 0;
    int cnt = count_digits(n);

    while (cnt--)
        result = result * BASE + pop_max_digit(&n);

    return result;
}

int main(void)
{
    int n;
    scanf("%d", &n);
    printf("%d\n", sort_digits(n));
    return 0;
}
