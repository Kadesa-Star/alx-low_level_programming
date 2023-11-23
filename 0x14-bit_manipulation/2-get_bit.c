#include "main.h"
/**
 * get_bit - a function returns value of a bit
 * @n: integer valuer
 * @index: index starting from 0
 *
 * Return: bit at index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int size = sizeof(unsigned long int) * 8;

	if (index >= size)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
