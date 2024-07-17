#include "search_algos.h"

/**
 * linear_search - searches for value in an array of ints
 * uses the Linear Seach algorithm
 * @array: Pointer to the first element of the array to seach in
 * @size: number of elements in the array
 * @value: Value to search for
 *
 * Return: the first index where the value is located'
 *	or -1 if the vlaue is not present or array is NULL
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;


	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
