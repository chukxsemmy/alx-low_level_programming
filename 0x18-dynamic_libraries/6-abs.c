#include "main.h"

/**
 *_abs - computes the absolute value of an interger
 *Return: none
 *@n: carries the number to be evaluated
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (0);
	}
}
