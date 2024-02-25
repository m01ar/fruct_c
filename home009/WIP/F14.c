/*
F14
Сумма в интервале

Написать функцию и программу, 
демонстрирующую работу данной функции, 
которая возвращает сумму элементов в 
заданном отрезке [from, to] для массива. 
Прототип функции
int sum_between_ab(int from, int to, int size, int a[])

Данные на входе: Функция принимает концы 
отрезка from и to, размер массива, массив целых 
чисел
Функция возвращает сумму элементов в 
интервале [from, to]

Пример №1
Данные на входе:
 4 6 1 2 3 4 5 6 7 8 9 10
Данные на выходе:
 15

Пример №2
Данные на входе:
 6 4 1 2 3 4 5 6 7 8 9 10
Данные на выходе:
 15
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
