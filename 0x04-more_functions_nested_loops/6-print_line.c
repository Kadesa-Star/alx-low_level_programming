#include "main.h"
/**
 * print_line - draws straight line in the terminal
 * @m: number of char to be printed
 */
void print_line(int m)
{
	int leng;

	if (m > 0)
	{
		for (leng = 0; leng < m; leng++)
			_putchar('_');
	}
	_putchar('\n');
}
