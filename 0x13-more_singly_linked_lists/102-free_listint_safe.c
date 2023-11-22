#include "lists.h"
/**
 * free_listint_safe- code that frees loop
 * @h: pointer to head
 *
 * Return: size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *t, *hr;
	size_t count = 0;
	listint_t *temp;

	t = *h;
	hr = *h;
	if (h == NULL || *h == NULL)
	{
		return (0);
	}
	while (hr != NULL && hr->next != NULL)
	{
		t = t->;
		hr = hr->next->next;
		if (t == hr)
		{
			do {
				temp = t->next;
				free(t);
				t = temp;
				count++;
			} while (t != hr);

			*h = NULL;
			return (count);
		}
		temp = t;
		t = t->next;
		free(temp);
		count++;
	}
	while (t != NULL)
	{
		temp = t;
		t = t->next;
		free(temp);
		count++;
	}
	*h = NULL;
	return (count);
}
