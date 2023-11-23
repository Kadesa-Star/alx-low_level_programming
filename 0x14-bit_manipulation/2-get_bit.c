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
	unsigned long int db;
	unsigned long int temp;

	if (index > (sizeof(unsigned long int) * 8 - 1))
	{
		return (-1);
	}
	db = 1 << index;
	temp = n & db;
	if (temp == db)
	{
		return (1);
	}
	return (0);
}
