/*
F7 Демо 2
Упаковать 0 и 1

Написать функцию и программу, 
демонстрирующую работу данной функции, 
которая сжимает серии массива, состоящего 
из единиц и нулей по следующему принципу: 
например, массив 
[0,0,0,0,1,1,1,1,1,1,1,0,0,1,1,1,1] 
преобразуется в
[4,7,2,4] (т.к. начинается с 
нуля, то сразу записывается количество 
элементов первой серии); а массив 
[1,1,1,0,0,0,0,0,0,0] преобразуется в [0,3,7] (т.к. 
первая серия - это единицы, то первый 
элемент преобразованного массива 0).

Необходимо реализовать только одну 
функцию, всю программу загружать не надо. 
Прототип функции:
int compression(int a[], int b[], int N)

Данные на входе: Функция принимает 
исходный массив a[] и сжимает в массив b[], N - 
число элементов в массиве a[].
Данные на выходе: Функция возвращает число 
элементов сжатого массива b[]

Пример №1
Данные на входе:
 1 1 0 0 1 1 1 0 1 1 0 0 1 0 1 0 0 1 0 0 0 0 1 1 1 1 0 1 0 0 0 0 1 1 1 0 1 1 0 1 0 0 0 1 1 0 0 1 0 0 0 1 0 0 1 1 1 0 1 0 0 0 0 0 0 1 0 1 0 0 1 1 0 1 0 0 0 0 1 0 0 1 1 0 1 0 0 0 1 0 1 1 1 1 1 1 0 1 0 0
Данные на выходе:
 [0,2,2,3,1,2,2,1,1,1,2,1,4,4,1,1,4,3,1,2,1,1,3,2,2,1,3,1,2,3,1,1,6,1,1,1,2,2,1,1,4,1,2,2,1,1,3,1,1,6,1,1,2]

Пример №2
Данные на входе:
 0 0 1 0 0 1 1 0 0 1 1 0 1 0 0 1 1 0 1 0 1 1 1 1 0 1 1 1 1 0 0 0 0 1 1 0 0 1 0 1 0 1 1 1 0 1 0 1 1 0 1 1 1 0 0 0 0 1 0 1 0 0 0 1 0 1 1 1 1 1 0 1 0 1 1 1 0 0 0 1 0 1 1 1 1 0 1 1 1 0 0 1 1 1 1 0 1 0 1 1
Данные на выходе:
 [2,1,2,2,2,2,1,1,2,2,1,1,1,4,1,4,4,2,2,1,1,1,1,3,1,1,1,2,1,3,4,1,1,1,3,1,1,5,1,1,1,3,3,1,1,4,1,3,2,4,1,1,1,2]
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
