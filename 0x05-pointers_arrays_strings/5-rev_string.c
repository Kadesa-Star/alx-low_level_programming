#include "main.h"
/**
 * rev_string - a function that reverse a string
 * @s: string
 * Return: Reverse function
 */
void rev_string(char *s)
{
	int count;
	int length;
	char *start, *end = s;

	for (count = 0; s[count] != '\0' && s[count + 1] != '\0'; count++)
	{
		end++;
	}
	length = count + 1;
	start = s;
	for (count = 0; count < length / 2; count++)
	{

		char V;

		V = *end;
		*end = *start;
		*start = V;
		start++;
		end--;
	}
	end[length + 1] = '\0';
}
