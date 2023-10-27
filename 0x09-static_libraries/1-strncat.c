#include "main.h"
/**
 * *_strncat - concatenaates two strings
 * @dest: first string
 * @src: second string
 * @n: byte count
 * Return: pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int j = 0;
	int k = 0;

	while (dest[j] != '\0')
	{
		j++;
	}
	while (k < n && src[k] != '\0')
	{
		dest[j] = src[k];
		j++;
		k++;
	}
	dest[j] = '\0';
	return (dest);
}
