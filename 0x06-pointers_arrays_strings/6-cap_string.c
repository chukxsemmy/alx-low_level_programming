#include "main.h"

/**
 *cap_string - capitalize words
 *@str: pointer
 *Return: capitalzied string
 */

char *cap_string(char *str)
{
	char arr[] = ",\t;\n; .!?\"(){}";
	int pin, n1, n2;

	for (n1 = 0; str[n1] != '\0'; n1++)
	{
		pin = 0;
		if (n1 == 0)
		{
			pin = 1;
		}
		else
		{
			for (n2 = 0; arr[n2] != '\0'; n2++)
			{
				if (str[n1 - 1] == arr[n2])
				{
					pin = 1;
					break;
				}
			}
		}
		if (pin == 1)
		{
			if (str[n1] <= 'z' && str[n1] >= 'a')
			{
				str[n1] -= ('a' - 'A');
			}
		}
	}
	return (str);
}
