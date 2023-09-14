#include "main.h"
/**
 * print_diagonal - draws diagonal line on the terminal
 * @w: no. of char of backslash to be printed
 */
void print_diagonal(int w)
{
	int leng, spaces;

	if (w > 0)
	{
		for (leng = 0; leng < w; leng++)
		{
			for (spaces = 0; spaces < leng; spaces++)
				_putchar(' ');
			_putchar('\\');

			if (leng == w - 1)
				continue;

			_putchar('\n');
		}
	}
	_putchar('\n');
}
