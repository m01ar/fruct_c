/*
F2 ДЗ 2
Четные в начало

Написать функцию и программу, 
демонстрирующую работу данной функции, 
которая ставит в начало массива все четные 
элементы, а в конец – все нечетные. Не 
нарушайте порядок следования чисел между 
собой.

Строго согласно прототипу:
void sort_even_odd(int n, int a[])

Данные на входе:
 Функция принимает на вход целые числа
Данные на выходе:
 Отсортированный исходный массив

Пример №1
Данные на входе:
 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1
Данные на выходе:
 20 18 16 14 12 10 8 6 4 2 19 17 15 13 11 9 7 5 3 1

Пример №2
Данные на входе:
 1 0 1 0 1
Данные на выходе:
 0 0 1 1 1
*/

#include <stdio.h>
#include <stdlib.h>
#include "myAryFunc.h"

#define SIZE    5

void swap_int(int *a, int *b)
{
    if (a == b)
        return;

    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}

int is_even(int n)
{
    return !(n & 1);
}

// 2 3 6 7 4 5 8 9    0
// i
// 2<3 6>7 4 5 8 9    1 2 swap
//   i j
// 2 6 3 7 4 5 8 9    1 1
//   i
// 2 6 3 7 4 5 8 9    2 3
//     i j
// 2 6 3<7 4>5 8 9    2 4 swap
//     i   j
// 2 6<3 4>7 5 8 9    2 3 swap
//     i j
// 2 6 4 3 7 5 8 9    2 2
//     i
// 2 6 4 3 7 5 8 9    3 4
//       i j
// 2 6 4 3 7 5 8 9    3 5
//       i   j
// 2 6 4 3 7<5 8>9    3 6 swap
//       i     j
// 2 6 4 3<7 8>5 9    3 5 swap
//       i   j
// 2 6 4<3 8>7 5 9    3 4 swap
//       i j
// 2 6 4 8 3 7 5 9    3 3
//       i
// 2 6 4 8 3 7 5 9    4 5
//         i j
// 2 6 4 8 3 7 5 9    4 6
//         i   j
// 2 6 4 8 3 7 5 9    4 7
//         i     j

void sort_even_odd(int n, int a[])
{
    for (int i=0,j=0; i<n-1 && j!=n; i++)
    {
        if (is_even(a[i]))
            continue;
        for (j=i+1; j<n && i!=j; j++)
        {
            if (!is_even(a[j]))
                continue;
            swap_int(&a[j], &a[j-1]);
            j -= 2;
        }
    }
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

        sort_even_odd(newSize, data);
        aryPrintInt(data, newSize, " ", "\n");
    }
    while (0);

    free(data);
    return retcode;
}
