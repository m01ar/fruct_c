/*
   C19 Решена на лекции
   Сумма цифр в тексте

   Составить функцию, которая преобразует текущий символ цифры в число.
   Написать программу считающую сумму цифр в тексте.

   int digit_to_num(char c)

   Данные на входе:
   - Строка состоящая из английских букв, пробелов, знаков препинания.
   - В конце строки символ точка.
   Данные на выходе:
   - Целое число - сумма цифр в тексте 

   Пример №1
   Данные на входе:  1Hello 36world. 
   Данные на выходе: 10 

   Пример №2
   Данные на входе:  abc 1def2 3. 
   Данные на выходе: 6 
   */

#include <stdio.h>

#define END_MARKER  '.'

int is_digit(char c)
{
    return c >= '0' && c <= '9';
}


int digit_to_num(char c)
{
    return is_digit(c) ? (c - '0') : 0;
}


int main(void)
{
    char ch;
    int sum = 0;
    while (scanf("%c", &ch) == 1 && ch != END_MARKER)
        sum += digit_to_num(ch);

    printf("%d\n", sum);

    return 0;
}
