#include "main.h"
/**
 * print_number - prints an integer number
 * @n: integer
 * Return: nothing
 */
void print_number(int n)
{
	unsigned int m1;

	m1 = n;

	if (n < 0)
	{
		_putchar('-');
		m1 = -n;
	}
	if (n / 10 != 0)
	{
		print_number(m1 / 10);
	}
	_putchar((m1 % 10) + '0');
}
