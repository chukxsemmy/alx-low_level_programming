#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - generating a random password
 *Return: the password
 */

int main(void)
{
	int a;
	char b;

	srand(time(0));
	while (a <= 2645)
	{
		b = rand() % 128;
		a += b;
		putchar(b);
	}
	putchar(2772 - a);
	return (0);
}
