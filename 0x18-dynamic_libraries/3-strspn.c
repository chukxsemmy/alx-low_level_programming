#include "main.h"

/**
 *_strspn - length of a prefix substring
 *@s:string
 *@accept:bytes
 *Return:unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
	char *yes = accept;
	unsigned int i = 0;

	while (*s++)
	{
		while (*accept++)
		{
			if (*(s - 1) == *(accept - 1))
			{
				i++;
				break;
			}
		}
		if (!(*--accept))
		{
			break;
		}
		accept = yes;
	}
	return (i);
}
