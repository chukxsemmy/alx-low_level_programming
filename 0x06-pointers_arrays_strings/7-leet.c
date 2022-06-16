#include "main.h"

/**
 *leet - transform to leet
 *@s: char array string type
 *Return: s transformed
 */

char *leet(char *s)
{
	int n1, n2;

	char s1[] = "aeotl";
	char S1[] = "AEOTL";
	char s2[] = "43071";

	for (n1 = 0; s[n1] != '\0'; n1++)
	{
		for (n2 = 0; n2 < 5; n2++)
		{
			if (s[n1] == s1[n2] || s[n1] == S1[n2])
			{
				s[n1] = s2[n2];
				break;
			}
		}
	}
	return (s);
}
