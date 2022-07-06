#include "function_pointers.h"

/**
 * int_index - Search for an integer
 * @array:int
 * @size:int
 * @cmp:function
 * Return:index of the integer searched for
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a, b;

	if (size <= 0)
	{
		return (-1);
	}
		if (size && cmp != NULL && array != NULL)
		{
			for (a = 0; a < size; a++)
			{
				b = cmp(array[a]);
				if (b != 0)
					return (b);
			}
		}
	return (-1);

}
