#include <stdio.h>
/**
 **main - printing sum of even fibonacci numbers in sequence
 **Return: returns 0
 **/

int main(void)
{
	unsigned long n1 = 0, n2 = 1, n3 = 0, sumOfEven = 0;
	while (n3 <= 4000000)
	{
		n3 = n1 + n2;
		n1 = n2;
		n2 = n3;

		if ((n1 % 2) == 0)
			sumOfEven += n1;

	}
	printf("%ld\n", sumOfEven);
	return (0);
}
