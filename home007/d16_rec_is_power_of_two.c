/*
D16 Практик 3
Точная степень двойки

Написать логическую рекурсивную функцию, и используя ее
определить, является ли введенное натуральное число
точной степенью двойки.

int is2pow(int n)

Данные на входе:  Одно натуральное число.
Данные на выходе: YES или NO

Пример №1
Данные на входе:  8
Данные на выходе: YES

Пример №2
Данные на входе:  7
Данные на выходе: NO
*/

#include <stdio.h>

// Вариант без рекурсии и циклов
// https://graphics.stanford.edu/~seander/bithacks.html#DetermineIfPowerOf2
int is2pow_bitwise(int n)
{
    return (n && !(n & (n-1)));
}
//          8 && !(8 &  7) = T && !F = T && T = T
//          7 && !(7 &  6) = T && !T = T && F = F
//          1 && !(1 &  0) = T && !F = T && T = T
//          0 && !(0 & -1) = F && !F = F && T = F

// Вариант на цикле
int is2pow_loop(int n)
{
    if (n == 0)
        return 0;
    while (n != 1) {
        if (n % 2 != 0)
            return 0;
        n = n / 2;
    }
    return 1;
}

// Вариант на рекурсии
int is2pow(int n)
{
    if (n < 2)       // 0 = F, 1 = T
        return n;

    if (n % 2 != 0)  // Поднят хотя бы один бит = F
        return 0;

    return is2pow(n/2);
}
// 32:2 =16(0) 16>2
// 16:2 = 8(0)  8>2             14:2 = 7(0)
//  8:2 = 4(0)  4>2  7:2 = 3(1)  7:2 = 3(1)
//  4:2 = 2(0)  2=2  3:2 = 1(1)
//  2:2 = 1(0)  1<2  1   =   1
//  1   =   1

int main(void)
{
    int number;
    scanf("%d", &number);

    printf("%s\n", is2pow(number) ? "YES" : "NO");

    return 0;
}
