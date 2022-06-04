#include <stdio.h>
#include <ctype.h>

/**
 **main - printing alphabets in both lowercase and uppercase
 **n takes the value of letters of the alphabet
 **Return: return 0
**/
int main(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		n = tolower('n');
		putchar('n');
		if (n == 'z')
		{
			n = 'A';
			for (; n <= 'Z'; n++)
			{
				putchar('n');
			}
			break;
		}
	}
	putchar('\n');
	return (0);
}
