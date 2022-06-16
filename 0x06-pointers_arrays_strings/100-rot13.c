#include "main.h"

/**
 *rot13 - encodes a string using rot13.
 *@s: int type array pointer
 *Return: encoded
 */

char *rot13(char *s)
{
	int n1, n2;
	char input[] =  "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (n1 = 0; s[n1] != '\0'; n1++)
	{
		for (n2 = 0; n2 < 54; n2++)
		{
			if (((s[n1] <= 'z' && s[n1] >= 'a') || (s[n1] <= 'Z' && s[n1] >= 'A'))
&& s[n1] == input[n2])
			{
				s[n1] = output[n2];
				break;
			}
		}
	}
	return (s);
}
