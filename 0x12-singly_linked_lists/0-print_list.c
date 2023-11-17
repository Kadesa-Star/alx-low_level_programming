#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * print_list - fuction that prints all elements of linked list
 * @h: pointer to the element to print
 *
 * Return: nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t cnt = 0;

	while (h != NULL)
	{
		printf("%s", h->stri ? h->stri : "(nil)");
	}

	cnt++;
	h = h->next;

	if (h != NULL)
		printf(", ");


	return (cnt);
}
