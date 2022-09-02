#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts new node at a
 * given position
 * @h: Head of node
 * @idx: index
 * @n: struct int
 * Return: dlistint_t
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *old;
	unsigned int count = 0;

	if (h == NULL || new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	old = *h;

	if (idx == 0)
	{
		new = add_dnodeint(h, n);
		return (new);
	}
	while (old)
	{
		if (old->next == NULL && count == idx - 1)
		{
			new = add_dnodeint_end(h, n);
			return (new);
		}
		else if ((idx - 1) == count)
		{
			new->next = old->next;
			new->prev = old;
			old->next->prev = new;
			old->next = new;
			return (new);
		}
		count++;
		old = old->next;
	}
	free(new);
	return (NULL);
}
