#include "main.h"
/**
 * print_last_digit - print last digit of number
 * @m: the number
 * Return: value
 */
int print_last_digit(int m)
{
	int last;

	last = m % 10;
	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
