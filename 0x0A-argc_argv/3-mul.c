#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - the function multiplies two numbs
 * @argc: argument count
 * @argv: array of argument
 *
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
}
