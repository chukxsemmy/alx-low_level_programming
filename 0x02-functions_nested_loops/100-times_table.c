#include "main.h"

/**
 **print_times_table - prints times table from 1 to 15
 *Return: none
 *@n: takes the value of numbers
 */

void print_times_table(int n)
{
	int x, y, mul;

	if (n <= 15 && n >= 0)
	{
		for (x = 0; x <= n; x++)
		{
			_putchar('0');
			for (y = 1; y <= n; y++)
			{
				_putchar(',');
				_putchar(' ');
				mul = x * y;
				if (mul < 100)
					_putchar(' ');
				if (mul <= 9)
					_putchar(' ');
				if (mul >= 100)
				{
					_putchar((mul / 100) + '0');
					_putchar((mul / 10) % 10 + '0');
				}
				else if (mul < 100 && mul >= 10)
				{
					_putchar((mul / 10) + '0');
				}
				_putchar((mul % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
