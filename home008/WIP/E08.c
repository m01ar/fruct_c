/*
E8 Демо 2
Инверсия каждой трети
Считать массив из 12 элементов и выполнить 
инверсию для каждой трети массива. 

Данные на входе:
  12 целых чисел через пробел 
Данные на выходе:
  12 целых чисел через пробел 

Пример №1
Данные на входе:
  4 -5 3 10 -4 -6 8 -10 1 0 5 7 
Данные на выходе:
  10 3 -5 4 -10 8 -6 -4 7 5 0 1 

Пример №2
Данные на входе:
  1 2 3 4 5 6 7 8 9 10 11 12 
Данные на выходе:
  4 3 2 1 8 7 6 5 12 11 10 9 
*/

#include <stdio.h>
#include "../mylib/myAryFunc.h"

#define SIZE    5

int main(void)
{
//    int data[SIZE];
    int data[SIZE] = {0};
//    int data[SIZE] = {11, 22, 33, 44, 55};
//    aryPrintInt(data, SIZE, " ", "\n");
//    printf("=%d\n", aryInputInt(data, SIZE));
    aryInputInt(data, SIZE);
//    aryPrintInt(data, SIZE, " ", "\n");

    return 0;
}
