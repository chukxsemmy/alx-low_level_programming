#include "main.h"

/**
 *sqrt_check - the square root of c
 *@g:guess
 *@c: number
 *Return: -1 or the square root of c
 */

int sqrt_check(int g, int c)
{
	if (g * g == c)
		return (g);
	if (g * g > c)
		return (-1);
	return (sqrt_check(g + 1, c));
}

/**
 *_sqrt_recursion - returns the natural square root of a number
 *@n: integer
 *Return: natural square root or -1
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (sqrt_check(1, n));
}
