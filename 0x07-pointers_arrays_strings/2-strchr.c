#include "main.h"
/**
 * *_strchr - locates a character in a string
 * @s: specifiespointer to the null-terminated string where search is to be
 * @c: specifies the character to be searched
 * Return: pointer to the last location of c if c isnt found return null
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
