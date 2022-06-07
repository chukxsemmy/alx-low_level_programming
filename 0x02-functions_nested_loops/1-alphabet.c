#include "main.h"

/**
 *print_alphabet - prints the letters of the alphabets in small letters
 *
 *Retun: 10
*/

void print_alphabet(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar (n);
	}
	_putchar (10);
}
