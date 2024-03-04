#include <stdio.h>

int main(void)
{
	int s = 10000;

	printf("%d = ", s);

	int h = s / 3600;
	s -=  h * 3600;
	int m = s / 60;
	s -= m * 60;

	printf("%0d:%0d:%0d\n", h, m, s);
}
