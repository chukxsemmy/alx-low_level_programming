#include "main.h"

/**
 *_strstr - locates a subtring like a needle in haystack
 *@haystack:string scanned
 *@needle:substring searched
 *Return:pointer to beginning of substring,NULl instead
 */

char *_strstr(char *haystack, char *needle)
{
	char *substr = needle;
	char *scan = haystack;

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack++ != *needle++)
			{
				break;
			}
		}
		if (!*needle)
		{
			return (scan);
		}
		needle = substr;
		scan++;
		haystack = scan;
	}
	return (0);
}
