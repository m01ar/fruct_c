/*
E15 Практик 3
Положительные и отрицательные
Считать 10 чисел в диапазоне от -500 до 500 и 
разложить по двум массивам:
  в одни помещать только положительные, во 
второй - только отрицательные. Числа, 
равные нулю, игнорировать. Вывести на экран 
все элементы обоих массивов. 

Данные на входе:
  10 целых чисел через пробел. 
Данные на выходе:
  Сперва положительные числа, потом 
отрицательыне числа, через пробел. 

Пример
Данные на входе:
  5 -4 0 1 4 -3 -3 3 0 2 
Данные на выходе:
  5 1 4 3 2 -4 -3 -3 
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
