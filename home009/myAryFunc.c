#include "myAryFunc.h"
#include <stdio.h>
#include <stdlib.h>

/// Ввод с клавиатуры элементов в массив типа int
/// с выделением памяти по мере ввода.
/// Параметры:
///   int **ary - указатель на адрес массива (в куче)
///   int sz    - размер массива
/// Возврат:
///   Количество элементов, записанных в массив

int aryInputDynInt(int **ary, int sz)
{
    int i = 0;
    int n;
    char sep;

    while (scanf("%d%c", &n, &sep) == 2 && i < sz)
    {
        (*ary)[i++] = n;
        if (sep == '\n')
            break;
        if (sep != ' ')
            return -1;
        if (i == sz)
        {
            sz = sz*3/2;
            if (NULL == (*ary = realloc(*ary, sz * sizeof(int))))
                return 0;
        }
    }
    return i;
}

/// Ввод с клавиатуры элементов в массив типа int
/// Параметры:
///   int ary[] - массив (указатель)
///   int sz    - размер массива
/// Возврат:
///   Количество элементов, записанных в массив

int aryInputInt(int ary[], int sz)
{
    int i = 0;
    int n;
    char sep;

    while (scanf("%d%c", &n, &sep) == 2 && i < sz)
    {
        ary[i++] = n;
        if (sep == '\n')
            break;
        if (sep != ' ')
            return -1;
    }
    return i;
}

/// Вывод на экран элементов массива типа int
/// Параметры:
///   int ary[] - массив (указатель)
///   int sz    - размер массива
///  char *sep  - строка, разделитель элементов
///  char *end  - строка, выводимая в конце (напр. \n)

void aryPrintInt(int ary[], int sz, char *sep, char *end)
{
    for (int i = 0; i < sz; i++)
        printf("%d%s", ary[i], sep);

    printf("%s", end);
}