#include "lists.h"
/**
 * free_list - frees a linked list
 * @head: link to head
 *
 * Return: freed list
 */
void free_list(list_t *head)
{
	list_t *curr;
	list_t *temp;

	*curr = head;

	while (curr != NULL)
	{
		temp = curr;
		curr = curr->next;
		free(curr->str);
		free(curr);
		curr = temp;
	}
}
