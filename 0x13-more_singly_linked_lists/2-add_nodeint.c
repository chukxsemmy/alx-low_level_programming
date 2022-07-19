#include "lists.h"

/**
 * add_nodeint - adds a node at the beginning of a linked list
 * @head: pointer to the first node
 * @n: data
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *i;

	i = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	i->n = n;
	i->next = *head;
	*head = i;

	return (i);
}
