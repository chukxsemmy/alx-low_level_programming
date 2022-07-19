#include "lists.h"

/**
 * print_listint - prints all elements of a
 * linked list
 * @h: head of linked list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;
	const listint_t *h = h;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
