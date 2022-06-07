#include "main.h"

/**
 *times_table - prints 9 times table starting from zero
 *Returns: 0
 *@times_table: takes the value of numbers
 */

void times_table(void times_table)
{
	int times_table, n;

	for (times_table = 0; times_table <= 9; times_table++)
	{
		for (n = 0; n <= 9; n++)
		{
			n = n * n;
			_putchar(n)
		}
		times_table = times_table * times_table;
		_putchar(times_table);
	}
	return (0);
}
