/*
E7 Практик 2
Инверсия половинок

Считать массив из 10 элементов и выполнить 
инверсию отдельно для 1-ой и 2-ой половин 
массива. Необходимо изменить считанный 
массив и напечатать его одним циклом. 

Данные на входе:
  10 целых элементов массива через пробел. 
Данные на выходе:
  10 целых элементов массива через пробел. 

Пример №1
Данные на входе:
  4 -5 3 10 -4 -6 8 -10 1 0 
Данные на выходе:
  -4 10 3 -5 4 0 1 -10 8 -6 

Пример №2
Данные на входе:
  1 2 3 4 5 6 7 8 9 10 
Данные на выходе:
  5 4 3 2 1 10 9 8 7 6 
*/

#include <stdio.h>
#include "myAryFunc.h"

#define SIZE    10

void swapInt(int *a, int *b)
{
    if (a == b)
        return;

    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}

void aryModAndPrint(int ary[], int sz)
{
    const int mid = sz/2;
    for (int i = 0; i < sz; i++)
    {
        if (i < mid) // 0..4
        {
            if (i < mid/2)
                swapInt(&ary[i], &ary[mid-1-i]);
        }
        else // 5..9
        {
            if (i < mid*3/2)
                swapInt(&ary[i], &ary[sz-1-(i%mid)]);
        }
        printf("%d ", ary[i]);
    }
}

int main(void)
{
    int data[SIZE] = {0};
    aryInputInt(data, SIZE);

    aryModAndPrint(data, SIZE);
    puts("");

    return 0;
}
