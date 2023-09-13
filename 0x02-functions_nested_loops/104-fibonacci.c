#include <stdio.h>
/**
 * main - finds and prints the first 98 fibonacci numbers
 * Return: 0 (success)
 */
int main(void)
{
	(unsigned long int count, unsigned long int fib1 = 0);
	(unsigned long int fib2 = 1, unsigned long int sum);
	(unsigned long int fib1_half1, unsigned long int fib1_half2);
	(unsigned long int fib2_half1, unsigned long int fib2_half2);
	(unsigned long int half1, unsigned long int half2);

	for (count = 0; count < 92; count++)
	{
		sum = fib1 + fib2;
		printf("%lu, ", sum);

		fib1 = fib2;
		fib2 = sum;
	}

	fib1_half1 = fib1 / 10000000000;
	fib2_half1 = fib2 / 10000000000;
	fib1_half2 = fib1 % 10000000000;
	fib2_half2 = fib2 % 10000000000;

	for (count = 93; count < 99; count++)
	{
		half1 = fib1_half1 + fib2_half1, half2 = fib1_half2 + fib2_half2;

		if (fib1_half2 + fib2_half2 > 9999999999)
		{
			half1 += 1;
			half2 %= 10000000000;
		}

		printf("%lu%lu", half1, half2);
		if (count != 98)
			printf(", ");

		fib1_half1 = fib2_half1;
		fib1_half2 = fib2_half2;
		fib2_half1 = half1, fib2_half2 = half2;
	}
	printf("\n");
	return (0);
}
