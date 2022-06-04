#include <stdio.h>
#include <ctype.h>

/**
 **main - Prints all single digits of base 10 followed by new line
 **
 **Return: returns 0
**/

int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n)
			;
	}
	putchar('\n');
	return (0);
}
