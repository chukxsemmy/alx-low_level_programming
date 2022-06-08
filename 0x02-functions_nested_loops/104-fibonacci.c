#include <stdio.h>
/**
 **main - printing the first 98 Fibonacci numbers, starting with 1 and 2
 **Return: return 0
 **/
int main(void)
{
	int fib;
	unsigned long n1 = 0, n2 = 1, n3;
	unsigned long row1, row2, row3, row4;
	unsigned long col1, col2;

	for (fib = 0; fib < 92; fib++)
	{
		n3 = n1 + n2;
		printf("%lu, ", n3);
		n1 = n2;
		n2 = n3;
	}
	row1 = n1 / 10000000000;
	row2 = n2 / 10000000000;
	row3 = n1 % 10000000000;
	row4 = n2 % 10000000000;
	for (fib = 93; fib <= 98; fib++)
	{
		col1 = row1 + row3;
		col2 = row2 + row4;
		if ((row2 + row4) > 9999999999)
		{
			col1 += 1;
			col2 %= 10000000000;
		}
		printf("%lu%lu", col1, col2);
		if (fib != 98)
			printf(", ");

		row1 = row3;
		row2 = row4;
		row3 = col1;
		row4 = col2;
	}
	printf("\n");
	return (0);
}
