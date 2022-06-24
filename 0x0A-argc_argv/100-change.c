#include <stdio.h>
#include <stdlib.h>

/**
 * main - main class
 * @argc: count arguments
 * @argv: argument vector
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int i = 0, a, b, c;
	int arr[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		puts("Error");
		return (1);
	}
	a = atoi(argv[1]);
	if (a <= 0)
	{
		puts("0");
		return (1);
	}
	else
	{
		for (b = 0; b < 5; b++)
		{
			c = a / arr[b];
			a -= c * arr[b];
			i += c;
			if (a == 0)
				break;
		}
	}
	printf("%d\n", i);
	return (0);
}
