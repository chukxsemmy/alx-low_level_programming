#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - main class
 * @argc: count arguments passed to the function
 * @argv: argument vector of pointers to strings
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int i = 0, j, k;

	for (j = 1; j < argc; j++)
	{
		for (k = 0; argv[j][k]; k++)
		{
			if (isdigit(argv[j][k]) == 0)
			{
				puts("Error");
				return (1);
			}
		}
	}
	for (j = 1; j < argc; j++)
	{
		i += atoi(argv[j]);
	}
	printf("%d\n", i);
	return (0);
}
