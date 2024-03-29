/*
C2  Демо 1
Возвести в степень
Составить функцию, возведение числа  N в степень P.  int power(n, p) и привести пример ее использования.

Данные на входе:       Два целых числа: N по модулю не превосходящих 1000 и P > 0
Данные на выходе:     Одно целое число

Пример №1
Данные на входе:       8 3
Данные на выходе:     512

Пример №2
Данные на входе:       -5 2
Данные на выходе:     25
*/

#include <stdio.h>

int pwr(int n, int p)
{
    int result = 1;
    while (p > 0)
        result *= n, p--;

    return result;
}


int main(void)
{
    int num, pow;
    scanf("%d%d", &num, &pow);

    printf("%d\n", pwr(num, pow));

    return 0;
}
