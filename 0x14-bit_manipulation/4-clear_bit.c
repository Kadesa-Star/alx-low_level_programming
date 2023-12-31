#include "main.h"
/**
 * clear_bit - func sets the value of bit to 0
 * @n: pointer to int
 * @index: index
 *
 * Return: 1 if it worked -1 o/w
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n = *n & ~(1 << index);
	return (1);
}
