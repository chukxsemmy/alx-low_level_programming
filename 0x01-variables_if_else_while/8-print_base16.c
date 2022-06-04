#include <stdio.h>
#include <ctype.h>

/**
 **main - Printing digits of base 16 in lowercase
 **n is takes the value of the digit
 **Return: returns 0
**/

int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
		if (n == '9')
		{
			n = 'a';
			for (; n <= 'f'; n++)
			{
				putchar(n);
			}
			break;
		}
	}
	putchar('\n');
	return (0);
}
