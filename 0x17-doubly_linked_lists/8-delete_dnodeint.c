#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes node at index
 * @head: head of  the list
 * @index: incdex of the noded to be deleted
 *
 * Return: 1 if success or -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curr, *temp;
	unsigned int count = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	curr = *head;
	if (index == 0)
	{
		*head = curr->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(curr);
		return (1);
	}
	while (curr != NULL)
	{
		if (count == index)
		{
			temp = curr->prev;
			temp->next = curr->next;
			if (curr->next != NULL)
				curr->next->prev = temp;
			free(curr);
			return (1);
		}
	curr = curr->next;
	count++;
	}
	return (-1);
}
