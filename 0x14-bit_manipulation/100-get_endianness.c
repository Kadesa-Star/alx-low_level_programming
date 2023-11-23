#include "main.h"
/**
 * get_endianness - func that gets endianess
 *
 * Return: 0 or 1
 */
int get_endianness(void)
{
	unsigned int number = 1;
	char *b = (char *) &number;

	return ((*b == 1) ? 1 : 0);
}
