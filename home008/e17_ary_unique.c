/*
E17
Только один раз
Дан массив из 10 элементов. В массиве найти 
элементы, которые в нем встречаются только 
один раз, и вывести их на экран. 

Данные на входе:
  10 целых чисел через пробел 
Данные на выходе:
  Элементы которые встречаются только один 
раз через пробел 

Пример
Данные на входе:
  5 -4 0 1 4 -3 -3 3 0 2 
Данные на выходе:
  5 -4 1 4 3 2 
*/

#include <stdio.h>
#include "../mylib/myAryFunc.h"

#define SIZE    10

void aryPrintUniqInt(int ary[], int sz)
{
    for (int i = 0, j = 0; i < sz; i++)
    {
        for (j = 0; j < sz; j++)
            if (i == j)
                continue;
            else if(ary[i] == ary[j])
                break;
        if (j == sz)
            printf("%d ", ary[i]);
    }
}

int main(void)
{
    int data[SIZE] = {0};
    aryInputInt(data, SIZE);
    aryPrintUniqInt(data, SIZE);
    puts("");
    return 0;
}
