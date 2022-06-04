#include <stdio.h>
#include <ctype.h>

/**
 **main - Printing alphabets in reverse order
 **n takes the value of alphabetical letters
 **Return: return 0
**/

int main(void)
{
	int n;

	for (n = 'z'; n >= 'a'; n--)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
