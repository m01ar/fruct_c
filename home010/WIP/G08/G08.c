/*
G8 ДЗ 3 "Числа в массив"

В файле .txt дана строка, не более 1000 символов, содержащая буквы, целые числа и иные символы.
Требуется все числа, которые встречаются в строке, поместить в отдельный целочисленный массив.
Например, если дана строка "data 48 call 9 read13 blank0a", то в массиве числа 48, 9, 13 и 0.
Вывести массив по возрастанию в файл .txt.

Данные на входе:
  Строка из английских букв, цифр и знаков препинания 
Данные на выходе:
  Последовательность целых чисел отсортированная по возрастанию 

Пример
Данные на входе:
  data 48 call 9 read13 blank0a 
Данные на выходе:
  0 9 13 48 
*/

#include <stdio.h>
#include <stdlib.h>

#define INFILE  "in.txt"
#define OUTFILE "out.txt"

#define SIZE    1024

#define MAXSTR  127
#define ITEM_SZ 16

#define STR(EXPR) #EXPR
#define SCANSTR(LEN) "%" STR(LEN) "s"

int readInts(char *buf, int *ary, size_t sz)
{
}

#if 0
size_t aryToBuf(
        char *buf, size_t bsz, // Строковой буфер
        int  *ary, size_t asz) // Массив чисел
{
    size_t bi = 0;
    for (size_t ai = 0; ai < asz; ai++)
    {
        item_len = sprintf(&item, "%d", ary[ai]);

        bi += sprintf(&buf[bi], "%d", ary[ai]);
    }
    buf[bi++] = '\0';
    return bi;
}
#endif

size_t aryToBuf(char *buf, const int *ary, size_t sz)
{
    char item[ITEM_SZ];
    int item_len = 0;
    for (size_t i = 0; i < sz; i++)
    {
    }
}

int main(void)
{
    char buf[SIZE] = {0};
    int  intAry[SIZE] = {5, 12, 153, -10};//{0};
    
    size_t len = aryToBuf(buf, SIZE, intAry, SIZE);

    printf("(%d) \"%s\"\n", len, buf);

#if 0
    FILE *fp;

    fp = fopen(INFILE, "r+");
    if (!fp)
    {
        perror("INFILE opening failed");
        return EXIT_FAILURE;
    }
    fgets(buf, SIZE, fp);
    fclose(fp);


    if (!readInts(buf, SIZE, intAry, SIZE))
    {
        puts("No numbers");
        return EXIT_SUCCESS;
    }

//    qsort();

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
