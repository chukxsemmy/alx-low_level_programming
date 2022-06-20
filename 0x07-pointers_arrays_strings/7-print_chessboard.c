#include "main.h"

/**
 *print_chessboard - prints the chessboard
 *@a:array input
 *Return:void
 */

void print_chessboard(char (*a)[8])
{
	int row, col;

	for (row = 0; row < 8; row++)
	{
		for (col = 0; col < 8; col++)
		{
			_putchar(*(*(row + a) + col));
		}
		_putchar('\n');
	}
}
