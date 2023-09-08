#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - prints the alphabet in lower case
 * exemptions are q and e
 * Return: 0 (successful)
 */
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		if (i != 101 && i != 113)
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
