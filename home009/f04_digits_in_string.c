/*
F4 Практ 1
Цифры в строке

Написать функцию и программу, 
демонстрирующую работу данной функции.
Вывести в порядке возрастания цифры, 
входящие в строку. Цифра - количество. 

Функция должно строго соответствовать 
прототипу:
void print_digit(char s[])

Данные на входе:
 Строка из английских букв, пробелов,
 знаков препинания и цифр
Данные на выходе:
 Функция должна принимать на вход строку
 и выводить на печать по формату:
 Цифра пробел количество.

Пример
Данные на входе:  Hello123 world77.
Данные на выходе: 1 1 2 1 3 1 7 2
*/

#include <stdio.h>
#include <stdlib.h>

// https://weinman.cs.grinnell.edu/courses/CSC161/2019S/modules/chars-io/readings/scanf.shtml

/* Размер изменяемого символьного буфера (строки) */
#define MAXSTR 127

/* Превратить литерал в строковый без макроподстановки */
#define STR(EXPR) #EXPR

/* Собрать форматную строку scanf с ограничением по длине для символьного буфера */
#define SCANSTR(LEN) "%" STR(LEN) "[^\n]"


// Определяет, является ли символ цифрой

int is_digit(char c)
{
    return (c >= '0' && c <= '9');
}

// Вычисляет длину строки

size_t str_len(char *s)
{
    char *start = s;
    while (*s)
        s++;

    return (size_t)(s - start);
}

// Выводит счетчики цифр в строке согласно заданию

void count_print_digits(char *s)
{
    char *mark = malloc(str_len(s) * sizeof(char));
    if (mark == NULL)
        return;

    int cnt;
    char item;

    for (int i = 0; s[i]; i++)
    {
        if (!is_digit(s[i]) || mark[i])
            continue;

        item = s[i];
        printf("%d ", item-'0');
        cnt = 1;

        for (int j = i+1; s[j]; j++)
        {
            if (!is_digit(s[j]) || mark[j])
                continue;
            
            if (s[j] == item)
                mark[j] = 1, cnt++;
        }
        mark[i] = 1;
        printf("%d ", cnt);
    }
    free(mark);
}

int main(void)
{
    char buf[MAXSTR+1];
    if (scanf(SCANSTR(MAXSTR), buf) != 1)
        return 1;

    count_print_digits(buf);
    puts("");
    return 0;
}
