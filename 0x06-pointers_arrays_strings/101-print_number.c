#include "main.h"

/**
 *print_number - prints an integer.
 *@n: integer
 *Return: void
 */

void print_number(int n)
{
	int x = 1, y, i;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	for (i = 0; n / x > 9; i++, x *= 10)
		;
	for (; x >= 1; n %= x, x /= 10)
	{
		y = n / x;
		_putchar('0' + y);
	}
}
