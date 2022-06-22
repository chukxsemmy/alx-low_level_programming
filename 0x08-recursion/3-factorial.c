#include "main.h"

/**
 *factorial - factorial of a number
 *@n: integer number
 *Return: factorial of n, or -1 if n greater 0
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
