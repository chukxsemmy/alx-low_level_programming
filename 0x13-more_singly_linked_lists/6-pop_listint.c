#include "lists.h"

/**
* pop_listint - deletes the head node of a linked list
* @head: head of the list
* Return: the deleted node data
*/

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int memb;

	if (!head || !*head)
		return (0);

	memb = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (memb);
}
