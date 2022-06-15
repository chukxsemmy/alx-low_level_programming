#include "main.h"

/**
 *_strcat - concatenates  the string pointed by @src to
 *the end of the string pointed by @dest
 *@dest: String that will be appended
 *@src: String to be concatenated upon
 *Return: returns pointer to @dest
 */

char *_strcat(char *dest, char *src)
{
	int index = 0, len = 0;

	while (dest[index++])
		len++;
	for (index = 0; src[index]; index++)
		dest[len++] = src[index];
	return (dest);
}
