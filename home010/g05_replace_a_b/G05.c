/*
G5 ДЗ 2 "Заменить a на b"

В файле .txt дана символьная строка не более 1000 символов.
Необходимо заменить все буквы "а" на буквы "b" и наоборот, как заглавные, так и строчные.
Результат записать в .txt.

Данные на входе:
  Строка из маленьких и больших английских букв, знаков препинания и пробелов.

Данные на выходе:
  Строка из маленьких и больших английских букв, знаков препинания и пробелов.

Пример
Данные на входе:
  aabbccddABCD 
Данные на выходе:
  bbaaccddBACD 
*/

#include <stdio.h>
#include <stdlib.h>

#define INFILE  "in.txt"
#define OUTFILE "out.txt"

#define SIZE    1024

void replaceAB(char *buf)
{
    while (*buf)
    {
        switch (*buf)
        {
            case 'a':
            case 'A':
                *buf += 1;
                break;
            case 'b':
            case 'B':
                *buf -= 1;
                break;
        }
        buf++;
    }
}

int main(void)
{
    char buf[SIZE] = {0};
    FILE *fp;

    fp = fopen(INFILE, "r+");
    if (!fp)
    {
        perror("INFILE opening failed");
        return EXIT_FAILURE;
    }
    fgets(buf, SIZE, fp);
    fclose(fp);

    replaceAB(buf);

    fp = fopen(OUTFILE, "w+");
    if (!fp)
    {
        perror("OUTFILE opening failed");
        return EXIT_FAILURE;
    }
    fputs(buf, fp);
    fclose(fp);

    return EXIT_SUCCESS;
}
