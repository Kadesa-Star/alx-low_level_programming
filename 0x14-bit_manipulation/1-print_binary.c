#include "main.h"
/**
 * print_binary - prints a number in binary
 * @n: the number
 * Return: the binary
 */
void print_binary(unsigned long int n)
{
	int size = sizeof(unsigned long int) * 8;
	unsigned long int mask;
	int j;

	for (j = size - 1; j >= 0; j--)
	{
		mask = 1UL << j;
		if (n & mask)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
	}
	_putchar('\n');
}
