/*
G4 ДЗ 1 "По одному разу"

В файле .txt даны два слова не более 100 символов каждое, разделенные одним пробелом.
Найдите только те символы слов, которые встречаются в обоих словах только один раз.
Напечатайте их через пробел в файл .txt в лексикографическом порядке.

Данные на входе:
  Два слова из маленьких английских букв через пробел.
Длина каждого слова не больше 100 символов.

Данные на выходе:
  Маленькие английские буквы через пробел.

Пример №1
Данные на входе:
  hello world 
Данные на выходе:
  o 

Данные на входе:
  aabcd bcef 
Данные на выходе:
  b c 
*/

#include <stdio.h>
#include <stdlib.h>

#define INFILE  "in.txt"
#define OUTFILE "out.txt"

#define MAXSTR 100
#define ALPHA   26
#define UNIQ_MARK   10

/// Проверяет, удовлетворяет ли символ условиям.
/// В данной задаче - символы латинские нижний регистр

int isValidChar(char ch)
{
    return (ch >= 'a') && (ch <= 'z');
}

/// Выводит в поток буквы, которые встречаются в
/// двух переданных словах ровно по одному разу в
/// алфавитном порядке.
///
/// Принимает:
///   word1 - указатель на первое слово
///   word2 - указатель на второе слово
///   fp    - поток (файл или stdout)

void printSingleLetters(char *word1, char *word2, FILE *fp)
{
    short a[ALPHA] = {0};
    char ch;

    while ((ch = *word1++))
    {
        if (!isValidChar(ch))
            continue;
        if (!a[ch-'a'])
            a[ch-'a'] = UNIQ_MARK;
        a[ch-'a']++;
    }
    while ((ch = *word2++))
    {
        if (!isValidChar(ch))
            continue;
        if (a[ch-'a'] > UNIQ_MARK+1)
            continue;
        a[ch-'a']--;
    }
    for (int i = 0; i < ALPHA; i++)
        if (a[i] == UNIQ_MARK)
            fprintf(fp, "%c ", i + 'a');
    fprintf(fp, "\n");
}

/// Считывает из потока одно слово (набор символов,
/// который заканчивается пробелом, переносом строки,
/// либо до появления признака конца файла EOF.
///
/// Принимает:
///   fp     - поток (файл или stdin)
///   buf    - буфер приема символов
///   sz     - размер буфера
/// Возвращает:
///   Количество символов, записанных в буфер

size_t fileReadWord(FILE *fp, char *buf, size_t sz)
{
    int c;
    size_t cnt = 0;
    while ((c = fgetc(fp)) != EOF)
    {
        if (cnt == sz)
            break;
        if (c == ' ' || c == '\n')
            break;
        buf[cnt++] = (char)c;
    }
    buf[cnt] = '\0';
    return cnt;
}

int main(void)
{
    char word1[MAXSTR+1];
    char word2[MAXSTR+1];
    FILE *fp;

    fp = fopen(INFILE, "r+");
    if (!fp)
    {
        perror("INFILE opening failed");
        return EXIT_FAILURE;
    }

    fileReadWord(fp, word1, MAXSTR);
    fileReadWord(fp, word2, MAXSTR);

    fclose(fp);

    fp = fopen(OUTFILE, "w+");
    if (!fp)
    {
        perror("OUTFILE opening failed");
        return EXIT_FAILURE;
    }

    printSingleLetters(word1, word2, fp);

    fclose(fp);

    return EXIT_SUCCESS;
}
