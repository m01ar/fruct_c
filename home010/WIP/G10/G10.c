/*
G10 "Самое длинное слово"

В файле .txt дана строка слов, разделенных пробелами.
Найти самое длинное слово и вывести его в файл .txt.
Случай, когда самых длинных слов может быть несколько, не обрабатывать.

Данные на входе:
  Строка из английских букв и пробелов.
Не более 1000 символов.

Данные на выходе:
  Одно слово из английских букв.

Пример
Данные на входе:
  Hello beautiful world 
Данные на выходе:
  beautiful 

*/

#include <stdio.h>

#define INFILE  "in.txt"
#define OUTFILE "out.txt"

int main(void)
{
    FILE *f = fopen(INFILE, "r+");



    fclose(f);
    return 0;
}
