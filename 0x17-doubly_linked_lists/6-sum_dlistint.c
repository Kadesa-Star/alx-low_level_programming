#include "lists.h"
/**
 * sum_dlistint - returns sum of all the data in a dll
 * @head: pointer to head
 *
 * Return: sum of all data, 0 ifthe list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *curr = head;

	while (curr != NULL)
	{
		sum += curr->n;
		curr = curr->next;
	}
	return (sum);
}
