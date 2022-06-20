#include "main.h"

/**
 *_strpbrk - locates the first occurrence of string s in string
 *@s:string scanned
 *@accept:test
 *Return:pointer to byte in s
 */

char *_strpbrk(char *s, char *accept)
{
	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
			{
				return (s);
			}
		}
		s++;
	}
	return (0);
}
