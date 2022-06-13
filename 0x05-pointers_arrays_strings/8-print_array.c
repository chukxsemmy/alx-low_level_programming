#include "main.h"

/**
 *print_array - printing n elements of an array
 *@a: array
 *@n: number of elements
 *Return: none
 */

void print_array(int *a, int n)
{
	int elem;

	for (elem = 0; elem < n ; elem++)
	{
		if (elem != n - 1)
			printf("%d, ", a[elem]);
		else
			printf("%d", a[elem]);
	}
	printf("\n");
}
