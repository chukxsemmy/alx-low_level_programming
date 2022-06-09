#include "main.h"

/**
 **print_diagonal - prints a diagonal line of the slanted character
 **@n:holds the value for the lines
 **pos: position to print the character
 **dis: distance between the begining line and the charcater
 **Return: none
 **/

void print_diagonal(int n)
{
	int pos, dis;

	if (n > 0)
	{
		for (dis = 0; dis < n; dis++)
		{
			for (pos = 0; pos < dis; pos++)
				_putchar(' ');
			_putchar('\\');
			if (dis == (n - 1))
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
