#include "main.h"

/**
 *print_to_98 - prints all natural numbers and prints 98 as last
 *Returns: 0
 *@n: takes the value of number to be printed
 */

void print_to_98(int n)
{
	for (n <= 0; n <= 98; n++)
	{
		_putchar(n);
		_putchar(',');
		_putchar(' ');
	}
	for (n > 98; n--)
	{
		_putchar(n);
		_putchar(',');
		_putchar(' ');
	}
	return (0);
}
