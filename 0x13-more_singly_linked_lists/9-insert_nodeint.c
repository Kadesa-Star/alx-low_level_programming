#include "lists.h"
/**
 * insert_nodeint_at_index - function that insers a new node at n
 * @head: the pointer to head
 * @n: counter
 * @idx: the index of the list where node should be added
 *
 * Return: address of th new node, 0 o/w
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *curr;
	unsigned int counter = 0;

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	curr = *head;
	while (curr != NULL && counter < idx - 1)
	{
		curr = curr->next;
		counter++;
	}

	if (curr == NULL)
	{
		free(new);
		return (NULL);
	}

	new->next = curr->next;
	curr->next = new;

	return (new);
}
