#include "lists.h"
/**
 * listint_len - returns the no of elements in a linked list
 * @h: pointer to head
 *
 * Return: no. of elements  in a linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
