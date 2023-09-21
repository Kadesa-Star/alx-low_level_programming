#include "main.h"
/**
 * *cap_string - capitalizes all words of string
 * @n: pointer to string
 * Return: capitalized string
 */
char *cap_string(char *n)
{
	int i = 0;

	while (n[i])
	{
		while (!(n[i] >= 'a' && n[i] <= 'z'))
			i++;

	if (n[i - 1] == ' ' ||
	n[i - 1] == '\t' ||
	n[i - 1] == '\n' ||
	n[i - 1] == ',' ||
	n[i - 1] == '.' ||
	n[i - 1] == '!' ||
	n[i - 1] == ';' ||
	n[i - 1] == '?' ||
	n[i - 1] == '"' ||
	n[i - 1] == '(' ||
	n[i - 1] == ')' ||
	n[i - 1] == '{' ||
	n[i - 1] == '}' ||
	n == 0)
		n[i] -= 32;
	n++;
	}
	return (n);
}
