#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: the pointer to the head
 * @index: index of node to be deleted
 * Return: 1 if success and -1 incase of faillure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int j = 0;
	listint_t *temp;
	listint_t *prev;

	if (*head == NULL)
	{
		return (-1);
	}

	temp = *head;
	prev = NULL;

	for j = 0; j < index && temp != NULL; j++)
	{
		prev = temp;
		temp = temp->next;
	}
	if (temp == NULL)
	{
		return (-1);
	}
	if (prev == NULL)
	{
		*head = temp->next;
	}
	else
	{
		prev->next = temp->next;
	}
	free(temp);
	return (1);
}
