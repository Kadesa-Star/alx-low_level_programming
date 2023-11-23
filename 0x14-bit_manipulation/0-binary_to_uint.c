#include "main.h"
/**
 * binary_to_uint - a func converts bin to unsigned int
 * @b: pointer to string
 * Return: the converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;
	int c;

	while (b == NULL)
	{
		return (0);
	}
	for (c = 0; b[c] != '\0'; c++)
	{
		if (b[c] != '0' && b[c] != '1')
		{
			return (0);
		}
		res = (res << 1);
		if (b[c] == '1')
		{
			res = res + 1;
		}
	}
	return (res);
}
