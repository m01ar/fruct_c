/*
E10 ДЗ 3
Циклический сдвиг массива вправо на 4
Считать массив из 12 элементов и выполнить 
циклический сдвиг ВПРАВО на 4 элемента. 

Данные на входе:
  12 целых чисел через пробел 
Данные на выходе:
  12 целых чисел через пробел 

Пример №1
Данные на входе:
  4 -5 3 10 -4 -6 8 -10 1 0 5 7 
Данные на выходе:
  1 0 5 7 4 -5 3 10 -4 -6 8 -10 

Пример №2
Данные на входе:
  1 2 3 4 5 6 7 8 9 10 11 12 
Данные на выходе:
  9 10 11 12 1 2 3 4 5 6 7 8 
*/

#include <stdio.h>
#include "myAryFunc.h"

#define SIZE    12
#define SHIFT   4

/// Выполняет циклический сдвиг массива типа int
/// Параметры:
///   int ary[] - массив (указатель)
///   int sz    - размер массива
///   int sft   - величина и направление сдвига
///               sft>0 : сдвиг вправо
///               sft<0 : сдвиг влево
void aryRotateInt(int ary[], int sz, int sft)
{
    int rr = sft > 0; // Rotate Right
    int steps = rr ? sft : -sft;
    int j, ja, jb;

    for (int i = 0; i < steps; i++)
    {
        j =     rr ? (sz-1) : 1;     // Start at
        while ( rr ?  j>0   : j<sz)  // End with
        {
            ja = (j  ) % SIZE;
            jb = (j+1) % SIZE;
            ary[ja] = ary[ja] ^ ary[jb];
            ary[jb] = ary[ja] ^ ary[jb];
            ary[ja] = ary[ja] ^ ary[jb];
            j += (rr ? -1 : 1);
        }
    }
}
/*   !rr            rr
1 2 3 4 5 6    1 2 3 4 5 6
  ^ ^          ^         ^
1 3 2 4 5 6    6 2 3 4 5 1
    ^ ^                ^ ^
1 3 4 2 5 6    6 2 3 4 1 5
      ^ ^            ^ ^
1 3 4 5 2 6    6 2 3 1 4 5
        ^ ^        ^ ^
1 3 4 5 6 2    6 2 1 3 4 5
^         ^      ^ ^
2 3 4 5 6 1    6 1 2 3 4 5
*/

int main(void)
{
    int data[SIZE] = {0};
    aryInputInt(data, SIZE);
    aryRotateInt(data, SIZE, SHIFT);
    aryPrintInt(data, SIZE, " ", "\n");

//    aryRotateInt(data, SIZE, -SHIFT);
//    aryPrintInt(data, SIZE, " ", "\n");

    return 0;
}
