#include <stdio.h>

/**
 **main - sum of multiples of 3 or 5 below 1024
 **Return: return 0
 *n takes the value of numbers
 */

int main(void)
{
	int sumMul = 0;
	int n;

	for (n = 0; n < 1024; n++)
	{
		if ((n % 3) == 0 || (n % 5) == 0)
			sumMul += n;
	}
	printf("%d\n", sumMul);
	return (0);
}
