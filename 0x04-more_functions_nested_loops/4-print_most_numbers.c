#include "main.h"

/**
 **print_most_numbers - printing numbers 0 to 9, except 2 and 4
 **n: returns the value of all numbers to be printed
 **Return: returns nothing
 **/

void print_most_numbers(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		if ((n == 50) || (n == 52))
		{
			continue;
		}
		_putchar(n);
	}
	_putchar(10);
}
