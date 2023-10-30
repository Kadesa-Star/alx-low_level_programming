#include "main.h"
#include <stdlib.h>
/**
 * create_array - function that creates an array of characters
 * @size: sixe of  the array
 * @c: the character
 *
 * Return: 0 if it fails and the pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int k;

	str = (char *) malloc(size * sizeof(char));
	if (size == 0 || str == NULL)
		return (NULL);
	for (k = 0; k < size; k++)
	{
		str[k] = c;
	}
	return (str);
}
