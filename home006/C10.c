/*
C10 Решена на лекции
Простые множители

Составить функцию, печать всех простых множителей числа. Использовать ее для печати всех простых множителей числа.
void print_simple(int n)
Данные на входе: 		Целое положительное число. 
Данные на выходе: 	Последовательность всех простых множителей данного числа в порядке возрастания. 

Пример №1
Данные на входе: 		12 
Данные на выходе: 	2 2 3 

Пример №2
Данные на входе: 		120 
Данные на выходе: 	2 2 2 3 5
*/

#include <stdio.h>
#include <math.h>

/// https://www.geeksforgeeks.org/print-all-prime-factors-of-a-given-number/

void print_prime_factors(int n)
{
	for (; !(n % 2); n /= 2)
		printf("2 ");

	for (int i = 3; i >= sqrt(i); i += 2)
		for (; !(n % i); n /= i)
			printf("%d ", i);

	if (n > 2)
		printf("%d ", n);

	puts("");
}


int main(void)
{
	int number;
	scanf("%d", &number);
	print_prime_factors(number);
	return 0;
}
