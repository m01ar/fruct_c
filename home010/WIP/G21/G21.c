/*
G21 Демо 2+ "Равносторонние треугольники"

Cia очень любит равносторонние треугольники.
Он все время выкладывает их из камней.
Ling дал Cia камни и попросил его составить такой треугольник если это возможно.
Помогите Cia сложить треугольник используя все камни или напечатайте слов NO, если это невозможно.
Пример треугольников, которые составляет Cia:
  *
 * *
   *
  * *
 * * *
   *
  * * 
 * * * 
* * * * 
Во входном файле .txt записано некоторое количество символов * (камней).
Необходимо построить равносторонний треугольник используя все символы * и символ пробел, записать ответ в выходной файл .txt.
Между соседними символами * строго один пробел.
Если треугольник невозможно составить, используя все камни, то необходимо записать единственное слово NO в файл .txt.

Данные на входе:
  Текстовый файл состоит из различных символов и символов * 
Данные на выходе:
  Равносторонний треугольник составленный из символов *, символов пробела и символов переноса строк или слово NO

Пример №1
Данные на входе:
  *** 
Данные на выходе:
  *
* *

Пример №2
Данные на входе:
  ** hello world ***    * 
Данные на выходе:
  *
 * *
* * *

Пример №3
Данные на входе:
  **** 
Данные на выходе:
  NO 

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