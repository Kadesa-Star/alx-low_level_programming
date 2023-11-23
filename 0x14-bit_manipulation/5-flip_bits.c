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
	int b;
	int cott;
	unsigned long int curr;
	unsigned long int ex = n ^ m;

	for (b = 63; b >= 0; b--)
	{
		curr = ex >> b;
		if (curr & 1)
			cott++;
	}
	return (cott);
}
