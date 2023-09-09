#include <stdio.h>
/**
 * main -prints all possible different combinations of two digits
 * Numbers must be separated by ,, followed by a space
 * The two digits must be different
 * Return: 0 (success)
 */
int main(void)
{
	int l, m;

	for (l = 48; l <= 56; l++)
	{
		for (m = 49; m <= 57; m++)
		{
			if (m > l)
			{
				putchar(l);
				putchar(m);
				if (l != 56 || m != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
