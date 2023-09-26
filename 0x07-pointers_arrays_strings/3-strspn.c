#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: the string
 * @accept:input
 * Return: number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int w = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				w++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (w);
		}
		s++;
	}
	return (w);
}
