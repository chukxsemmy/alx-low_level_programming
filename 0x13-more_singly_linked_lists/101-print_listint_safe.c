#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts the number of unique nodes
 *                      in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 * Return:0 If not looped, else retun no. of unique nodes
 */

size_t looped_listint_len(const listint_t *head)
{
	const listint_t *ptr_one, *ptr_two;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	ptr_one = head->next;
	ptr_two = (head->next)->next;

	while (ptr_two)
	{
		if (ptr_one == ptr_two)
		{
			ptr_one = head;
			while (ptr_one != ptr_two)
			{
				nodes++;
				ptr_one = ptr_one->next;
				ptr_two = ptr_two->next;
			}

			ptr_one = ptr_one->next;
			while (ptr_one != ptr_two)
			{
				nodes++;
				ptr_one = ptr_one->next;
			}

			return (nodes);
		}

		ptr_one = ptr_one->next;
		ptr_two = (ptr_two->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
