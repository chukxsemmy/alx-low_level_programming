#include "lists.h"

/**
 * insert_nodeint_at_index - returns the nth node of a linked list
 * @head: pointer to the head of the list
 * @idx: index of the node to be added
 * @n: content of the new node
 * Return: the address of the node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int pos;
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

	for (pos = 0; tmp_node && pos < idx; pos++)
	{
		if (pos == idx - 1)
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
