 #include "main.h"
/**
 * *_strcat - concatenates two strings
 * @dest: first string
 * @src: second string
 * Return: the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int j = 0;
	int k = 0;

	while (dest[j] != '\0')
	{
		j++;
	}
	while (src[k] != '\0')
	{
		dest[j] = src[k];
		j++;
		k++;
	}
	dest[j] = '\0';
	return (dest);
}
