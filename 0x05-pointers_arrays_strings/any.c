#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main - Entry point
*Return: return 0
*/

int main(void)
 {
	 int contador;
	 int  checksum;
	 int  aleatorio;

	srand(time(NULL));
	a = 2772;
	b = 0;

	while (a > 122)
	{
		tmp = (rand() % 100);
		printf("%c", tmp);
		a -= tmp;
		b++;
	}
	printf("%c", a);
        return 0;
 }
