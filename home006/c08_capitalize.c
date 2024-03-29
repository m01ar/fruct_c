/*
   C8
   Большими буквами

   Составить функцию, которая переводит латинскую строчную букву 
   в заглавную. И показать пример ее использования.

   Данные на входе:
   Строка состоящая из английских букв, пробелов и запятых. 
   В конце строки символ точка. 

   Данные на выходе:
   Исходная строка в которой маленькие английские буквы заменены
   заглавными. 

   Пример №1
   Данные на входе:   hello World!. 
   Данные на выходе:  HELLO WORLD! 

   Пример №2
   Данные на входе:  abc, def. 
   Данные на выходе: ABC, DEF
   */

#include <stdio.h>

#define END_MARKER  '.'

void read_to_upper()
{
    char ch;
    while (scanf("%c", &ch) == 1 && ch != END_MARKER)
    {
        ch = (ch >= 'a' && ch <= 'z') ? ch - 'a' + 'A' : ch;
        printf("%c", ch);
    }
    puts("");
}


int main(void)
{
    read_to_upper();
    return 0;
}
