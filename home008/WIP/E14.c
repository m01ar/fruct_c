/*
E14 Демо 3
Более одного раза
Считать массив из 10 элементов и выделить в 
другой массив все числа, которые 
встречаются более одного раза. В 
результирующем массиве эти числа не должны 
повторяться. 

Данные на входе:
  10 целых чисел через пробел 
Данные на выходе:
  Целые числа через пробел, которые 
встречаются более одного раза в исходном 
массиве. 

Пример №1
Данные на входе:
  4 1 2 1 11 2 34 8 9 10 
Данные на выходе:
  1 2 

Пример №2
Данные на входе:
  1 2 3 4 5 1 2 3 4 5 
Данные на выходе:
  1 2 3 4 5 

Пример №3
Данные на входе:
  1 1 1 1 1 1 1 1 1 1 
Данные на выходе:
  1 
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
