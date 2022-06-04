#include <stdio.h>
#include <ctype.h>

/**
 **main - Program to print alphabet letters in all cases followed by new line
 **
 **Return: return 0
 **/

int main(void)
{
	int alphabet;
	
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
	       alphabet	= tolower(alphabet);
	       putchar(alphabet);
	       if (alphabet == 'z')
	       {
		       alphabet = 'A';
		       
		       for (; alphabet <= 'Z'; alphabet++)
		       {
			       putchar(alphabet);
		       }
		       break;
	       }
	}
	putchar('\n');
	return (0);
}
