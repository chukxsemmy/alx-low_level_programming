#include "lists.h"

/**
* free_listint2 - frees a linked list
* @head: pointer to the head of the list
* Return: void
*/

void free_listint2(listint_t **head)
{
	listint_t *pnt;
	listint_t **tmp_list = head;

	if (tmp_list != NULL)
	{
		while (*head != NULL)
		{
			pnt = *head;
			free(pnt);
			*head = (*head)->next;
		}
		*tmp_list = NULL;
	}
}
