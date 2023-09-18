#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: the string
 * Return: a string in reverse
 */
void print_rev(char *s)
{
	int count;

	for (count = 0; s[count] != '\0'; count++)
		;
	for (count -= 1; s[count] != '\0'; count--)
	{
		_putchar(s[count]);
	}
	_putchar('\n');
}
