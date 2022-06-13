#include "main.h"

/**
 *_puts - printing a string
 *@str: takes the value of string
 */

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
