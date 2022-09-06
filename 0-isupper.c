#include "main.h"

/**
 **_isupper - uppercase function checker
 **@c: character to be tested
 **Return: returns 1 for uppercase and 0 if otherwise
 **/

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	return (0);
}
