#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts new noode at given position
 * @h: double pointer to head
 * @idx: index where node should be added
 * @n: integer to be stored in new node
 *
 * Return: address of the new node or  NULL otherwise
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *curr;
	unsigned int count = 0;

	if (h == NULL)
		return (NULL);

	curr = *h;

	if (idx == 0)
	{
		new = malloc(sizeof(dlistint_t));
		if (new == NULL)
			return (NULL);

		new->n = n;
		new->prev = NULL;
		new->next = curr;
		if (curr != NULL)
			curr->prev = new;

		*h = new;
		return (new);
	}
	while (curr != NULL)
	{
		if (count == idx - 1)
		{
			new = malloc(sizeof(dlistint_t));
			if (new == NULL)
				return (NULL);

			new->n = n;
			new->prev = curr;
			new->next = curr->next;

			curr->next = new;
			return (new);
		}
		curr = curr->next;
		count++;
	}
	return (NULL);
}
