#include "main.h"
#include <stdio.h>

/**
 * print_name - prints name
 * @name : string value to be printed
 * @f: function pointer
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
