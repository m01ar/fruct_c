/*
F1
Сортировка по возрастанию

Написать функцию и программу, 
демонстрирующую работу данной функции, 
которая сортирует массив по возрастанию.

Строго согласно прототипу. Имя функции и 
все аргументы должны быть:
void sort_array(int size, int a[])

Данные на входе:
 Функция принимает на вход 
 первый аргумент - размер массива,
 второй аргумент - адрес нулевого элемента.
Данные на выходе:
 Функция ничего не возвращает.
 Производит сортировку переданного ей
 массива по возрастанию.

Пример №1
Данные на входе:
 20 19 4 3 2 1 18 17 13 12 11 16 15 14 10 9 8 7 6 5
Данные на выходе:
 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20

Пример №2
Данные на входе:
 5 4 3 2 1
Данные на выходе:
 1 2 3 4 5
*/

#include <stdlib.h>
#include <stdio.h>
#include "../mylib/myAryFunc.h"

#define SIZE    5

void swap_int(int *a, int *b)
{
    if (a == b)
        return;

    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}

void sort_array(int size, int a[])
{
// Exchange sort O(n**2)
// https://en.wikipedia.org/wiki/Sorting_algorithm#Exchange_sort
    for (int i = 0; i < size-1; i++)
        for (int j = i+1; j < size; j++)
            if (a[j] < a[i])
                swap_int(&a[i], &a[j]);
}

int main(void)
{
    int retcode = 0;
    int *data = NULL;
    do
    {
        data = malloc(sizeof(int) * SIZE);
        if (NULL == data && (retcode = 2))
            break;

        int newSize = aryInputDynInt(&data, SIZE);
        if (!newSize && (retcode = 1))
            break;

        sort_array(newSize, data);
        aryPrintInt(data, newSize, " ", "\n");
    }
    while (0);

    free(data);
    return retcode;
}
