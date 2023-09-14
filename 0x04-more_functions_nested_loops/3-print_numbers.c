#include "main.h"

/**
 * print_numbers - prints numbers 0 to 9 followed by a new line
 * Return: numbers
 */

void print_numbers(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		_putchar(n + '0');
	}
	_putchar('\n');
}
