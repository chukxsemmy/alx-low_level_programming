#include "main.h"

/**
 *reverse_array - reverses the content of an array
 *@a: pointer
 *@n: array length
 *Return: void
 */

void reverse_array(int *a, int n)
{
	int rev, i = 0;

	for (rev = n / 2; rev > 0; rev--, i++)
	{
		a[n - i - 1] += a[i];
		a[i] = a[n - i - 1] - a[i];
		a[n - i - 1] = a[n - i - 1] - a[i];
	}
}
