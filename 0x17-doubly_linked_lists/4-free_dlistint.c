#include "lists.h"
/**
 * free_dlistint - frees a ddl
 * @head: pointer to head
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *curr = head;
	dlistint_t *nextnode;

	while (curr != NULL)
	{
		nextnode = curr->next;
		free(curr);
		curr = nextnode;
	}
}
