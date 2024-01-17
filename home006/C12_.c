/*
C12 Демо
Вычислить sin
Составить функцию, которая вычисляет синус как сумму ряда (с точностью 0.001)

sin(x) = x - x**3/3! + x**5/5! - x**7/7! + …
(x в радианах)
Прототип функции: float sinus(float x)

Данные на входе: 		Одно число от 0 до 90 
Данные на выходе: 	Вещественное число в формате "%.3f" 

Пример №1
Данные на входе: 		45 
Данные на выходе: 	0.707 

Пример №2
Данные на входе: 		30 
Данные на выходе: 	0.500 

Пример №3
Данные на входе: 		0 
Данные на выходе: 	0.000
*/

#include <stdio.h>
#include <math.h>

double sin_taylor(int deg, double eps)
{

//	printf("%d %.2lf", deg, eps);
	double rad = deg / 180. * M_PI;
	printf(" %.2lf %.2lf\n", rad, eps);

	double sum = 0;
	double q = rad;

	for (int i = 1;
			fabs(q) > 0;
			i++)
	{
		sum += q;
		q *= (-1)*(rad*rad) / (2*i+1)*(2*i);
	}
	return sum;;
}


int main(void)
{
	int number;
	scanf("%d", &number);
	printf("%.10lf = sin_taylor\n", sin_taylor(number, 0.0001));
	printf("%.10lf = sin of math.h\n", sin(number));
	return 0;
}
