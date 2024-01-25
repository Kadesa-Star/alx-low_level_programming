#include "lists.h"
/**
 * add_dnodeint_end - add node at the end
 * @head: pointer to pointer to head
 * @n: integer value to be stored in the new node
 *
 * Return: address of the new element or null o/w
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *last = *head;

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	while (last->next != NULL)
	{
		last = last->next;
	}

	last->next = new;
	new->prev = last;

	return (new);
}
