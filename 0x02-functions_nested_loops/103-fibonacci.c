#include <stdio.h>
/**
 **main - printing sum of even fibonacci numbers in sequence
 **Return: returns 0
 **/

int main(void)
{
	unsigned long x = 0, y = 1, z = 0;
	unsigned long sumOfEven;

	sumOfEven = 0;
	while (z <= 4000000)
	{
		z = x + y;
		x = y;
		y = z;

		if ((x % 2) == 0)
			sumOfEven += x;

	}
	printf("%ld\n", sumOfEven);
	return (0);
}
