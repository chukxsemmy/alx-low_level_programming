#include <stdio.h>

/**
 **main - printing first 50 fibonacci suit numbers
 **Return: returns 0
 *n holds the value of each digit or number
 **/
int main(void)
{
	unsigned long n1 = 0, n2 = 1, n3;
	int fib;

	for (fib = 0; fib < 50; fib++)
	{
		n3 = n1 + n2;
		printf("%lu", n3);
		n1 = n2;
		n2 = n3;

		if (fib == 49)
			printf("\n");
		else
			printf(", ");

	}

	return (0);
}
