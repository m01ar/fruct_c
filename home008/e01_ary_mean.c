/*
E1 ДЗ 1
Среднее арифметическое чисел
Ввести c клавиатуры массив из 5 элементов, 
найти среднее арифметическое всех 
элементов массива.

Данные на входе:
  5 целых ненулевых чисел через пробел
Данные на выходе:
  Одно число в формате "%.3f"

Пример №1
Данные на входе:  4 15 3 10 14
Данные на выходе: 9.200

Пример №2
Данные на входе:  1 2 3 4 5
Данные на выходе: 3.000
*/

#include <stdio.h>
#include "../mylib/myAryFunc.h"

#define SIZE    5

/// Среднее арифметическое элементов массива типа int
/// Параметры:
///   int ary[] - массив (указатель)
///   int sz    - размер массива
/// Возврат:
///   Среднее арифметическое, значение типа double

double aryMeanInt(int ary[], int sz)
{
    double sum = 0.0;
    for (int i = 0; i < sz; i++)
        sum += ary[i];

    return sum / sz;
}

int main(void)
{
    int data[SIZE] = {0};
    aryInputInt(data, SIZE);
    printf("%.3lf\n", aryMeanInt(data, SIZE));

    return 0;
}
