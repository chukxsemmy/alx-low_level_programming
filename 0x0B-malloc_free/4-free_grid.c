#include "main.h"

/**
 * free_grid - free a 2 dim array
 * @grid: memory block
 * @height: array height
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
		free(grid[a]);
	free(grid);
}
