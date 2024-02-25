/*
F12 Д5 решена
Поменять местами

Написать функцию и программу, 
демонстрирующую работу данной функции, 
которая меняет в массиве минимальный и 
максимальный элемент местами. Прототип 
функции
void change_max_min(int size, int a[])

Данные на входе: Функция принимает на вход 
размер массива и массив чисел типа int
Данные на выходе: Функция не возвращает 
значения, измененный массив сохраняется на 
месте исходного.

Пример
Данные на входе:
 1 2 3 4 5 6 7 8 9 10
Данные на выходе:
 10 2 3 4 5 6 7 8 9 1
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
