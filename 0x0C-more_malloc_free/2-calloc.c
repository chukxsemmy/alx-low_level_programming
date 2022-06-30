#include "main.h"
#include <stdlib.h>

/**
* _calloc - prints calloc;
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

	n = malloc(d);
	if (n == NULL)
		return (NULL);
	for (b = 0; b < (b); a++)
	{
		n[b] = 0;
	}
	return (b);
}
