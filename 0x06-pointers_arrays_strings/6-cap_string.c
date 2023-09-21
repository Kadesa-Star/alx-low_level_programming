#include "main.h"
/**
 * *cap_string - capitalizes all words of string
 * @n: pointer to string
 * Return: capitalized string
 */
char *cap_string(char *n)
{
	int i;

	for (i = 0; n[i] != '\0'; i++)
	{
	if (n[i] >= 'a' && n[i] <= 'Z')
	{
		n[i] = n[i] - 32;
	}
	}
}
