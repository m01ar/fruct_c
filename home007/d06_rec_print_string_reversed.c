/*
D6
Строка наоборот

Дана строка, заканчивающаяся символом точка '.'.
Напечатать строку наоборот.
Реализуйте рекурсивную функцию, которая считывает
и печатает строку наоборот.

void reverse_string()

Данные на входе:
- Строка из английских букв и знаков препинания.
- В конце строки символ точка.
Данные на выходе:
- Исходная строка задом наперед.

Пример
Данные на входе:  Hello world!.
Данные на выходе: !dlrow olleH
*/

#include <stdio.h>

#define END_MARKER  '.'

void reverse_string(void)
{
    char ch;
    if (scanf("%c", &ch) != 1)
        return;

    if (ch == END_MARKER)
        return;

    reverse_string();
    printf("%c", ch);
}


int main(void)
{
    reverse_string();
    puts("");
    return 0;
}
