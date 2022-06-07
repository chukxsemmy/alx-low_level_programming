#include "main.h"

/**
 *times_table - prints 9 times table starting from zero
 *Return: no return value
 */

void times_table(void)
{
	int x, y, mul;

	for (x = 0; x <= 9; x++)
	{
		_putchar ('0');
		for (y = 1; y <= 9; y++)
		{
			_putchar(',');
			_putchar(' ');
			mul = x * y;
		if (mul <= 9)
		{
			_putchar (' ');
		}
		else
		{
			_putchar((mul / 10) + '0');

			_putchar((mul % 10) + '0');
		}
		}
		_putchar('\n');
	}
}
