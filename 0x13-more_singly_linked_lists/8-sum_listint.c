#include "lists.h"

/**
 *sum_listint - sums up all the data in a linked list
 *@head: head of the list
 *
 *Return: sum of the number
 */

int sum_listint(listint_t *head)
{
	int n = 0;
	listint_t *tmp = head;

	while (tmp)
	{
		n += tmp->n;
		tmp = tmp->next;
	}
	return (n);
}
