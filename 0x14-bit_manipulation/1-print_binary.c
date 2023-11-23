#include "main.h"
/**
 * power - calculates power to base
 * @base: base
 * @pw: power
 *
 * Return: power
 */
unsigned long int power(int base, unsigned int pw)
{
	unsigned long int number, c;

	number = 1;
	for (c = 1; c <= pw; c++)
	{
		number = number * base;
	}
	return (number);
}
/**
 * print_binary - prints a number in binary
 * @n: the number
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int db, temp;
	char fl = 0;

	db = power(2, sizeof(unsigned long int)* 8 - 1);
	while (db  != 0)
	{
		temp = n & db;
		if (temp == db)
		{
			fl = 1;
			_putchar('1');
		}
		else if (fl == 1 || db == 1)
		{
			_putchar('0');
		}
		db >>= 1;
	}
}
