#include <stdio.h>
/**
 * main -prints first fifty fibonacci numbers, start with 1 and 2
 * Return: 0 (upon success)
 */
int main(void)
{
	int cnt;
	int num1 = 1;
	int num2 = 2;
	int sum;

	for (cnt = 1; cnt < 50; cnt++)
	{
		sum = num1 + num2;
		printf("%d", sum);

		num1 = num2;
		num2 = sum;

		if (cnt == 49)
			printf("\n");
		else
			printf(",");
	}
	return (0);
}
