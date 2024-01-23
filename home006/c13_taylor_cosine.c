/*
C13 Практика
Вычислить cos
Составить функцию, которая вычисляет синус как сумму
ряда (с точностью 0.001)

cos(x) = 1 - x**2/2! + x**4/4! - x**6/6! + ...
(x в радианах)
float cosinus(float x)

Данные на входе:
- Целое число от 0 до 90
Данные на выходе:
- Вещественное число в формате "%.3f"

Пример
Данные на входе:  60
Данные на выходе: 0.500
*/

#include <stdio.h>

#define _USE_MATH_DEFINES
#include <math.h>

#define EPS 1E-3

double mabs(double n)
{
    return n > 0 ? n : -n;
}

double cos_taylor(double x) // В радианах
{
    double a=1, b=1, term, sum=0;
    int k=1;
    do
    {
        term = a / b;
        sum += term;
        a *= -x * x;
        b *= (2*k-1) * (2*k);
        k++;
    }
    while (mabs(term) >= EPS);
    return sum;
}

int main(void)
{
    int n;
    scanf("%d", &n);
    double x = n * (M_PI/180);
    printf("%.3lf cos of taylor\n", cos_taylor(x));
    printf("%.3lf cos of math.h\n", cos(x));
    return 0;
}
