/*
D13 Демо 3
Печать простых множителей

Составить рекурсивную функцию, печать всех простых
множителей числа.

Данные на входе:
- Натуральное число
Данные на выходе:
- Последовательность из всех простых делителей числа
- через пробел.

Пример №1
Данные на входе:  12
Данные на выходе: 2 2 3

Пример №2
Данные на входе:  120
Данные на выходе: 2 2 2 3 5
*/

#include <stdio.h>
#include <math.h>

void print_prime_factors(int n, int f)
{
    // Перезапуск, если запускали "без делителя"
    if (f < 2)
        print_prime_factors(n, 2);
    // "Дно" рекурсии, делить больше не на что
    else if (n < 2)
        return;
    // "Вытаскиваем" все двойки
    else if (n % 2 == 0)
    {
        printf("%d ", 2);
        print_prime_factors(n/2, 2);
    }
    // Переходим к тройкам
    else if (f < 3)
        print_prime_factors(n, 3);
    // Когда перестать увеличивать делитель
    else if (f > sqrt(n))
    {
        if (n > 2) // Это последний множитель
            printf("%d*", n);
    }
    // "Вытаскиваем" нечётные множители
    else if (n % f == 0)
    {
        printf("%d ", f);
        print_prime_factors(n/f, f);
    }
    // Переходим к следующему нечётному
    else
        print_prime_factors(n, f+2);
}

int main(void)
{
	int number;
	scanf("%d", &number);
    print_prime_factors(number, 2);
    puts("");
	return 0;
}
