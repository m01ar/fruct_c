/*
B19
Сумма цифр равна 10

Ввести натуральное число и определить, верно ли,
что сумма его цифр равна 10. 

Данные на входе:  Натуральное число 
Данные на выходе: YES или NO 

Пример №1
Данные на входе:  1234 
Данные на выходе: YES 

Пример №2
Данные на входе:  1233 
Данные на выходе: NO */

#include <stdio.h>

#define BASE	10
#define TARGET	10

int main(void)
{
	int num;
	scanf("%d", &num);

	int sum = 0, flag = 0;
	while (num > 0 && !flag && sum <= TARGET)
	{
		sum += num % BASE;
		if (sum == TARGET)
			flag = 1;
		num /= BASE;
	}

	if (flag)
		printf("YES" "\n");
	else
		printf("NO" "\n");

	return 0;
}
