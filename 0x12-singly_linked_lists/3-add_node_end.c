#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a linked lisst
 * @head: double pointer to head
 * @str: string to be duplicated
 *
 * Return: address on the new element of NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{

	list_t *new;
	list_t *current;
	unsigned int len = 0;

	if (head == NULL || str == NULL)
		return (NULL);

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = len;
	new->next = NULL;
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	else
	{
		current = *head;

		while (current->next)
		{
			current = current->next;
		}
	}
	current->next = new;

	return (new);
}
