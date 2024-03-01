/*
G7 Практ 2 "Количество букв"

В файле .txt считать символьную строку, не более 10 000 символов.
Посчитать количество строчных (маленьких) и прописных (больших) букв в введенной строке.
Учитывать только английские буквы.
Результат записать в файл .txt.

Данные на входе:
  Строка состоящая из английских букв, цифр, пробелов и знаков препинания.

Данные на выходе:
  Два целых числа.
Количество строчных букв и количество заглавных букв.

Пример №1
Данные на входе:
  aabbAB 
Данные на выходе:
  4 2 

Пример №2
Данные на входе:
  HELLO WORLD 
Данные на выходе:
  0 10 

*/

#include <stdio.h>
#include <stdlib.h>

#define INFILE  "in.txt"
#define OUTFILE "out.txt"

#define ASTR_SIZE 10000
#define AINT_SIZE 2

typedef unsigned char bool_;
enum {C_LOWER, C_UPPER};

bool_ isUpper(char c)
{
    return (c >= 'A' && c <= 'Z');
}

bool_ isLower(char c)
{
    return (c >= 'a' && c <= 'z');
}

size_t countLetters(char *buf)
{
    static int cnt[AINT_SIZE] = {0};
    char ch, *start = buf;

    while ((ch = *buf++))
        if (isLower(ch))
            cnt[C_LOWER]++;
        else if (isUpper(ch))
            cnt[C_UPPER]++;

    return (size_t)sprintf(start, "%d %d", 
            cnt[C_LOWER], cnt[C_UPPER]);
}

#if  0
int main(int argc, char *argv[])
#else
int main(void)
#endif
{
    static char buf[ASTR_SIZE+1] = {0};
    size_t cnt = 0;

#if 0
    if (argc < 2)
        return EXIT_FAILURE;

    strcpy(buf, argv[1]);
#else
    FILE *fp;

    fp = fopen(INFILE, "r+");
    if (!fp)
    {
        perror("INFILE opening failed");
        return EXIT_FAILURE;
    }
    fgets(buf, ASTR_SIZE+1, fp);
    fclose(fp);
#endif

    cnt = countLetters(buf);

#if 0
    printf("%s\n", buf);
#else
    sprintf(buf+cnt, "\n");

    fp = fopen(OUTFILE, "w+");
    if (!fp)
    {
        perror("OUTFILE opening failed");
        return EXIT_FAILURE;
    }
    fputs(buf, fp);
    fclose(fp);
#endif

    return EXIT_SUCCESS;
}
/*

    return EXIT_SUCCESS;
}
*/
