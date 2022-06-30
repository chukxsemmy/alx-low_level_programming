#include "main.h"
#include <stdlib.h>

/**
* _calloc - prints calloc
* @nmemb: input
* @size: input
* Return: Pointer.
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *n;
	unsigned int a, b;

	b = nmemb * size;
	if (nmemb <= 0 || size <= 0)
		return (NULL);
	n = malloc(b);
	if (n == NULL)
		return (NULL);
	for (a = 0; a < (b); a++)
	{
		n[a] = 0;
	}
	return (n);
}
