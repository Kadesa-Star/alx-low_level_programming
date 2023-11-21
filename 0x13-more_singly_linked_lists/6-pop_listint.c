#include "lists.h"
/**
 * pop_listint - a func that deletes the head node
 * @head: double pointer to head
 *
 * Return: 0
 */
int pop_listint(listint_t **head)
{
	int d;
	listint_t *temp;

	if (*head == NULL)
		return (0);
	d = (*head)->n;
	temp = *head;

	*head = (*head)->next;
	free(temp);

	return (d);
}
