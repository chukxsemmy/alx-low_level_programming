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
	int hgt;

	int wid;

	int spaces;

	for (hgt = 0; hgt < size; hgt++)
	{
		for (spaces = size - 1 - i; spaces > 0; spaces--)
		{
			_putchar(' ');
		}
		for (wid = 0; wid <= hgt; wid++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
