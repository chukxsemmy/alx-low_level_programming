#include <stdio.h>

/**
 * main - main class
 * @argc: count arguments passed to the function
 * @argv: argument vector of pointers to strings
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
