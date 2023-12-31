/*
B15 Демо 3
Количество четных чисел

Дана последовательность ненулевых целых чисел, в
конце последовательности число 0. 
Подсчитать количество четных чисел. 

Данные на входе:
  Последовательность ненулевых целых чисел.
  В конце последовательности число ноль. 
Данные на выходе:
  Одно целое число - количество чётных чисел. 

Пример №1
Данные на входе:  15 22 2 4 1 6 0 
Данные на выходе: 4 

Пример №2
Данные на входе:  27 1 3 7 0 
Данные на выходе: 0 
*/

#include <stdio.h>

#define END_MARKER	0

int main(void)
{
	int even_cnt = 0, num;

	while (scanf("%d", &num) == 1 && num != END_MARKER)
		if (!(num % 2))
			even_cnt++;

	printf("%d\n", even_cnt);

	return 0;
}
