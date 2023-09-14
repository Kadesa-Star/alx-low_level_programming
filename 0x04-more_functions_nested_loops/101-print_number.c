#include "main.h"
/**
 * print_number - prints an integer
 * @k: the integer printed
 */
void print_number(int k)
{
	unsigned int number = k;

	if (k < 0)
	{
		_putchar('_');
		number = -number;
	}
	if ((number / 10) > 0)
		print_number(number / 10);
	_putchar((number % 10) + '0');
}
