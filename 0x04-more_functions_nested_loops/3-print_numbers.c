#include "main.h"
/**
 * print_numbers - prints numbers 0 to 9 followed by a new line
 * Return: numbers
 */
void print_numbers(void);
{
	int number;

	for (number = 48; number <= 57; number++)
	{
		_putchar(number + '0');
	}
	_putchar('\n');
}
