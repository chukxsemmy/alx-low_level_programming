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

	while (n++ <= 100)
		if ((n % 3) == 0)
			printf("Fizz ");
		else if ((n % 5) == 0)
			printf("Buzz ");
		else if (((n % 5) == 0) && (((n % 3) == 0)))
			printf("FizzBuzz ");
		else
			printf("%d ", n);
	printf("\n");
	return (0);
}
