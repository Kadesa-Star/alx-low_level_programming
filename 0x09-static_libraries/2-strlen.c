#include "main.h"
/**
 * _strlen - length of a string
 * @s: character
 * Return: length of the string
 */
int _strlen(char *s)
{
	int count;

	for (count = 0; s[count] != '\0'; count++)
		;

	return (count);
}
