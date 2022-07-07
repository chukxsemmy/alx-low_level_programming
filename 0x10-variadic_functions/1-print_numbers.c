#include "variadic_functions.h"

/**
 * print_numbers - print all the parametes.
 * @separator: the number of parameters
 * @n: the number of parameters
 * Description: this function prints all the parameters)
 * Return: no retunr.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int a;

	a = 0;

	va_start(num, n);
	while (a < n)
	{
		printf("%d", va_arg(num, unsigned int));
		if (a < (n - 1) && separator != NULL)
			printf("%s", separator);
		a++;
	}
	va_end(num);
	printf("\n");
}
