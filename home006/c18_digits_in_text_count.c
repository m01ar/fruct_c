/*
   C18
   Количество цифр в тексте

   Составить логическую функцию, которая определяет, что текущий символ это цифра.
   Написать программу, считающую количество цифр в тексте.

   int is_digit(char c)

   Данные на входе:
   - Текст из английских букв и знаков препинания.
   - В конце текста символ точка. 
   Данные на выходе:
   - Одно целое число - количество цифр в тексте. 

   Пример №1
   Данные на входе:  1Hello 36world. 
   Данные на выходе: 3 

   Пример №2
   Данные на входе:  abcd. 
   Данные на выходе: 0
   */

#include <stdio.h>

#define END_MARKER	'.'

int is_digit(char c)
{
	return c >= '0' && c <= '9';
}


int main(void)
{
	char ch;
	int count = 0;

	while (scanf("%c", &ch) == 1 && ch != END_MARKER)
		if (is_digit(ch))
			count++;

	printf("%d\n", count);

	return 0;
}