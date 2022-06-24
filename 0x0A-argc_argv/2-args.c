#include <stdio.h>

/**
 * main - main class
 * @argc: count argumnets passed to a funtion
 * @argv: argument vector of pointer to string
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int n;

	for (n = 0; n < argc; n++)
		printf("%s\n", argv[n]);
	return (0);
}
