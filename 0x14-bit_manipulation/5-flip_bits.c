#include "main.h"

/**
 * flip_bits - flips bits
 * @n: first number
 * @m: second number
 * Return: number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int counter = 0;
	int i;
	unsigned long int this_num;
	unsigned long int p_num = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		this_num = p_num >> i;
		if (this_num & 1)
			counter++;
	}

	return (counter);
}
