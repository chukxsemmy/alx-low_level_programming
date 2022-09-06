#include "main.h"

/**
 *_strlen - length of a string
 *@s: string to be evaluated
 *Return: lenght;
 */

int _strlen(char *s)
{
	int n, count;

	n = 0;
	for (count = 0; s[count] != '\0'; count++)
		n++;
	return (n);
}
