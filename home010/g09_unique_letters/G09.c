/*
G9 ДЗ 4 "Удалить повторяющиеся символы"

В файле .txt строка из меленьких и больших английских букв, знаков препинания и пробелов.
Требуется удалить из нее повторяющиеся символы и все пробелы.
Результат записать в файл .txt.

Данные на входе:
  Строка из меленьких и больших английских букв, знаков препинания и пробелов.
Размер строки не более 1000 сивмолов.

Данные на выходе:
  Строка из меленьких и больших английских букв.

Пример
Данные на входе:
  abc cde def 
Данные на выходе:
  abcdef 

*/

#include <stdio.h>
#include <stdlib.h>

#define INFILE  "in.txt"
#define OUTFILE "out.txt"

#define BUF_SZ   1000
#define ALPHA_SZ   26

/// Определяет, является ли символ буквой в верхнем
/// регистре.
/// Функция-предикат.

int isUpper(char c)
{
    return (c >= 'A' && c <= 'Z');
}

/// Определяет, является ли символ буквой в нижнем
/// регистре.
/// Функция-предикат.

int isLower(char c)
{
    return (c >= 'a' && c <= 'z');
}

/// Определяет, является ли символ буквой
/// Функция-предикат.

int isAlpha(char c)
{
    return (isUpper(c) || isLower(c));
}

/// Определят, содержится ли символ в строке.
/// Функция-предикат.
/// Принимает:
///   c   - искомый символ
///   str - строка (буфер), в которой выполнять поиск
///   sz  - предельный размер буфера

int inString(char c, const char* str, size_t sz)
{
    for (size_t i = 0; i < sz && *str; i++, str++)
        if (*str == c)
            return 1;
    return 0;
}

/// Определяет уникальные латинские буквы в строке.
/// Регистр букв различается.
/// Принимает:
///   src - исходная строка для чтения
///   dst - принимающая строка (буфер) для записи
///   sz  - предельный размер буфера
/// Возвращает:
///   Количество символов, записанных в буфер

size_t readUniq(const char *src, char *dst, size_t sz)
{
    size_t cnt = 0;
    char ch;

    while ((ch = *src))
    {
        if (cnt >= sz)
            break;
        if (isAlpha(ch))
            if (!inString(ch, dst, cnt))
                dst[cnt++] = ch;
        src++;
    }
    return cnt;
}

/// Основная процедура

int main(void)
{
    static char buf[BUF_SZ] = {0};
    static char found[2*ALPHA_SZ+1] = {0};
    size_t f_cnt = 0;
    FILE *fp;

    fp = fopen(INFILE, "r+");
    if (!fp)
    {
        perror("INFILE opening failed");
        return EXIT_FAILURE;
    }
    fgets(buf, BUF_SZ, fp);
    fclose(fp);

    f_cnt = readUniq(buf, found, 2*ALPHA_SZ+1);
    sprintf(found+f_cnt, "\n");

    fp = fopen(OUTFILE, "w+");
    if (!fp)
    {
        perror("OUTFILE opening failed");
        return EXIT_FAILURE;
    }
    fputs(found, fp);
    fclose(fp);

    return EXIT_SUCCESS;
}

