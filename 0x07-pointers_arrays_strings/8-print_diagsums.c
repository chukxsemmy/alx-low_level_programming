#include <stdio.h>
#include "main.h"

/**
 *print_diagsums - prints the sum of two diagonals of a square matrix
 *@a:array
 *@size:size of array
 */

void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0;
	int n;

	for (n = 0; n < size; n++)
	{
		sum1 += *(a + (size * n) + n);
		sum2 += *(a + (size * n + size - 1 - n));
	}
	printf("%d, ", sum1);
	printf("%d\n", sum2);
}
