/*
E13 ДЗ 5
Вторая с конца ноль.

Считать массив из 10 элементов и отобрать в 
другой массив все числа, у которых вторая с 
конца цифра (число десятков) – ноль.

Данные на входе:
  10 целых чисел через пробел.
Данные на выходе:
  Целые числа через пробел, у которых вторая
  с конца цифра - ноль.

Пример
Данные на входе:
  40 105 203 1 14 1000 22 33 44 55
Данные на выходе:
  105 203 1 1000
*/

#include <stdio.h>
#include "../mylib/myAryFunc.h"

#define SIZE    10
#define BASE    10
#define MARKER  0

int aryFilter2ndZeroInt(int x[], int sz, int y[])
{
    int *n = y;
    for (int i = 0; i < sz; i++)
        if ((x[i] / BASE) % BASE == MARKER)
            *y++ = x[i];

    return y - n;
}

int main(void)
{
    int data_x[SIZE] = {0};
    int data_y[SIZE] = {0};

    aryInputInt(data_x, SIZE);

    int ysz = aryFilter2ndZeroInt(data_x, SIZE, data_y);

    aryPrintInt(data_y, ysz, " ", "\n");

    return 0;
}
