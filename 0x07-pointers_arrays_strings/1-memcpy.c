#include "main.h"
/**
 * *_memcpy - copies memory area
 * @dest: destination array where content is to be copied
 * @src: pointer to source of data to be copied
 * @n: number of bytes to be copied
 * Return: copied memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int l = 0;

	for (; l < n; l++)
	{
		dest[l] = src[l];
		n--;
	}
	return (dest);
}
