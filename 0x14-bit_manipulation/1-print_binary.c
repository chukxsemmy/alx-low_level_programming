#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */

void print_binary(unsigned long int n)
{
	int i, counter = 0;
	unsigned long int this_num;

	for (i = 63; i >= 0; i--)
	{
		this_num = n >> i;

		if (this_num & 1)
		{
			_putchar('1');
			counter++;
		}
		else if (counter)
			_putchar('0');
	}
	if (!counter)
		_putchar('0');
}
