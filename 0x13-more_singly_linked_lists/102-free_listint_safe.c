#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer
 * Return: no of elmts in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t list_len = 0;
	int a_list;
	listint_t *tmp_list;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		a_list = *h - (*h)->next;
		if (a_list > 0)
		{
			tmp_list = (*h)->next;
			free(*h);
			*h = tmp_list;
			list_len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			list_len++;
			break;
		}
	}

	*h = NULL;

	return (list_len);
}
