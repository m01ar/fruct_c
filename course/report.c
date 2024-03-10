#include <stdio.h>
#include <stdlib.h>
#include "temp_api.h"

#define CSV_SMALL "data/temperature_small.csv"
#define CSV_BIG   "data/temperature_big.csv"

#define L_SIZE 1024

//static const record_s EmptyRecord;

#define CHUNK_SIZE 65536

int count_lines(FILE* fp)
{
    char buf[CHUNK_SIZE];
    int counter = 0;
    int flag = 0;
    size_t buf_cnt;

    rewind(fp);
    while (!feof(fp))
    {
        buf_cnt = fread(buf, 1, CHUNK_SIZE, fp);
        if (ferror(fp))
            return -1;

        for(size_t i = 0; i < buf_cnt; i++)
            if (buf[i] != '\n' && !flag)
                flag = 1, counter++;
            else if (buf[i] == '\n' && flag)
                flag = 0;
    }
    return counter;
} // count_lines

int loadCsv()
{
    return 0;
}

void printHelp()
{
    // -h         --help      Print this help
    //
    // Mandatory parameters:
    // -f <file>  --csv=file  Read data from CSV file
    //
    // Optional parameters:
    // -m <month> --month=m   Specify moth for stats
    // -v         --verbose   Increase program verbosity
}

void file_parsing_test()
{
    FILE *fp;
    record_s test_record;
    int a_cnt = 0, l_cnt = 0;
    unsigned char month;
    char buf[L_SIZE];

    fp = fopen(CSV_SMALL, "r+");
    if (fp == NULL)
    {
        perror(CSV_SMALL);
        exit(EXIT_FAILURE);
    }

    while (fscanf(fp, "%s", buf) == 1)
    {
        a_cnt = sscanf(buf,
                "%hu;%hhu;%hhu;%hhu;%hhu;%hhd",
                &test_record.year,
                &month,//test_record.mt,
                &test_record.dd,
                &test_record.hh,
                &test_record.mm,
                &test_record.temperature);
        test_record.mt = (month_t)month;
        printf("%d  ", test_record.temperature);
        l_cnt++;
        if (a_cnt == 6)
            printf("Line %d read OK\n", l_cnt);
        else
            printf("Line %d read ER\n", l_cnt);
    }

    fclose(fp);
}

int main(void)//int argc, char *argv[])
{
    FILE *fp;
    int count = 0;

    record_s *data;

    fp = fopen(CSV_SMALL, "r+");
    if (fp == NULL)
    {
        perror(CSV_SMALL);
        return EXIT_FAILURE;
    }

    count = count_lines(fp);
    if (count < 0)
        return EXIT_FAILURE;

    printf("File \"%s\" has %d lines\n", CSV_SMALL, count);

    if (count < 1)
    {
        printf("Nothing to do.\n");
        goto cleanup;
    }

    data = malloc((size_t)count * sizeof(record_s));
    if (data == NULL)
    {
        perror("Array allocation");
        goto cleanup;
    }

    //    file_parsing_test();

cleanup:
    free(data);
    fclose(fp);
    return 0;
} // main
