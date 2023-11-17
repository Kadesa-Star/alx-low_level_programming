#include "lists.h"
/**
 * _stl -fn return len of a string
 * @s: character
 * Return: 1
 */
int _stl(const char *s)
{
	int j = 0;

	while (s[j] != '\0')
		j++;

	return (j);
}
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

	nod->len = _stl(str);
	nod->next = (*head);
	(*head) = nod;

	return (*head);
}
