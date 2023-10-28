#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - the function prints the min number of coins
 * @argc: argument count
 * @argv: array of argument
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
int digt = 0, k, result;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
	printf("%s\n", "Error");
	return (1);
	}
	digt = atoi(argv[1]);
	result = 0;
	if (digt < 0)
	{
	printf("0\n");
	return (0);
	}
	for (k = 0; k < 5 && digt >= 0; k++)
	{
	while (digt >= coins[k])
	{
	result++;
	digt -= coins[k];
	}
	}
	printf("%d\n", result);
	return (0);
}

