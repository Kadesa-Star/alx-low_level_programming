#include "lists.h"
/**
 * find_listint_loop - finds loops in a linked list
 * @head: the pointer to the head
 *
 * Return: the address of the node where the loop starts at
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tort = head, *hare = head;

	while (hare != NULL && hare->next != NULL)
	{
		tort = tort->next;
		hare = hare->next->next;

		if (tort == hare)
		{
			tort = head;
			while (tort != hare)
			{
				tort = tort->next;
				hare = hare->next;
			}
			return (tort);
		}
	}
	return (NULL);
}
