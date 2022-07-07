#include "variadic_functions.h"

/**
 * print_strings - printing strings
 *@separator: the number of parameters
 *@n: the number of strings
 * Return: none.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	va_list strings;
	char *string;

	va_start(strings, n);

	a = 0;
	while (a < n)
	{
		string = va_arg(strings, char*);
		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);
		if (a != (n - 1) && separator != NULL)
			printf("%s", separator);
		a++;
	}
	printf("\n");
	va_end(strings);
}
