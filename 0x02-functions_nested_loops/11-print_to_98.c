#include "main.h"
#include "stdio.h"

/**
 *print_to_98 - prints all natural numbers and prints 98 as last
 *Returns: none
 *@n: takes the value of number to be printed
 */

void print_to_98(int n)
{
	if (n > 99)
	{
		while (n > 98)
			printf("%d", ", ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d", ", ", n++);
		printf("%d\n", n);
	}
}
