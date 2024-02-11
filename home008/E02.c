/*
E2
Найти минимум
Ввести c клавиатуры массив из 5 элементов, 
найти минимальный из них. 

Данные на входе:
  5 целых чисел через пробел 
Данные на выходе:
  Одно единственное целое число 

Пример №1
Данные на входе:  4 15 3 10 14
Данные на выходе: 3

Пример №2
Данные на входе:  1 2 3 4 -5
Данные на выходе: -5
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
