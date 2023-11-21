#include "lists.h"
/**
 * add_nodeint(listint_t - func that adds a new node at beginnning
 * @head: double pointer to head
 * @n: data
 *
 * Return: address of new element or NULL otherwise
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
