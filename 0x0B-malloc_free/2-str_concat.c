#include "main.h"

/**
 * str_concat - a function that concatenates two strings
 * @s1: string one
 * @s2: string two
 * Return: pointer to new string else NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int index, concat_index = 0,  lenght = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (index = 0; s1[index] || s2[index]; index++)
		lenght++;
	concat_str = malloc(sizeof(char) * lenght);
	if (concat_str == NULL)
		return (NULL);
	for (index = 0; s1[index]; index++)
		concat_str[concat_index++] = s1[index];
	for (index = 0; s2[index]; index++)
		concat_str[concat_index++] = s2[index];
	return (concat_str);
}
