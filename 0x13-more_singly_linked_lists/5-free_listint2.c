#include "lists.h"

/**
* free_listint2 - frees a linked list
* @head: pointer to the head of the list
* Return: void
*/

void free_listint2(listint_t **head)
{
	listint_t *pnt;

	if (head == NULL)
		return;
	while (*head)
	{
		pnt = (*head)->next;
		free(head);
		*head = pnt;
	}
	*head = NULL;
}
