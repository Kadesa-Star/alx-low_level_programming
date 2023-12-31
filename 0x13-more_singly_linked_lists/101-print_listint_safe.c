#include "lists.h"
/**
 * print_listint_safe - prints a linked list
 * @head: pointer to head
 * Description: a func that prints a linked list
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *s;
	const listint_t *f;
	size_t contt;

	f = head;
	s = head;
	contt = 0;
	while (f != NULL && f->next != NULL)
	{
		printf("[%p] %d\n", (void *)s, s->n);
		contt++;

		s = s->next;
		f = f->next->next;

		if (s == f)
		{
			fprintf(stderr, "Error: Loop detected. Exiting with status 98.\n");
			exit(98);
		}
	}
	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		contt++;
		head = head->next;
	}
	return (contt);
}
