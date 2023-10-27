#include "main.h"
/**
 * _puts - prints a string followed by a new line
 * @str: string
 * Return: string followed by new line
 */
void _puts(char *str)
{
	int count;

	for (count = 0; str[count] != '\0'; count++)
	{
		_putchar(str[count]);
	}
	_putchar('\n');
}
