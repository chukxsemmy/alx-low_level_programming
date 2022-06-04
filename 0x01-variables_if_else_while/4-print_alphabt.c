#include <stdio.h>
#include <ctype.h>

/**
 **main - Program to print alphabet letters except q and e followed by new line
 **
 **Return: return 0
**/

int main(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		if (n == 'q' || n == 'e')
		{
			continue;
		}
		putchar(n);
	}
	putchar('\n');
	return (0);
}
