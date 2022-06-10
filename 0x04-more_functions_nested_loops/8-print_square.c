#include "main.h"

/**
 **print_square - printing a square
 **@size: takes the size of the square
 **len: lenght of the square
 **wid: width of the square
 **Return: none
 **/

void print_square(int size)
{
	int len, wid;

	if (size > 0)
	{
		for (len = 0; len < size; len++)
		{
			for (wid = 0; wid < (size - 1); wid++)
			{
				_putchar('#');
			}
			_putchar('#');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
