/*
E18
Кратность прежде всего
В диапазоне натуральных чисел от 2 до N 
определить, сколько из них кратны любому из 
чисел в диапазоне от 2 до 9. 

Данные на входе:
  Одно целое число N большее 2 и не 
превосходящее 10000 
Данные на выходе:
  Все числа от 2 до 9 в формате:
  2 количество чисел кратных 2 3 количество 
чисел кратных 3 4 количество чисел кратных 4 
5 количество чисел кратных 5 6 количество 
чисел кратных 6 7 количество чисел кратных 7 
8 количество чисел кратных 8 9 количество 
чисел кратных 9 

Пример №1
Данные на входе:
  99 
Данные на выходе:
  2 49 3 33 4 24 5 19 6 16 7 14 8 12 9 11 

Пример №2
Данные на входе:
  9 
Данные на выходе:
  2 4 3 3 4 2 5 1 6 1 7 1 8 1 9 1 
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
