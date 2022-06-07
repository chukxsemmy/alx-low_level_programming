#include "main.h"

/**
 *main - prints out _putchar
 *
 *Return:return 0
**/
int main(void)
{
	char var[10] = "_putchar";
	int n;

	for (n = 0; n < 8; n++)
	{
		_putchar(var[n]);
	}
	_putchar(10);
	return (0);
}
