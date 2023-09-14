#include <stdio.h>
#include <math.h>
/**
 * main - finds and prints the largest prime factor
 *
 * Return: 0 always
 */
int main(void)
{
	long prime = 612852475143;
	long x, maxf;
	double square = sqrt(prime);

	for (x = 1; x <= square; x++)
	{
		if (prime % x == 0)
		{
			maxf = prime / x;
		}
	}
	printf("%ld\n", maxf);
	return (0);
}
