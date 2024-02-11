#include "myAryFunc.h"
#include <stdio.h>
#include <stdlib.h>

//#define ARY_INPUT_GETCHAR_IMPLEMENTATION

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

    while (i < sz && (scanf("%d%c", &n, &sep) == 2))
    {
        (*ary)[i++] = n;
        if (sep == '\n')
            break;
        if (sep != ' ')
            return -1;
        if (i == sz)
        {
            sz = sz*3/2;
            if (NULL == (*ary = realloc(*ary, 
                            sz * sizeof(int))))
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

#ifdef ARY_INPUT_GETCHAR_IMPLEMENTATION

int aryInputInt(int ary[], int sz)
{
    int count = sz;
    char c;
    int n = 0;

    while(sz)
    {
        c = getchar();
//        printf("char: 0x%02x ", c);
        if (c >= '0' && c <= '9')
        {
            if (n)
                n *= 10;
            n += (c - '0');
//            printf("n=%d\n", n);
        }
        else if (c == ' ' || c == '\n') 
        {
//            puts("- space");
            ary[count-sz] = n;
            sz--;
            n = 0;
        }
        if (c == '\n')
            break;
    }
    return count - sz;
}

#else

int aryInputInt(int ary[], int sz)
{
    int count = sz;
    int n;
    char sep;

    while (sz && (scanf("%d%c", &n, &sep) == 2))
    {
//        printf("a[%d] <- %d\n", count-sz, n);
        ary[count-sz] = n;
        sz--;
        if (sep == '\n')
            break;
        if (sep != ' ')
            return -1;
    }
    return count - sz;
}

#endif

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
