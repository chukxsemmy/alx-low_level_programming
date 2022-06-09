#include "main.h"
/**
 **print_line - printing a straight line
 **@n:takes the character for the line
 **Return: none
 **/

void print_line(int n)
{
	while (n-- > 0)
	{
		_putchar('_');
	}
	_putchar('\n');
}
