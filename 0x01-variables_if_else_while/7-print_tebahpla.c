#include <stdio.h>
/**
 * main - printing the lower alphabet in reverse
 *
 * Return: 0 (successful completion)
 */
int main(void)
{
	char chr;

	for (chr = 'z'; chr >= 'a'; chr--)
	{
		putchar(chr);
	}
	putchar('\n');
	return (0);
}
