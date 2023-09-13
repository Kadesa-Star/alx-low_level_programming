#include "main.h"
/**
 * print_times_table - prints times table starting with 0
 * @n: the number
 * Return: void
 */
void print_times_table(int n)
{
	int k, l, mul;

	if (n >= 0 && n <= 15)
	{
		for (k = 0; k <= n; k++)
		{
			_putchar('0');
			for (l = 1; l <= n; l++)
			{
				_putchar(',');
				_putchar(' ');

				mul = k * l;

				if (mul <= 99)
					_putchar(' ');
				if (mul <= 9)
					_putchar(' ');
				if (mul >= 100)
				{
					_putchar((mul / 100) + '0');
					_putchar(((mul / 10)) % 10 + '0');
				}
				else if (mul <= 99 && mul >= 10)
				{
					_putchar((mul / 10) + '0');
				}
				_putchar((mul % 10) + '0');
			}
			_putchar('\n');
		}
	}
}


