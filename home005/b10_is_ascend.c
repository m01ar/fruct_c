/*
B10
Все цифры в порядке возрастания

Ввести целое число и определить, верно ли, что все
его цифры расположены в порядке возрастания.

Данные на входе:  Целое число
Данные на выходе: YES или NO

Пример №1
Данные на входе:  1238
Данные на выходе: YES

Пример №2
Данные на входе:  1274
Данные на выходе: NO
*/

#include <stdio.h>

#define BASE	10 // Основание системы счисления
//#define DEBUG	1

int main(void)
{
	int num;
	scanf("%d", &num);

	// Переворачиваем число для перебора 
	// от старших разрядов к младшим
	{
		int temp = num;
		num = temp % BASE;
		temp /= BASE;
		for (; temp > 0; 
				num *= BASE, 
				num += temp % BASE, 
				temp /= BASE);
	}

	int flag = 1,          // Флаг 
						   // (1 если в цикл не входим)
		cur,               // Текущая цифра
		prev = num % BASE; // Предыдущая цифра 
						   // (иниц. перед циклом)

	for (num /= BASE; num > 0; 
			num /= BASE, prev = cur, flag = 1)
	{
		flag = 0;
		cur = num % BASE;
#ifdef DEBUG
		printf(" %d ? %d\n", prev, cur);
#endif
		if (cur < prev)
			break;
	}

	if (flag)
		printf("YES" "\n");
	else
		printf("NO" "\n");

	return 0;
}
