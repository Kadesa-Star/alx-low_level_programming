#include <stdio.h>
/**
 * main -prints first fifty fibonacci numbers, start with 1 and 2
 * Return: 0 (upon success)
 */
int main(void)
{
	int cnt;
	unsigned long int f1 = 0;
	unsigned long int f2 = 1;
	unsigned long int sum;

	for (cnt = 0; cnt < 50; cnt++)
	{
		sum = f1 + f2;
		printf("%lu", sum);

		f1 = f2;
		f2 = sum;

		if (cnt == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
