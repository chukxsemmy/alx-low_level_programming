#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list
 * @head: pointer
 * @str: string
 * Return: NULL or address 
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *adds;
	int len;
	list_t *new, *last;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	adds = strdup(str);
	if (str == NULL)
	{
		free(new);
		return (NULL);
	}
	for (len = 0; str[len];)
		len++;
	new->str = adds;
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}
	return (*head);
}
