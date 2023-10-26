#include "main.h"
/**
 * sqrt_b  - return squareroot of a natural number
 * @b:input number
 * @c: integer to iterate
 *
 * Return: sqrt or -1
 */
int sqrt_b(int b, int c)
{
	if (c * c > b)
		return (-1);
	if (c * c == b)
		return (c);
	return (sqrt_b(b, c + 1));
}
/**
 * _sqrt_recursion - function to print squareroot
 * @n: integer number in question
 *
 * Return: 0 (success)
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_b(n, 0));
}
