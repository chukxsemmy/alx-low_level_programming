#include "main.h"

/**
 *times_table - prints 9 times table starting from zero
 *Returns: 0
 *@x: takes the value of numbers
 */

void times_table(void x)
{
	int x, n;

	for (x = 0; x <= 9; x++)
	{
		for (n = 0; n <= 9; n++)
		{
			n = n * n;
			_putchar(n)
		}
		x = x * x;
		_putchar(x);
	}
	return (0);
}
