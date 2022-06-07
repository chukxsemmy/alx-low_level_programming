#include "main.h"

/**
 *_isalpha - checks for letters case
 *Return: 0 or 1
 *@c: verifiable character
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	return (0);
}
