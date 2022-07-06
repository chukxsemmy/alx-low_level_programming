#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints opcode of own main function
 *
 * @argc: argument count
 * @argv: arg value
 * Return: int
 */

int main(int argc, char *argv[])
{
	int a, b;
	unsigned char *c;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	a = atoi(argv[1]);
	if (a < 0)
	{
		printf("Error\n");
		exit(2);
	}
	c = (unsigned char *)main;
	b = 0;
	if (a > 0)
	{
		while (b < (a - 1))
			printf("%02hhx ", c[b++]);
		printf("%hhx\n", c[b]);
	}
	return (0);
}
