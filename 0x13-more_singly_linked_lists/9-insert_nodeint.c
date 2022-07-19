#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at an index
 * @head: pointer to the head of the list
 * @index: index of the node to be added
 *
 * Return: the address of the node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int n;
	listint_t *new_node;
	listint_t *tmp_node = *head;

	new_node = malloc(sizeof(listint_t));
	if (!new_node || !head)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	for (n = 0; tmp_node && i < idx; n++)
	{
		if (n == idx - 1)
		{
			new_node->next = tmp_node->next;
			tmp_node->next = new_node;
			return (new_node);
		}
		else
			tmp_node = tmp_node->next;
	}

	return (NULL);
}
