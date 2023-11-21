#include "lists.h"
/**
 * print_listint - prints all elements of alinked list
 * @h: pointer to header
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes_num = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes_num++;
	}
	return (nodes_num);
}
