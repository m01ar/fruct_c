/*
C12 Демо
Вычислить sin
Составить функцию, которая вычисляет синус как сумму
ряда (с точностью 0.001)

sin(x) = x - x**3/3! + x**5/5! - x**7/7! + …
(x в радианах)
Прототип функции: float sinus(float x)

Данные на входе:
- Одно число от 0 до 90
Данные на выходе:
- Вещественное число в формате "%.3f"

Пример №1
Данные на входе:  45
Данные на выходе: 0.707

Пример №2
Данные на входе:  30
Данные на выходе: 0.500

Пример №3
Данные на входе:  0
Данные на выходе: 0.000
*/

#include <stdio.h>

#define _USE_MATH_DEFINES
#include <math.h>

#define EPS 1E-3

double mabs(double n)
{
    return n > 0 ? n : -n;
}

double sin_taylor(double x) // В радианах
{
    double a=x, b=1, term, sum=0;
    int k=1;
    do
    {
        term = a / b;
        sum += term;
        a *= -x * x;
        b *= (2*k) * (2*k+1);
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
    printf("%.3lf sin of taylor\n", sin_taylor(x));
    printf("%.3lf sin of math.h\n", sin(x));
    return 0;
}
