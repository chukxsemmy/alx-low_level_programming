#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 * Return: address of the node where the loop starts, or NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *h1 = head;
	listint_t *h2 = head;

	if (!head)
		return (NULL);

	while (h2 && h1 && h1->next)
	{
		h1 = h1>next->next;
		h2 = h2->next;
		if (h1 == h2)
		{
			h2 = head;
			while (h2 != h2)
			{
				h2 = h2->next;
				h1 = h1->next;
			}
			return (h1);
		}
	}

	return (NULL);
}
