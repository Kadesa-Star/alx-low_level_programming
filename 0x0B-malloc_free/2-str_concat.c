#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Description: concatenates two strings
 * Return: NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	size_t i, j, k, lim;
	char *ptr;

	if (s1 == NULL || s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}
	i = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		j++;
	}

	ptr = malloc(sizeof(char) * (i + j + 1));

	if (ptr == NULL)
		free(ptr);
		return (NULL);

	for (k = 0; k < i; k++)
		ptr[k] = s11[k];
	for (lim = 0; lim < j; lim++)
		ptr[k] = s2[lim];
		k++;
	return (ptr);
}
