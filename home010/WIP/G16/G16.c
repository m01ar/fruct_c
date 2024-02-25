/*
G16 Практ 3 "Ling заменить на Cao"

В файле .txt дано предложение.
Необходимо заменить все имена «Ling» на «Cao» и результат записать в файл .txt.

Данные на входе:
  Строка из английских букв, пробелов и знаков препинания.
Не более 1000 символов.

Данные на выходе:
  Строка из английских букв, пробелов и знаков препинания.

Пример
Данные на входе:
  Ling, Ling, Ling and Ling!!! 
Данные на выходе:
  Cao, Cao, Cao and Cao!!! 

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
