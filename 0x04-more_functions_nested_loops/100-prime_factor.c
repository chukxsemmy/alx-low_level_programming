#include <stdio.h>

/**
 **main- printing the lagest prime number
 **n takes the value of the number lagest prime number
 **num takes the value of the number
 **Return: returns 0
 **/

int main(void)
{
	long num = 612852475143;
	int n;

	while (n++ < num / 2)
	{
		if (num % n == 0)
		{
			num /= 2;
			continue;
		}
		for (n = 3; n < num / 2; n += 2)
		{
			if (num % n == 0)
				num /= n;
		}
	}
	printf("%ld\n", num);
	return (0);
}
