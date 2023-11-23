#include "main.h"
/**
 * binary_to_uint - a func converts bin to unsigned int
 * @b: pointer to string
 * Return: the converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;

	while (b == NULL)
	{
		return (0);
	}
	if (*b != '\0')
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		res = (res << 1) | (*b - '0');
		b++;
	}
	return (res);
}
