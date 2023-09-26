#include "main.h"
#include <stdio.h>
/**
 * print_diagsums -  diagonals of a square matrix of integers
 * @a:array of integers
 * @size: size of matrix
 * Return: 0 success
 */
void print_diagsums(int *a, int size)
{
	int sum_1 = 0;
	int sum_2 = 0;
	int m;

	for (m = 0;  m < size; m++)
	{
		sum_1 = sum_1 + a[m * size + m];
	}

	for (m = size - 1; m >= 0; m--)
	{
	       sum_2 += a[m * size + (size - m - 1)];
	}
	printf("%d, %d\n", sum_1, sum_2);
}
