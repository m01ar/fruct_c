/*
   C11 ДЗ 
   НОД
   Составить функцию, которая определяет наибольший общий делитель двух натуральных и привести пример ее использования.
   int nod(int a, int b)
   Данные на входе:        Два целых положительных числа 
   Данные на выходе:  Одно целое число - наибольший общий делитель. 

   Пример №1
   Данные на входе:        14 21 
   Данные на выходе:  7 
   */

#include <stdio.h>

int maxof(int a, int b)
{
    return a >= b ? a : b;
}


int minof(int a, int b)
{
    return a < b ? a : b;
}


int nod(int a, int b)
{

    int mcd;
    int min = minof(a, b);
    int max = maxof(a, b);
    int rem = max % min;

    while (rem != 0)
    {
        mcd = rem;
        max = min;
        min = rem;
        rem = max % min;
    }

    return mcd;
}


int main(void)
{
    int n1, n2;
    scanf("%d%d", &n1, &n2);
    printf("%d\n", nod(n1, n2));
    return 0;
}
