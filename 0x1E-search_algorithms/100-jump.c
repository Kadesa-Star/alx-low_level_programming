#include <math.h>
#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array of integers
 * using the Jump search algorithm.
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index where value is located, or -1 if not found or array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size);
	size_t prev = 0;
	size_t i;

	if (array == NULL)
		return (-1);

	printf("value checked aray[%lu] = [%d]\n", prev, array[prev]);
	while (array[step] < value && step < size)
	{
		printf("value checked array[%lu] = [%d]\n", step, array[step]);
		prev = step;
		step += sqrt(size);
		if (step >= size)
			break;
	}

	printf("value found between indexes [%lu] and [%lu]\n", prev, step);

	for (i = prev; i <= step && i < size; i++)
	{
		printf("value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
