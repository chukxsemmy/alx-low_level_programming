#include "main.h"

/**
 *puts2 - printing part of a string
 *@str: takes the value of string
 *Return: returning void
 */
void puts2(char *str)
{
	int n = 0;

	while (str[n] != '\0')
	{
		if (n % 2 == 0)
			_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
