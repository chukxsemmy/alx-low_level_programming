#include "main.h"
/**
 **_isdigit - checks for digits between 0 and 9
 **@c: character to be tested
 **Return: returns 1 if number is between 0 and 9 and returns 0 if otherwise
 **/

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	return (0);
}
