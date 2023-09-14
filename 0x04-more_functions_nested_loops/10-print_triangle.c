#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: size for triangle
 */
void print_triangle(int size)
{
	int hashtag, indexing;

	if (size > 0)
	{
		for (hashtag = 1; hashtag <= size; hashtag++)
		{
			for (indexing = size - hashtag; indexing > 0; indexing++)
				_putchar(' ');

			for (indexing = 0; indexing < hashtag; indexing++)
				_putchar('#');

			if (hashtag == size)
				continue;

			_putchar('\n');
		}
	}
	_putchar('\n');
}
