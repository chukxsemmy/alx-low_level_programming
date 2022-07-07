#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - performs simple operations
 * @argc: arguement count
 * @argv: arguement value
 * Return: 0
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int num1, num2;
	char *cal;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	cal = argv[2];
	num2 = atoi(argv[3]);
	if (get_op_func(cal) == NULL || cal[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*cal == '/' && num2 == 0) || (*cal == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(op)(num1, num2));
	return (0);
}
