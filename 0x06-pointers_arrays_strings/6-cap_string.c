#include "main.h"
/**
 * *cap_string - capitalizes all words of string
 * @nn: pointer to string
 * Return: capitalized string
 */
char *cap_string(char *nn)
{
	int i = 0;

	while (nn[i])
	{
		while (!(nn[i] >= 'a' && nn[i] <= 'z'))
			i++;

		if (nn[i - 1] == ' ' ||
		nn[i - 1] == '\t' ||
		nn[i - 1] == '\n' ||
		nn[i - 1] == ',' ||
		nn[i - 1] == ';' ||
		nn[i - 1] == '.' ||
		nn[i - 1] == '!' ||
		nn[i - 1] == '?' ||
		nn[i - 1] == '"' ||
		nn[i - 1] == '(' ||
		nn[i - 1] == ')' ||
		nn[i - 1] == '{' ||
		nn[i - 1] == '}' ||
		nn == 0)
			nn[i] -= 32;
		i++;
	}
	return (nn);
}
