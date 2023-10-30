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
	size_t i, j, k, l;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

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
	{
		free(ptr);
		return (NULL);
	}
	for (k = 0; k < i; k++)
		ptr[k] = s1[k];

	for (l = 0; l < j; l)
		ptr[k] = s2[l];
		k++;
	return (ptr);
}
