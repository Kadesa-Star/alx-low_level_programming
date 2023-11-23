#include "main.h"
/**
 * flip_bits - func returns bits to flip
 * @n: integer
 * @m: int 2
 *
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result = n ^ m;
	unsigned int cott = 0;

	while (result)
	{
		cott += result & 1;
		result >>= 1;
	}
	return (cott);
}
