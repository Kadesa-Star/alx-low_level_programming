#include "main.h"
#include <stdio.h>
/**
 * rev_string - a function that reverse a string
 * @s: string
 */
void rev_string(char *s)
{
	int count, length;

	char *start, *end = s;

	for (count = 0; s[count] != '\0' && s[count + 1] != '\0'; count++)
	{
		end++;
	}
	length = count + 1;
	start = s;
	for (count = 0; count < length / 2; count++)
	{

		char x;

		x = *end;
		*end = *start;
		*start = x;
		start++;
		end--;
	}
	end[length + 1] = '\0';
}
