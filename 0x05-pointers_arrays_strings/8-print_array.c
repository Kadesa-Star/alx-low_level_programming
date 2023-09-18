#include <stdio.h>
#include "main.h"
/**
 * print_array - prints n elements of an array of ints
 * @a: input array
 * @n: length of array
 */
void print_array(int *a, int n)
{
	int count;

	for (count = 0; count < n; count++)
	{
		printf("%d", a[count]);
		if (count != (n - 1))
		{
			printf(",");
		}
	}
	putchar('\n');
}
