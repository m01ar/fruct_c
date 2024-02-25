/*
G15 Демо 3 "Cao заменить на Ling"

В файле .txt дано предложение.
Необходимо заменить все имена «Cao» на «Ling» и записать результат в файл .txt.

Данные на входе:
  Строка из английский букв, знаков препинания и пробелов.
Не более 1000 символов.

Данные на выходе:
  Строка из английский букв, знаков препинания и пробелов.

Пример
Данные на входе:
  Cao, Cao, Cao and Cao!!! 
Данные на выходе:
  Ling, Ling, Ling and Ling!!! 

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
