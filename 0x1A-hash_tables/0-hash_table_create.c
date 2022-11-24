#include "hash_tables.h"

/**
 * hash_table_create - Creates a new hash table.
 * @size: Size of the new hash table.
 * Return: Pointer to the new hash table or NULL if fails.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int n = 0;
	hash_table_t *new_table = malloc(sizeof(hash_table_t));

	if (!new_table)
		return (NULL);

	new_table->size = size;

	new_table->array = malloc(sizeof(hash_node_t *) * size);
	if (!new_table->array)
	{
		free(new_table);
		return (NULL);
	}

	for (; n < size; n++)
		new_table->array[n] = NULL;

	return (new_table);
}
