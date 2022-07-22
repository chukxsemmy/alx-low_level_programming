#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ptr_one = head;
	listint_t *ptr_two = head;

	if (!head)
		return (NULL);

	while (ptr_one && ptr_two && ptr_two->next)
	{
		ptr_two = ptr_two->next->next;
		ptr_one = ptr_one->next;
		if (ptr_two == ptr_one)
		{
			ptr_one = head;
			while (ptr_one != ptr_two)
			{
				ptr_one = ptr_one->next;
				ptr_two = ptr_two->next;
			}
			return (ptr_two);
		}
	}

	return (NULL);
}
