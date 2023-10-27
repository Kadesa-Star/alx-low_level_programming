#include "main.h"
#include <stdio.h>
/**
 * main - the function
 * @argc: argument count
 * @argv: array of argument
 *
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
		int j;

		for (j = 0; j < argc; j++)
		{
			printf("%s\n", argv[j]);
		}
		return (0);
}
