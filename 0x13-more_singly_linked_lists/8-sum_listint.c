#include "lists.h"
/**
 * sum_listint - returns the sum of all the data
 * @head: the pointer to head
 *
 * Return: 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int summation = 0;

	while (head != NULL)
	{
		summation += head->n;
		head = head->next;
	}
	return (summation);
}
