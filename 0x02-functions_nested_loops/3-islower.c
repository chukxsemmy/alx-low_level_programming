#include "main.c"

/**
 *int _islower - checks for lowercase letter
 *
 *Return: 1 or 0
 *@c: letter to be verified
 */

int int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
