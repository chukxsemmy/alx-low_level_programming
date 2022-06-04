#include <stdio.h>
#include <ctype.h>

/**
 **main - Prinint single digits of base 10
 ** n takes the value of each digit
 **Return: returns 0
**/

int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
