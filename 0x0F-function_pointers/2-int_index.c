#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - a function that searches for an integer
 * @array: array of elements
 * @size: number of elements in the array
 * @cmp: a pointer to the function to be used to compare values
 *
 * Return: -1 if not elements match
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int k;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);
	for (k = 0; k < size; k++)
	{
		if (cmp(array[k]))
			return (i);
	}
	return (-1);
}
