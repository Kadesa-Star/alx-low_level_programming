#include <stdio.h>
/**
 * main -prints first fifty fibonacci numbers, start with 1 and 2
 * Return: 0 (upon success)
 */
int main(void)
{
	int f1 = 1;
	int f2 = 2;
	int next;
	int i;

	printf("%d, ", f1);
	for (i = 1; i < 50; i++)
	{
		printf("%d", f2);
		next = f1 + f2;
		f1 = f2;
		f2 = next;
	}
	printf("\n");
	return (0);
}
