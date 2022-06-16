#include "main.h"

/**
 *string_toupper - capitalize a string
 *@str: pointer
 *Return: capitalzied string
 */

char *string_toupper(char *str)
{
	int n;

	for (n = 0; str[n] != '\0'; n++)
	{
		if (str[n] <= 'z' && str[n] >= 'a')
			str[n] -= 32;
	}
	return (str);
}
