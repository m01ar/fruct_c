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

#define S_SIZE  1000
#define N_SIZE  64

#define BASE    10

#define STR(EXPR) #EXPR
#define SCANSTR(LEN) "%" STR(LEN) "s"

/// Определяет, является ли символ цифрой
/// Принимает:
///   c - символ для проверки
/// Возвращает:
///   0 - если символ не является цифрой
///   1 - если символ является цифрой

int isDigit(char c)
{
    return (c >= '0' && c <= '9');
}

/// Вспомогательная процедура для readNumbers.
/// Выполняет запись числа в массив
/// Принимает:
///   flag - флаг окончания потока цифр
///   n    - число, помещаемое в массив
///   ary  - массив чисел для записи
///   c    - счетчик элементов массива чисел

void store_n(int *flag, int *n, int *ary, size_t *c)
{
    if (!*flag)
        return;
    *flag = 0;
    ary[*c] = *n;
    *c += 1;
    *n = 0;
}

/// Считывает числа из буфера в массив
/// Принимает:
///   buf - строковый буфер для чтения
///   ary - массив чисел для записи
///   sz  - размер массива чисел
/// Возвращает:
///   Количество чисел, записанных в массив

size_t readNumbers(char *buf, int *ary, size_t sz)
{
    size_t count = 0;
    size_t buf_sz = strlen(buf);
    int num = 0;
    int write = 0;

    for (size_t i = 0; i < buf_sz; i++)
    {
        if (count >= sz)
            break;

        if (!isDigit(buf[i]))
        {
            store_n(&write, &num, ary, &count);
            continue;
        }

        if (write)
            num *= BASE;
        else
            write = 1;

        num += buf[i]-'0';
    }
    store_n(&write, &num, ary, &count);
    return count;
}

/// Компаратор для qsort

int cmpInt(const void *a, const void *b)
{
    return ( *(int *)a - *(int *)b );
}

/// Распечатывает содержимое массива чисел
/// Принимает:
///   ary - массив чисел
///   sz  - размер массива чисел

void printAry(const int *ary, size_t sz)
{
    for (size_t i = 0; i < sz; i++)
        printf("%d ", ary[i]);
}

/// Записывает содержимое массива в одну строку
/// Принимает:
///   ary - массив чисел для чтенив
///   sz  - размер массива чисел
///   buf - строковый буфер для записи
/// Возвращает:
///   Количество символов, записанных в буфер

size_t writeBuf(int *ary, size_t sz, char* buf)
{
    int count = 0;
    for (size_t i = 0; i < sz; i++)
    {
        if (i > 0)
            count += sprintf(buf+count, " ");
        count += sprintf(buf+count, "%d", ary[i]);
    }

    return (size_t)count;
}

/// Выполняет преобразование данных в буфере:
/// 1. Считывание содержащихся в буфере чисел в массив
/// 2. Сортировка массива
/// 3. Сохранение массива обратно в буфер
/// Принимает:
///   buf - строковый буфер для чтения и записи
/// Возвращает:
///   Количество символов, записанных в буфер

size_t filterNum(char *buf)
{
    static int numbers[N_SIZE] = {0};
    size_t count = readNumbers(buf, numbers, N_SIZE);
    if (!count)
       return 0;
    qsort(numbers, count, sizeof(int), cmpInt);
    count = writeBuf(numbers, count, buf);
    count += (size_t)sprintf(buf+count, "\n");
    return count;
}

/// Основная процедура

int main(void)
{
    static char buf[S_SIZE] = {0};
    FILE *fp;
// Получение строки из файла в буфер
    fp = fopen(INFILE, "r+");
    if (!fp)
    {
        perror("INFILE opening failed");
        return EXIT_FAILURE;
    }
    fgets(buf, S_SIZE, fp);
    fclose(fp);
// Обработка строки в буфере
    if (!filterNum(buf))
    {
        puts("No numbers");
        return EXIT_SUCCESS;
    }
// Сохранение измененного буфера в файл
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

#if 0 // Тестовая программа
int main(void)
{
    static char dummy[S_SIZE] = 
        "data 48 call 9 read13 blank0a 3";

    static int numbers[N_SIZE] = {0};

    size_t count =
        readNumbers(dummy, numbers, N_SIZE);

    printf("count: %d\n", (int)count);

    printAry(numbers, count);
    puts("");

    qsort(numbers, count, sizeof(int), cmpInt);

    printAry(numbers, count);
    puts("");

    writeBuf(numbers, count, dummy);
    printf("result: \"%s\"\n", dummy);
}
#endif

