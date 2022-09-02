#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node
 * @head: head of the list
 * @index: index
 * Return: nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int nth;

	if (head == NULL)
		return (NULL);

	while (head->prev != NULL)
		head = head->prev;

	nth = 0;

	while (head != NULL)
	{
		if (nth == index)
			break;
		head = head->next;
		nth++;
	}
	return (head);
}
