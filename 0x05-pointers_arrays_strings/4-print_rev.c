#include "main.h"
/**
 *print_rev - printing a string in reverse
 *@s: takes the value of the string
 */

void print_rev(char *s)
{
	int str = 0, index = 0;

	str = _strlen(s);
	for (index = str - 1; index >= 0; index--)
		_putchar(s[index]);

	_putchar('\n');
}

/**
 *_strlen - returns the length of a string
 *@s: string
 *Return: lenght;
 */

int _strlen(char *s)
{
	int count, n;

	n = 0;
	for (count = 0; s[count] != '\0'; count++)
		n++;
	return (n);
}
