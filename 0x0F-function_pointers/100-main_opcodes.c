#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints opcode of own main function
 * @argc: argument count
 * @argv: arg value
 * Return: 1 on success else 2
 */

int main(int argc, char *argv[])
{

int index, bytes;
int (*adrs)(int, char **) = main;
unsigned char opcode;

if (argc != 2)
{
	printf("Error\n");
	exit(1);
}
bytes = atoi(argv[1]);

if (bytes < 0)
{
	printf("Error\n");
	exit(2);
}

for (index = 0; index <  bytes; index++)
{
	opcode = *(unsigned char *)adrs;
	printf("%.2x", opcode);

	if (index == bytes - 1)
		continue;
	printf(" ");
	adrs++;
}
printf("\n");
return (0);
}
