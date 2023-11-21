#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node
 * @head: the pointer to head
 * @index: the index of the node starting at 0
 * Return: NULL if node doesnt exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j = 0;

	while (head != NULL)
	{
		if (j == index)
		{
			return (head);
		}
		head = head->next;
		j++;
	}
	return (NULL);
}
