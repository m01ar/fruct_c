/*
E16 Д3 6
Чаще других
Дан массив из 10 элементов. Определить, 
какое число в массиве встречается чаще 
всего. Гарантируется, что такое число ровно 
1. 

Данные на входе:
  10 целых числе через пробел 
Данные на выходе:
  Одно число, которое встречается чаще 
других. 

Пример
Данные на входе:
  4 1 2 1 11 2 34 11 0 11 
Данные на выходе:
  11 
*/

#include <stdio.h>
#include <stdlib.h>
#include "../mylib/myAryFunc.h"

#define SIZE    10

/// Запись словаря частот появления чисел типа int

typedef struct {
    int val;
    unsigned char cnt;
} frqDictItem;

/// Подсчет частоты появления чисел в массиве типа int
/// Параметры:
///   int ary[]   - обрабатываемый массив
///   int sz      - размер массива ary
///   frqDictItem *frq - словарь частот (указатель на
///                      массив экземпляров структуры)
/// Возврат:
///   Количество записей, добавленных в словарь частот

int aryCalcFreqsInt(int ary[], int sz, frqDictItem *frq)
{
    int fcnt = 0;
    int found;
    for (int i = 0; i < sz; i++)
    {
        found = 0;
        for (int j = 0; j < fcnt; j++)
        {
            if (frq[j].val == ary[i])
            {
                frq[j].cnt++;
                found = 1;
                break;
            }
        }
        if (!found)
        {
            frq[fcnt].val = ary[i];
            frq[fcnt].cnt++;
            fcnt++;
        }
    }
    return fcnt;
}

/// Поиск наиболее часто встречающегося числа в массиве int
/// Параметры:
///   int ary[]   - обрабатываемый массив
///   int sz      - размер массива ary
/// Возврат:
///   Значение, которое встречается в массиве чаще всего

int aryMostFrequentInt(int ary[], int sz)
{
// Выделяем память под словарь
    frqDictItem *frqDict = malloc(sizeof(frqDictItem) * sz);
    if (frqDict == NULL)
        return -1;
// Обнуляем память под словарь
    for (int i = 0; i < sz; i++)
        frqDict[i] = (frqDictItem){.val=0,.cnt=0};
// Заполняем словарь
    int frqDictCnt = aryCalcFreqsInt(ary, sz, frqDict);
// Находим в словаре запись с наибольшей частотой
    int max_c = 0, max_i = 0;
    for (int i = 0; i < frqDictCnt; i++)
        if (frqDict[i].cnt > max_c)
            max_i = i, max_c = frqDict[i].cnt;
// Запоминаем значение
    int result = frqDict[max_i].val;
// Прибираемся
    free(frqDict);
    return result;
}

int main(void)
{
    int data[SIZE] = {0};
    aryInputInt(data, SIZE);

    printf("%d\n", aryMostFrequentInt(data, SIZE));

    return 0;
}
