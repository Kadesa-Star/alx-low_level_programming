#include <stdio.h>
/**
 * main - prints alphaabeet in lowercase and uppercase
 *
 * Return: 0 (upon successful running)
 */
int main(void)
{
	char alpha[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(alpha[i]);
	}
		putchar('\n');
		return (0);
}
