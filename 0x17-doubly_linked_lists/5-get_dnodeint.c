#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a ddl
 * @head: this is the pointer to head
 * @index: index of the node starting from 0
 *
 * Return: address of the nth node or NULL o/w
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *curr = head;

	while (curr != NULL)
	{
		if (count == index)
		{
			return (curr);
		}
		curr = curr->next;
		count++;
	}
	return (NULL);
}
