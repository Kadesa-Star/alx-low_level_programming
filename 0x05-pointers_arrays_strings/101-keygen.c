#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 *  main - generates random valid pw
 *  Return: 0 success
 */
int main(void)
{
	int psw[100];
	int i, sum, n;

	sum = 0;

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		psw[i] = rand() % 78;
		sum += (psw[i] + '0');
		putchar(psw[i] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			n = 2772 - sum - '0';
			sum += n;
			putchar(n + '0');
			break;
		}
	}
	return (0);
}
