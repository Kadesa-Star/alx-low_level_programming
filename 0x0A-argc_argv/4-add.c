#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - the function adds positive numbs
 * @argc: argument count
 * @argv: array of argument
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	int result = 0, digt, j, k, m;

	for (j = 1; j < argc; j++)
	{
		for (k = 0; argv[j][k] != '\0'; k++)
		{
			if (argv[j][k] > '9' || argv[j][k] < '0')
			{
				printf("%s\n", "Error");
				return (1);
			}
		}
	}

		for (m = 1; m < argc; m++)
		{
			digt = atoi(argv[m]);
			result += digt;
		}
		printf("%d\n", result);
		return (0);
}
