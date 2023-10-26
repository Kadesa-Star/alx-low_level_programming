#include "main.h"
/**
 * is_prime_number - the function
 * @n: the number to be checked
 *
 * Return: 1
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (myprime(n, n - 1));
}
/**
 * myprime - calculate if number is prime recursively
 * @n: integer to evaluate
 * @j: helper in iteration
 *
 * Return: 1 if prime 0 otherwise
 */
int myprime(int n, int j)
{
	if (j == 1)
		return (1);
	else if (n % j == 0 && j > 0)
		return (0);
	return (myprime(n, j - 1));
}
