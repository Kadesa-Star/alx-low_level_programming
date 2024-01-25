#include "lists.h"
/**
 * dlistint_len - returns number of elements in a DDL
 * @h: pointer to head
 *
 * Return: number of elementsin a list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
