#include <stdio.h>

/**
 **main - printing number from 1 to 100.
 **prints fizz for multiples of 3 buzz for 5 and fizzBuzz for both
 **n: takes the value of each number considered
 **Return: 0
 **/

int main(void)
{
	int n;

	for (n = 1; a <= 100; n++)
	{
		if ((n % 3 == 0) && (n % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (n % 3 == 0)
		{
			printf("Fizz");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", n);
		}
		if (n != 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
