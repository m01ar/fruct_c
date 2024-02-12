/*
F20
Четные и нечетные

Написать функцию и программу, демонстрирующую работу данной функции.

Дан целочисленный массив из 10 элементов. 
Необходимо определить количество четных и нечетных чисел.

Если количество чётных чисел больше, чем количество нечётных, заменить каждое нечетное число на произведение нечетных цифр в его десятичной записи.

Если количество нечётных чисел больше или равно количеству чётных, заменить каждое чётное число на произведение чётных цифр в его десятичной записи.

Данные на входе:
 10 целых чисел через пробел
Данные на выходе:
 10 целых чисел через пробел

Пример №1
Данные на входе:
 48 31 20 61 97 12 18 100 200 123
Данные на выходе:
 48 3 20 1 63 12 18 100 200 3

Пример №2
Данные на входе:
 48 25 57 34 23 91 90 85 30 79
Данные на выходе:
 32 25 57 4 23 91 0 85 0 79
*/

#include <stdio.h>
#include "../mylib/myAryFunc.h"

#define BASE    10
#define SIZE    10

enum digits {DIGIT_ANY, DIGIT_ODD, DIGIT_EVEN};

/// Проверка четности числа
/// Возврат: 1 если число четное
///          0 если число нечетное

int is_even(int n)
{
    return !(n & 1);
}

/// Вычисляет произведение цифр числа
/// Параметр d:
///   DIGIT_ANY  - любые цифры
///   DIGIT_ODD  - только нечетные цифры
///   DIGIT_EVEN - только четные цифры

int digit_prod(int n, enum digits d)
{
    int result = 1;
    int digit = 0;
    while (n)
    {
        digit = n % BASE;
        if ((d == DIGIT_EVEN &&  is_even(digit)) ||
            (d == DIGIT_ODD  && !is_even(digit)) ||
            (d == DIGIT_ANY))
        {
            result *= digit;
        }
        n /= BASE;
    }
    return result;
}

/// Вычисляет количество четных чисел массива

int count_evens(int sz, int a[])
{
    int count = 0;
    for (int i = 0; i < sz; i++)
//      is_even(a[i]) && count++;  // тоже можно
        if (is_even(a[i]))
            count++;
    return count;
}

/// Модифицирует массив согласно заданию

void mod_array(int sz, int a[])
{
    int cnt_e = count_evens(sz, a);
    int cnt_o = sz - cnt_e;

    for (int i = 0; i < sz; i++)
    {
        if (cnt_e > cnt_o)
        {
            if (!is_even(a[i]))
                a[i] = digit_prod(a[i], DIGIT_ODD);
        }
        else
        {
            if (is_even(a[i]))
                a[i] = digit_prod(a[i], DIGIT_EVEN);
        }
    }
}

int main(void)
{
    int data[SIZE] = {0};
    int newSz = aryInputInt(data, SIZE);

    if (!newSz)
        return 1;

    mod_array(newSz, data);

    aryPrintInt(data, newSz, " ", "\n");

    return 0;
}
