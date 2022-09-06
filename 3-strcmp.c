#include "main.h"

/**
 *_strcmp - compares two strings
 *@s1: first string
 *@s2: second string
 *Return: 0 if matching, and ns1 - ns2 if not matching
 */

int _strcmp(char *s1, char *s2)
{
	int n;

	for (n = 0; s1[n] != '\0' || s2[n] != '\0'; n++)
	{
		if (s1[n] != s2[n])
		{
			return (s1[n] - s2[n]);
		}
	}
	return (0);
}
