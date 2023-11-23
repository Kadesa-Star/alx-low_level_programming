#include "main.h"
/**
 * set_bit - sets the value of a bit to 1
 * @n: integer
 * @index: index
 *
 * Return: 1 if worked -1 o/w
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int b;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	b = 1 << index;
	*n = *n | b;
	return (1);
}
