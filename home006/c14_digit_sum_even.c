/*
C14 Демо
Сумма цифр четна

Составить функцию логическую функцию, которая определяет, верно ли, 
что сумма его цифр – четное число. Используя эту функцию решить задачу. 

Данные на входе:  Одно целое не отрицательное число 
Данные на выходе: Ответ YES или NO 

Пример №1
Данные на входе:  136 
Данные на выходе: YES 

Пример №2
Данные на входе:  245 
Данные на выходе: NO 
*/

#include <stdio.h>

#define BASE    10

int is_sum_even(int num)
{
    int sum = 0;
    while (num > 0)
    {
        sum += num % BASE;
        num /= BASE;
    }
    return sum % 2 == 0;
}


int main(void)
{
    int number;
    scanf("%d", &number);

    if (is_sum_even(number))
        printf("YES" "\n");
    else
        printf("NO" "\n");

    return 0;
}
