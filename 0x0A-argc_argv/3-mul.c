#include <stdio.h>

/**
 * main - main class
 * @argc: count arguments passed to a function
 * @argv: argument vector of pointer to string
 * Return: 1 or 0
 */

int main(int argc, char *argv[])
{
	int i, j, k;

	if (argc != 3)
	{
		puts("Error");
		return (0);
	}
	i = atoi(argv[1]);
	j = atoi(argv[2]);
	k = i * j;
	printf("%d\n", c);
	return (0);
}
