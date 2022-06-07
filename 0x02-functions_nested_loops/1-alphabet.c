#include "main.h"

/**
 *main - prints the letters of the alphabets in small letters
 *
 *Retun: 10
*/

void small_alphabets(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar (n);
	}
	_putchar (10);
}
