#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - function returns a pointer to duplicate string
 * @str: the string
 * Description: function returns a pointer to the duplicated string
 * Return: NULL incase of insufficient memory
 */
char *_strdup(char *str)
{
	int j, k = 0;
	char *duplicate;

	if (str == NULL)
		return (NULL);

	if (str[k] != '\0')
		k++;

	char *duplicate = (char *)malloc((sizeof(char) * (k + 1)));

	if (duplicate == NULL)
		return (NULL);
	for (j = 0; str[j]; j++)
		duplicate[j] = str[j];
	return (duplicate);
}
