#include "lists.h"
/**
 * add_node - a func adds node at the beginning
 * @head: pointer
 * @str: string to be added
 * Return: address of the new element of NULL o/w
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *nod;

	while (str[len])
		len++;

	nod = malloc(sizeof(list_t));

	if (nod == NULL)
		return (NULL);

	nod->str = strdup(str);

	nod->len = len;
	nod->next = (*head);
	(*head) = nod;

	return (*head);
}
