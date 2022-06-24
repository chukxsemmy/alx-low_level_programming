#include "main.h"

/**
 *_strcpy - Copy and paste string
 *@dest: destination to paste
 *@src: source to copy
 *Return: destination as dest
 */

char *_strcpy(char *dest, char *src)
{
	int n = 0;

	while (*(src + n) != '\0')
	{
		*(dest + n) = *(src + n);
		n++;
	}
	*(dest + n) = '\0';
	return (dest);
}
