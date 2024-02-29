/*
G1 "Три раза"

В файле .txt дана строка.
Вывести ее в файл .txt три раза через запятую и показать количество символов в ней.

Данные на входе:
  Строка из английских букв и пробелов.
Не более 100 символов.
В конце могут быть незначащие переносы строк.

Данные на выходе:
  Исходная строка 3 раза подряд, через запятую пробел и количество символов в ней.

Пример
Данные на входе:
  aab 
Данные на выходе:
  aab, aab, aab 3 

*/

#include <stdio.h>
#include <string.h>

#define INFILE  "in.txt"
#define OUTFILE "out.txt"

#define WRITE_COUNT 3

// https://weinman.cs.grinnell.edu/courses/CSC161/2019S/modules/chars-io/readings/scanf.shtml 

// Размер изменяемого символьного буфера (строки)
#define MAXSTR 127

// Превратить литерал в строковый без макроподстановки 
#define STR(EXPR) #EXPR

// Собрать форматную строку scanf с ограничением по длине для символьного буфера
#define SCANSTR(LEN) "%" STR(LEN) "[^\n]"

int out_three_times(char *buf, size_t sz)
{
    FILE *fp;
    do
    {
        fp = fopen(OUTFILE, "w");
        if (fp == NULL)
            return 0;

        int cnt = WRITE_COUNT;
        while (cnt--)
            fprintf(fp, "%s%s ", buf, cnt>0?",":"");

        fprintf(fp, "%zu\n", sz);
    }
    while (0);

    fclose(fp);
    return 1;
}

size_t read_content(char *buf)
{
    size_t result = 0;
    FILE *fp;
    do
    {
        fp = fopen(INFILE, "r+");
        if (fp == NULL)
            return 0;

        if (fscanf(fp, SCANSTR(MAXSTR), buf) != 1)
            break;

        result = strlen(buf);
    }
    while (0);

    fclose(fp);
    return result;
}

int main(void)
{
    char data[MAXSTR+1];

    size_t in_size = read_content(data);
    if (!in_size)
    {
        puts("Read error");
        return 1;
    }

    if (!out_three_times(data, in_size))
    {
        puts("Write error");
        return 2;
    }

    return 0;
}
