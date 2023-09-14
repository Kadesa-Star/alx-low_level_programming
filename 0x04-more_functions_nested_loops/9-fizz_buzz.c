#include <stdio.h>
/**
 * main - prints the numbers from 1 - 100,
 * but for multiples of 3 print fizz
 * for multiples of 5 print buzz
 * for multiples of both 3 and 5 print fizzbuzz
 * Return: 0 (success)
 */
int main(void)
{
	int number;

	for (number = 1; number <= 100; number++)
	{
		if ((number % 3) == 0 && (number % 5) == 0)
			printf("FizzBuzz");

		else if ((number % 3) == 0)
			printf("Fizz");

		else if ((number % 5) == 0)
			printf("Buzz");

		else
			printf("%d", number);

		if (number == 100)
			continue;
		printf(" ");
	}
	printf("\n");
	return (0);
}
