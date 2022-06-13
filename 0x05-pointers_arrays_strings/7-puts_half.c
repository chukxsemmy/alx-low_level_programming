#include "main.h"

/**
 *puts_half - puts half of a string
 *@str: string
 *Return: returning void
 */
void puts_half(char *str)
{
	int string = _strlen(str);

	if (string % 2 == 0)
		string = string / 2;
	else
		string = (string + 1) / 2;
	while (str[string] != '\0')
	{
		_putchar(str[string]);
		string++;
	}
	_putchar('\n');
}


/**
 *_strlen - returns the length of a string
 *@s:takes the value of the string
 *Return: returns lenght;
 */

int _strlen(char *s)
{
	int count, n = 0;

	for (count = 0; s[count] != '\0'; count++)
		n++;
	return (n);
}
