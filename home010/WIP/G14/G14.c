/*
G14 "Hello name"

В файле .txt в одной строке фамилию, имя и отчество.
Сформировать файл приветствие .txt, где останутся имя и фамилия 

Данные на входе:
  Строка состоящая из английских букв и пробелов не более 100 символов.
Формат: Фамилия Имя Отчество 

Данные на выходе:
  Строка состоящая из английских букв и пробелов 

Пример
Данные на входе:
  Pupkin Vasiliy Ivanovich 
Данные на выходе:
  Hello, Vasiliy Pupkin! 

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
