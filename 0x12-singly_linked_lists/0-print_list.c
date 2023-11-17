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
		do {
			printf("[0] (nil)\n");
		} while (h->str == NULL);
		printf("[0] (nil)\n");
	}

	cnt++;

	h = h->next;

	return (cnt);
}
