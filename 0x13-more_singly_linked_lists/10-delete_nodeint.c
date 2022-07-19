#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at an index
 * @head: pointer to the head of the list
 * @index: index of the node to be added
 * Return: the address of the node
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp_node = *head;
	listint_t *this_node = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp_node);
		return (1);
	}

	while (i < index - 1)
	{
		if (!tmp_node || !(tmp_node->next))
			return (-1);
		tmp_node = tmp_node->next;
		i++;
	}


	this_node = tmp_node->next;
	tmp_node->next = this_node->next;
	free(this_node);

	return (1);
}
