#include <std.io>

/**
 *print_triangle - printing a triangle
 *@size: takes the size of the trangle
 *hgt takes the height of the triangle
 *wid takes the width of the trangle
 *Return: 0
 */

void print_triangle(int size)
{
	int hgt, wid;

	if (size > 0)
	{
		for (hgt = 1; hgt <= size; hgt++)
		{
			for ((wid = size - hgt); wid > 0; wid--)
				_putchar(' ');
			for (wid = 0; wid < hgt; wid++)
				_putchar('#');
			if (hgt == size)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
