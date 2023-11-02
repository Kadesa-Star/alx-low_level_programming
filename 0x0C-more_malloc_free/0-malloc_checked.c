#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory
 * @b: unsigned integer
 * Return: a pinter to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *result = malloc(b);

	if (result == NULL)
		exit(98);
	return (result);
}
