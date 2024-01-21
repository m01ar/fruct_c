/*
C9 Практ 2
Факториал
Составить функцию вычисления N!. Использовать ее при вычислении факториала
int factorial(int n)

Данные на входе:       Целое положительное число не больше 20 
Данные на выходе:     Целое положительное число 

Пример №1
Данные на входе:       5 
Данные на выходе:     120
*/

#include <stdio.h>

int factorial(int n)
{
    int result = 1;
    while (n > 0)
        result *= n--;

    return result;
}


int main(void)
{
    int number;
    scanf("%d", &number);

    printf("%d\n", factorial(number));

    return 0;
}
