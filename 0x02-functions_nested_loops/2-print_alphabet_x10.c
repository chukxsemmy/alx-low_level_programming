#include "main.h"
/**
 *print_alphabet_x10 - prints letters of the alphabets ten times
 *
 *Return: none
 */

void print_alphabet_x10(void)
{
	int count = 0;
	int n;

	while (count < 10)
	{
		for (n = 'a'; n <= 'z'; n++)
			_putchar(n);
		_putchar(10);
	}
	count++
}
