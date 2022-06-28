#include "main.h"

/**
* _strdup - returns a pointer to a newly allocated
* space in memory, which contains a copy of the
* string given as a parameter.
* @str:String
* Return: pointer to allocated space, else NULL if error
*/

char *_strdup(char *str)
{
	char *copy;
	int lenght, index;

	if (str == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		lenght++;
	copy = malloc(sizeof(char) * (lenght + 1));
	if (copy == NULL)
		return (NULL);
	for (index = 0; str[index]; index++)
	{
		copy[index] = str[index];
	}
	copy[lenght] = '\0';
	return (copy);

}
