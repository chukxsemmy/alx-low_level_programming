#include <stdio.h>
#include <ctype.h>

/**
 **main - Printing digits with a comma
 **n takes the value of digits
 **Return: returns 0
**/

int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
		if (n == '9')
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
