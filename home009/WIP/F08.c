/*
F8 Практ 2
Пропущенное число

Написать функцию и программу, 
демонстрирующую работу данной функции.
В последовательности записаны целые числа 
от M до N ( M меньше N, M больше или равно 1) в 
произвольном порядке, но одно из чисел 
пропущено (остальные встречаются ровно по 
одному разу). N не превосходит 1000. 
Последовательность заканчивается числом 0. 
Определить пропущенное число.

Данные на входе:
 Последовательность целых чисел от M до N. M,
 N не превосходит 1000.
Данные на выходе:
 Одно целое число

Пример №1
Данные на входе:
 2 3 1 4 7 6 9 8 10 0
Данные на выходе:
 5

Пример №2
Данные на входе:
 41 40 39 38 37 36 34 33 32 31 50 49 48 47 46 45 44 43 42 30 0
Данные на выходе:
 35
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