/*
B20
Проверка на простоту

Проверить число на простоту. 

Данные на входе:
  Натуральное число 
Данные на выходе:
  Если число является простым напечатать YES, иначе NO

Пример №1
Данные на входе:  10 
Данные на выходе: NO 

Пример №2
Данные на входе:  7 
Данные на выходе: YES 
*/

#include <stdio.h>

int main(void)
{
	int num;
	scanf("%d", &num);

	int isprime = 1;
	for (int n = num - 1; n > 1 && isprime; n--)
		if (!(num % n))
			isprime = 0;

	if (isprime)
		printf("YES" "\n");
	else
		printf("NO" "\n");

	return 0;
}
