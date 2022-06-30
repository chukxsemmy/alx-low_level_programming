#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - array of integers.
 * @min: input min.
 * @max: input max.
 * Return: array.
 */

int *array_range(int min, int max)
{
	int *n;
	int i, list;

	list = (max - min) + 1;
	if (min > max)
	{
		return (NULL);
	}
	n = malloc(sizeof(int) * list);
	if (n == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++)
	{
		n[i] = min++;
	}
	return (n);
}
