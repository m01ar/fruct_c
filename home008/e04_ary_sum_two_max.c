/*
E4 Демо 1
Два максимума
Считать массив из 10 элементов и найти в нем 
два максимальных элемента и напечатать их 
сумму. 

Данные на входе:
  10 целых чисел через пробел. 
Данные на выходе:
  Сумма двух максимальных элементов. 

Пример №1
Данные на входе:
  4 -5 3 10 -4 -6 8 -10 1 0 
Данные на выходе:
  18 

Пример №2
Данные на входе:
  1 2 3 4 5 6 7 8 9 10 
Данные на выходе:
  19 
*/

#include <stdio.h>
#include <limits.h>
#include "myAryFunc.h"

#define SIZE    10

/// Сумма двух наибольших элементов массива типа int
/// Параметры:
///   int ary[] - массив (указатель)
///   int sz    - размер массива
/// Возврат:
///   Сумма двух наибольших по значению элементов

int arySumTwoMaxInt(int ary[], int sz)
{
    int a = INT_MIN;
    int b = INT_MIN;
    for (int i = 0; i < sz; i++)
    {
        if (ary[i] <= a && ary[i] <= b)
            continue;

        if (a >= b)
            b = ary[i];
        else
            a = ary[i];
    }
    return a + b;
}

int main(void)
{
    int data[SIZE] = {0};
    aryInputInt(data, SIZE);
//    aryPrintInt(data, SIZE, " ", "\n");
    printf("%d\n", arySumTwoMaxInt(data, SIZE));
    return 0;
}
