#include "main.h"
/**
 * *_memset - fills memmory with a constant byte
 * @s: Starting address of memory to be filled
 * @b: Value to be filled
 * @n: Number of bytes to be filled starting from ptr to be filled
 * Return: pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	int w = 0;

	for (; n > 0; w++)
	{
		s[w] = b;
		n--;
	}
	return (s);
}
