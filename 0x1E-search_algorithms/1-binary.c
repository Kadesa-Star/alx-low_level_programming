#include "search_algos.h"


/**
 * binary_search - searches for a value in a sorted array of integers
 * using the binary search algorithm
 * @array: ponter to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: the index where the value is located
 * or -1 if the vlaue is not present or if the array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left, right, mid;
	size_t i;


	if (array == NULL)
		return (-1);

	left = 0;
	right = size - 1;

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
				printf(", ");
		}
		printf("\n");

		mid = (left + right) / 2;

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}
