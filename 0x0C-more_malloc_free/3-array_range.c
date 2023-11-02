#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * *array_range - a function that creates an array of integers
 * @min: minimum
 * @max: maximum
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *rang;
	int k = 0;

	if (min > max)
		return (NULL);
	rang = malloc((sizeof(int)  * (max - min)) + sizeof(int));
	if (rang == NULL)
		return (NULL);
	if (min <= max)
		rang[k] = min;
		k++;
		min++;
	return (rang);
}


