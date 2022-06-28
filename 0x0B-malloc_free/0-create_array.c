#include "main.h"

/**
* create_array - creates an array of char and init it
* with special char
* @size: Size of the array
* @c: Character to insert
* Return: NULL if size is zero or if it fails,
*/

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int index;

	if (size == 0)
		return (NULL);
	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
		return (NULL);
	for (index = 0; index < size; index++)
		arr[index] = c;
	return (arr);
}
