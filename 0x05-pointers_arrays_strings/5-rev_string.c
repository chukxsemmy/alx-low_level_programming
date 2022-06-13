#include "main.h"

/**
 *rev_string - Reverse a string
 *@s:takes the String value
 *Return: none
 */

void rev_string(char *s)
{
	int i = 0, len;

	len = _strlen(s) - 1;
	while (len > i)
	{
		swap_char(s + len, s + i);
		i++;
		len--;
	}
}

/**
 *_strlen - getting length of a string
 *@s: string
 *Return: returns lenght;
 */

int _strlen(char *s)
{
	int n = 0, count;

	for (count = 0; s[count] != '\0'; count++)
		n++;
	return (n);
}

/**
 *swap_char - swap two characters
 *@a: first character
 *@b: second character
 *Return: none
 */

void swap_char(char *a, char *b)
{
	char swp = *a;
	*a = *b;
	*b = swp;
}
