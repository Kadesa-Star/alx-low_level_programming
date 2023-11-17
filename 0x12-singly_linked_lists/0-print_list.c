#include "lists.h"
#include <stdio.h>
/**
 * print_list - fuction that prints all elements of linked list
 * @h: pointer to the element to print
 *
 * Return: nodes printed
 */
size_t print_list(const list_t *h)
{
	int cnt = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d], %s\n", h->len, h->str);

	}

	cnt++;

	h = h->next;

	return (cnt);
}
