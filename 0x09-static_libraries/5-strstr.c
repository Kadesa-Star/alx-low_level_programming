#include "main.h"
/**
 * *_strstr - function that locates a substring
 * @haystack: string to be searched
 * @needle: substring to be searched
 * Return: pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack !=  '\0'; haystack++)
	{
		char *w = haystack;
		char *k = needle;

		while (*w == *k && *k != '\0')
		{
			w++;
			k++;
		}
		if (*k == '\0')
			return (haystack);
	}
	return (0);
}
