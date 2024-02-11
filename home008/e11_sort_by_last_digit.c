/*
E11 ДЗ 4
Отсортировать по последней цифре
Считать массив из 10 элементов и
отсортировать его по последней цифре.

Данные на входе:
  10 целых чисел через пробел
Данные на выходе:
  Этот же массив отсортированный по последней цифре

Пример №1
Данные на входе:
  14 25 13 30 76 58 32 11 41 97
Данные на выходе:
  30 11 41 32 13 14 25 76 97 58

Пример №2
Данные на входе:
  109 118 100 51 62 73 1007 16 4 555
Данные на выходе:
  100 51 62 73 4 555 16 1007 118 109
*/

#include <stdio.h>
#include <stdlib.h>
#include "../mylib/myAryFunc.h"

#define SIZE    10
#define BASE    10

/// Функция-компаратор двух целых чисел от младших
/// разрядов к старшим
/// Сигнатура соответствует параметру comp qsort
/// int (*comp)(const void*, const void*)

int cmpFunc(const void *a, const void *b)
{
    int arg1 = *(const int *)a;
    int arg2 = *(const int *)b;
    while (arg1 && arg2)
    {
        if (arg1%BASE < arg2%BASE)
            return -1;
        if (arg1%BASE > arg2%BASE)
            return 1;
        arg1 /= BASE;
        arg2 /= BASE;
    }
    return 0;
}

/// Сортировка массива типа int по последней цифре
/// Параметры:
///   int ary[] - массив (указатель)
///   int sz    - размер массива

void arySortByLastDigitInt(int ary[], int sz)
{
    qsort(ary, sz, sizeof(int), cmpFunc);
}

int main(void)
{
    int data[SIZE] = {0};
    aryInputInt(data, SIZE);
    arySortByLastDigitInt(data, SIZE);
    aryPrintInt(data, SIZE, " ", "\n");
    return 0;
}
