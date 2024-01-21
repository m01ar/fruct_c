/*
   C17 ДЗ
   Сумма цифр равна произведению

   Составить логическую функцию, которая определяет, верно ли, 
   что в данном числе сумма цифр равна произведению.

   int is_happy_number(int n)

   Данные на входе:  Целое неотрицательное число 
   Данные на выходе: YES или NO 

   Пример №1
   Данные на входе:  123 
   Данные на выходе: YES 

   Пример №2
   Данные на входе:  528 
   Данные на выходе: NO
   */

#include <stdio.h>

#define BASE    10

// Возвращает младший разряд числа, после чего число сдвигается (делится) на порядок
int next_digit(int *num)
{
    int result;
    if (*num == 0)
        return -1;
    result = *num % BASE;
    *num /= BASE;
    return result;
}


int is_happy_number(int n)
{
    int digit = 0; // Цифра, считанная справа
    int sum = 0;   // Сумма
    int prod = 1;  // Произведение

    while (n > 0)
    {
        digit = next_digit(&n);
        sum += digit;
        prod *= digit;
    }
    return sum == prod;
}


int main(void)
{
    int number;
    scanf("%d", &number);

    if (is_happy_number(number))
        printf("YES" "\n");
    else
        printf("NO" "\n");

    return 0;
}
