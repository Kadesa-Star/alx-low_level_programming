#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all numbers to 98
 * @m: the number to begin at
 */
void print_to_98(int m)
{
	if (m >= 98)
	{
		while (m > 98)
			printf("%d, ", m--);
		printf("%d\n", m);
	}
	else
	{
		while (m < 98)
			printf("%d, ", m++);
		printf("%d\n", m);
	}
}
