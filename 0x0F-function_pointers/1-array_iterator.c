#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - a function that executes a function
 * @array: the array
 * @size: size of fuction
 * @action: pointer
 *
 * Return: the function that executes a given paramente
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int j;

	if (array == NULL || action == NULL)
		return;
	for (j = 0; j < size; j++)
		action(array[j]);
}
