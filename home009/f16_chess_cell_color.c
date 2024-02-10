/*
F16 ДЗ
Клетки

Известно, что шахматная доска имеет 
размерность 8х8 и состоит из клеток 2х 
цветов, например, черного и белого (см. 
рисунок). Каждая клетка имеет координату, 
состоящую из буквы и цифры. Горизонтальное 
расположение клетки определяется буквой 
от A до H, а вертикальное – цифрой от 1 до 8. 
Заметим, что клетка с координатой А1 имеет 
черный цвет. Требуется по заданной 
координате определить цвет клетки.

Данные на входе: В единственной строке 
записана координата клетки на шахматной 
доске: всего два символа – буква и цифра 
(без пробелов).
Данные на выходе: В выходной файл нужно 
вывести «WHITE», если указанная клетка имеет 
белый цвет и «BLACK», если она черная.

Пример №1
Данные на входе:  C3
Данные на выходе: BLACK

Пример №2
Данные на входе:  G8
Данные на выходе: WHITE
*/

#include <stdio.h>

#define SIZE    2

enum colors {COLOR_UNKNOWN, COLOR_BLACK, COLOR_WHITE};

int get_cell_color(char *name)
{
    char r = name[0];
    char c = name[1];
    int result = 0;

    if (r >= 'a' && r <= 'h')
        result = r - 'a' + 1;
    else if (r >= 'A' && r <= 'H')
        result = r - 'A' + 1;
    else
        return COLOR_UNKNOWN;

    if (c >= '1' && c <= '8')
        result *= (c - '0');
    else
        return COLOR_UNKNOWN;

    if (result % 2)
        return COLOR_BLACK;

    return COLOR_WHITE;
}

int input_cell(char *input)
{
    char ch;

    ch = getchar();
    if ((ch >= 'a' && ch <= 'h') ||
        (ch >= 'A' && ch <= 'H'))
        input[0] = ch;
    else
        return 0;

    ch = getchar();
    if ((ch >= '1' && ch <= '8'))
        input[1] = ch;
    else
        return 0;

    return 1;
}

int main(void)
{
    char input[SIZE+1] = {0};

    if (!input_cell(input))
        return 1;

    switch (get_cell_color(input))
    {
        case COLOR_BLACK:
            printf("BLACK" "\n");
            break;
        case COLOR_WHITE:
            printf("WHITE" "\n");
            break;
    }

    return 0;
}
