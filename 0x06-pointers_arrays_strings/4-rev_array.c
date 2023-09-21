#include "main.h"
/**
 * reverse_array - reveres an array
 * @a: an array of integers
 * @n: the number of elements to swap
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int k;
	int temp;

	for (k = 0; k < n / 2; k++)
	{
		temp = a[k];
		a[k] = a[n - k - 1];
		a[n - k - 1] = temp;
	}
}
