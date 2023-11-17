#include "lists.h"
/**
 * add_node - a func adds node at the beginning
 * @head: pointer
 * @str: string to be added
 * Return: address of the new element of NULL o/w
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;

	do {
		len++;
	} while (str[len]);

	node = malloc(sizeof(list_t));

	if (node == NULL)
		return (NULL);
	node->str = strdup(str);
	node->len = len;
	node->next = (*head);
	(*head) = node;

	return (node);
}
