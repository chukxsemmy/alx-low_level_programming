#include "lists.h"

/**
 * insert_dnodeint_at_index - adds node at nth index
 * @h: Head of node
 * @idx: index
 * @n: struct int
 * Return: the address or NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t)), *this;
	unsigned int count = 0;

	if (h == NULL || new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	this = *h;

	if (idx == 0)
	{
		new = add_dnodeint(h, n);
		return (new);
	}
	while (this)
	{
		if (this->next == NULL && count == idx - 1)
		{
			new = add_dnodeint_end(h, n);
			return (new);
		}
		else if ((idx - 1) == count)
		{
			new->next = this->next;
			new->prev = this;
			this->next->prev = new;
			this->next = new;
			return (new);
		}
		count++;
		this = this->next;
	}
	free(new);
	return (NULL);
}
