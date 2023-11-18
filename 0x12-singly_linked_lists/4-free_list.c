#include "lists.h"
/**
 * free_list - frees a linked list
 * @head: link to head
 *
 * Return: freed list
 */
void free_list(list_t *head)
{
	list_t *temp;

	if (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
