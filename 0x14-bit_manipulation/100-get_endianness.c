#include "main.h"

/**
 * get_endianness - checks if machine is little or big endian
 * Return: 0 for big or 1 for little
 */
int get_endianness(void)
{
	unsigned int n = 1;
	char *c = (char *) &n;

	return (*c);
}
