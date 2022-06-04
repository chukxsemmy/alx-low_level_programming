#include <stdio.h>
#include <ctype.h>

/**
 **main - printing alphabets
 ** n takes the value of digits
 **Return: return 0
**/

int main(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		n = tolower(n);
		putchar(n);
	}
	putchar('\n');
	return (0);
}
