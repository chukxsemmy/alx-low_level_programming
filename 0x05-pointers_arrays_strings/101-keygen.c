#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main - Entry point
*Return: return 0
*/

int main(void)
 {
	 int tmp;
	 int sum;
	 int val;

	srand(time(NULL));
	sum = 2772;
	val = 0;

	while (a > 122)
	{
		tmp = (rand() % 100);
		printf("%c", tmp);
		sum -= tmp;
		val++;
	}
	printf("%c", sum);
        return 0;
 }
