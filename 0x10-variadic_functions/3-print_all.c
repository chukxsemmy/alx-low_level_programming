#include "variadic_functions.h"

/**
 * integer_print - prints anything
 * @args: the list of parameters
 * Return: void
 */

void integer_print(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * char_print - print chars
 * @args: the list of parameters
 * Return: void
 */

void char_print(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * string_print - print strings
 * @args: the list of parameters
 * Return: void
 */

void string_print(va_list args)
{
	char *a;

	a = va_arg(args, char *);
	if (a == NULL)
		a = "(nil)";
	printf("%s", a);
}

/**
 * float_print - print floats
 * @args: the list of parameters
 * Return:no void
 */

void float_print(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_all - print anything
 * @format: the paramaters
 * Return: this function no return
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int b, c;
	char *separator;

	args_t arguments[] = {
		{"c", char_print},
		{"i", integer_print},
		{"f", float_print},
		{"s", string_print},
		{NULL, NULL}
	};
	va_start(args, format);
	b = 0;
	separator = "";
	while (format != NULL && *(format + b) != '\0')
	{
		c = 0;
		while (c < 4)
		{
			if (*(format + b) == *(arguments[c]).format)
			{
				printf("%s", separator);
				arguments[c].function(args);
				separator = ", ";

			}
			c++;
		}
		b++;
	}
	printf("\n");
	va_end(args);
}
