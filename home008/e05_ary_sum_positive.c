/*
E5
Сумма положительных элементов
Считать массив из 10 элементов и подсчитать 
сумму положительных элементов массива. 

Данные на входе:
  10 целых чисел через пробел 
Данные на выходе:
  Одно целое число - сумма положительных 
элементов массива 

Пример №1
Данные на входе:  4 -5 3 10 -4 -6 8 -10 1 0
Данные на выходе: 26

Пример №2
Данные на входе:  1 -2 3 -4 5 -6 7 -8 9 0
Данные на выходе: 25
*/

#include <stdio.h>
#include "myAryFunc.h"

#define SIZE    10

int arySumPositiveInt(int ary[], int sz)
{
    int sum = 0;
    for (int i = 0; i < sz; i++)
        if (ary[i] > 0)
            sum += ary[i];

    return sum;
}

int main(void)
{
    int data[SIZE] = {0};
    aryInputInt(data, SIZE);
//    aryPrintInt(data, SIZE, " ", "\n");
    printf("%d\n", arySumPositiveInt(data, SIZE));
    return 0;
}
