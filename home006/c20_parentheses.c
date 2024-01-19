/*
C20 Задача со *
Скобки
Проверить строку состоящую из скобок "(" и ")" на корректность. 

Данные на входе: 		На вход подается строка состоящая из символов '(', ')' и заканчивающаяся символом '.'. Размер строки не более 1000 символов. 
Данные на выходе: 	Необходимо напечатать слово YES если скобки расставлены верно и NO в противном случае. 

Пример №1
Данные на входе: 		(()()). 
Данные на выходе: 	YES 

Пример №2
Данные на входе: 		()(. 
*/

#include <stdio.h>

#define END_MARK	'.'

int input_parens(void)
{
	char ch;
	int cnt = 0;
	while (scanf("%c", &ch) == 1 && ch != END_MARK)
	{
		switch (ch)
		{
			case '(':
				cnt++;
				break;
			case ')':
				cnt--;
				break;
		}
	}
	return cnt;
}


int is_input_valid(int (*f)(void))
{
	return 0 == f();
}


int main(void)
{
	if (is_input_valid(input_parens))
		printf("YES" "\n");
	else
		printf("NO" "\n");

	return 0;
}

