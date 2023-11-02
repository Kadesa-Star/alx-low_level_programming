#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb: elements
 * @size: the size
 *
 * Return: allocated memory for an array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr = calloc(nmemb, size);
	if (arr == 0)
		return (NULL);
	else
		return (arr);
}
