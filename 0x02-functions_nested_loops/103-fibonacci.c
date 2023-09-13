#include <stdio.h>
/**
 * main - prints the sum of even valued terms
 * Return: 0 (success)
 */
int main(void)
{
	int i;
	unsigned long int fb1 = 0;
	unsigned long int fb2 = 1;
	unsigned long int fbsum;
	float total_sum;

	while (1)
	{
		fbsum = fb1 + fb2;
			if (fbsum > 4000000)
				break;
		if ((fbsum % 2) == 0)
			total_sum += fbsum;

		fb1 = fb2;
		fb2 = fbsum;

	}
	printf("%.0f\n", total_sum);
	return (0);
}
