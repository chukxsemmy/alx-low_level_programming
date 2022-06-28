#include "main.h"

/**
 * alloc_grid - pointer to a 2 dim arr of integers
 * @width: width
 * @height: height
 * Return: pointer to arr
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int b = 0, a;

	if (width == 0 || height == 0)
		return (NULL);
	arr = (int **) malloc(sizeof(int *) * height);
	if (arr != NULL)
	{
		for (; b < height; b++)
		{
			arr[b] = (int *) malloc(sizeof(int) * width);
			if (arr[b] != NULL)
			{
				for (a = 0; a < width; a++)
					arr[b][a] = 0;
			}
			else
			{
				while (b >= 0)
				{
					free(arr[b]);
					b--;
				}
				free(arr);
				return (NULL);
			}
		}
		return (arr);
	}
	else
	{
		return (NULL);
	}
}
